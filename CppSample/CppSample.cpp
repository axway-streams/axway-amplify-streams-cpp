#include "stdafx.h"

// for convenience
using json = nlohmann::json;

void main(void) {

	//  Demonstrates how to begin receiving server-sent events, and to update
	//  your JSON database for each event.

	//  Put the streamdata token here.
	const char *token = "YOUR TOKEN HERE";
	//  Put the sample api here.
	const char *apiUrl = "http://stockmarket.streamdata.io/v2/prices";

	//  Init the ChilKat API.
	initChilKat();

	//  Init the connection with the Rest API.
	CkRest rest;
	initConnect(rest, token, apiUrl);
	
	//  Now it's time to begin receiving the event stream.  
	//  We'll start a background thread to read the stream. 
	CkStream eventStream;
	//  This sse object will be used as a helper to parse the server-sent event stream
	CkServerSentEvent sse;
	CkTask *task = rest.ReadRespBodyStreamAsync(eventStream, true);
	task->Run();

	json jData;

	//  We'll just read events until the application is shutdown
	while (!task->get_Finished()) {

		//  Get the next event, which is a series of text lines ending with a blank line
		const char *eventStr = eventStream.readUntilMatch("\n\n");
		if (eventStream.get_LastMethodSuccess() != true) {
			std::cout << eventStream.lastErrorText() << std::endl;
			//  Force the loop to exit.
			task->Cancel();
		}
		else {
			//  We have an event. Let's update our local copy of the JSON.
			streamLoop(sse, jData, eventStr, task);
		}
	}

	//  Make sure the background task is cancelled if still running.
	task->Cancel();

	delete task;
}

//  The Chilkat API can be unlocked for a fully-functional 30-day trial by passing any
//  string to the UnlockBundle method.  A program can unlock once at the start. Once unlocked,
//  all subsequently instantiated objects are created in the unlocked state.
// 
//  After licensing Chilkat, replace the "Anything for 30-day trial" with the purchased unlock code.
//  To verify the purchased unlock code was recognized, examine the contents of the LastErrorText
//  property after unlocking. 
void initChilKat(void) {
	CkGlobal glob;
	bool success = glob.UnlockBundle("Anything for 30-day trial");
	if (success != true) {
		std::cout << glob.lastErrorText() << std::endl;
		throw "Unable to init Chilkat";
	}
}

//  Make the initial connection.
void initConnect(CkRest& rest, const char *token, const char *apiUrl) {
	bool success = rest.Connect("streamdata.motwin.net", 443, true, true);
	if (success != true) {
		std::cout << rest.lastErrorText() << std::endl;
	}

	CkString apiUrlCompl;
	createUrl(rest, token, apiUrl, apiUrlCompl);

	//  Send the request.  (We are only sending the request here.
	//  We are not yet getting the response because the response
	//  will be a text/event-stream.)
	success = rest.SendReqNoBody("GET", apiUrlCompl);
	if (success != true) {
		std::cout << rest.lastErrorText() << std::endl;
		return;
	}

	//  Read the response header and verify it.
	checkConnect(rest);

}

//  Create the Url needed.
void createUrl(CkRest& rest, const char *token, const char *apiUrl, CkString& apiUrlCompl) {
	//  Add the query parameter for the authentification
	bool success = rest.AddQueryParam("X-Sd-Token", token);
	if (success != true) {
		std::cout << rest.lastErrorText() << std::endl;
		return;
	}

	rest.AddHeader("Accept", "text/event-stream");
	rest.AddHeader("Cache-Control", "no-cache");

	//  Create the complete api url
	apiUrlCompl.append("/");
	apiUrlCompl.append(apiUrl);
}

//  Read the response header and verify it.
void checkConnect(CkRest& rest) {
	//  We want to first get the response header to see if it's a successful
	//  response status code.  If not, then the response will not be a text/event-stream
	//  and we should read the response body normally
	int responseStatusCode = rest.ReadResponseHeader();
	if (responseStatusCode < 0) {
		std::cout << rest.lastErrorText() << std::endl;
		throw "Cannot connect";
	}

	//  If successful, a 200 response code is expected
	//  If the reponse code is not 200, then read the response body and fail..
	if (responseStatusCode != 200) {
		std::cout << "Response Code: " << responseStatusCode << std::endl;
		std::cout << "Response Status Text: " << rest.responseStatusText() << std::endl;
		std::cout << "Response Header: " << rest.responseHeader() << std::endl;
		const char *responseBody = rest.readRespBodyString();
		if (rest.get_LastMethodSuccess() == true) {
			std::cout << "Error Response Body: " << responseBody << std::endl;
		}
		std::cout << "Failed." << std::endl;
		throw "Cannot connect";
	}
}

//  Update the JSON depending on the event
void streamLoop(CkServerSentEvent& sse, json& jData, const char *eventStr, CkTask *task) {
	bool success = sse.LoadEvent(eventStr);
	if (success != true) {
		std::cout << "Failed to load sse event: " << eventStr << std::endl;
	}
	else {
		CkString evName;
		evName.append(sse.eventName());
		CkString evData;
		evData.append(sse.data());
		if (evData.isEmpty() != true) {
			if (evName.equals("data")) {
				jData = json::parse(evData.getString());
				std::cout << "Data received :" << jData << std::endl << std::endl;
			}
			else if (evName.equals("patch")) {
				json jPatch;
				jPatch = json::parse(evData.getString());
				std::cout << "Patch received :" << jPatch << std::endl;
				std::cout << "Applying patch..." << std::endl;
				jData = jData.patch(jPatch);
				std::cout << "Data updated: " << jData << std::endl << std::endl;
			}
			else if (evName.equals("error")) {
				std::cout << "Event error: " << evData.getString() << std::endl << std::endl;
				task->Cancel();
			}
		}
		else {
			std::cout << "Error : Empty data" << std::endl;
		}
	}
}