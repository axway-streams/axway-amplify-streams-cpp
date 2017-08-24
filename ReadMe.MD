# Simple C++ app using streamdata.io

This is a sample application that shows how to use CloudStreaming in a C++ application. 
CloudStreaming relies on two standard technologies: EventSource (https://www.w3.org/TR/eventsource/), and json-patch (http://jsonpatch.com/). 
This C++ implementation uses ChilKat (https://www.chilkatsoft.com/default.asp) as a C++ EventSource implementation (https://www.chilkatsoft.com/refdoc/vcCkServerSentEventRef.html), and JSON for Modern C++ (https://github.com/nlohmann/json) as a C++ json-patch implementation.

## Step by step setup

1. Get your CloudStreaming token from Xignite

2. Make sure you have Visual Studio 2017 installed.

3. Clone project and open the VS solution CppSample.sln.

4. Edit CppSample.cpp and replace ```_token=<token>``` with your CloudStreaming token.

5. Press Ctrl + F5 to build the project.

You should see data and patches pushed in your application and displayed on your terminal.

Feel free to test it with any CloudStreaming API of your choice.

If you have any question or remark, please contact support@streamdata.io
