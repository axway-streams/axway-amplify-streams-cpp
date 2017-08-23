# Simple C++ app using streamdata.io

This is a sample application that shows how to use Streamdata.io in a C++ application. 
Streamdata.io relies on two standard technologies : EventSource (https://www.w3.org/TR/eventsource/), and json-patch 
(http://jsonpatch.com/). 
This C++ implementation uses ChilKat (https://www.chilkatsoft.com/default.asp) as a C++ EventSource implementation 
(https://www.chilkatsoft.com/refdoc/vcCkServerSentEventRef.html), and JSON for Modern C++ 
(https://github.com/nlohmann/json) as a C++ json-patch implementation.

## Step by step setup

1. Create an free account on streamdata.io https://portal.streamdata.io/#/register to get an App token.

2. Make sure you have Visual Studio 2017 installed.

3. Clone project and open the VS solution CppSample.sln.

4. Edit CppSample.cpp and replace ```[YOUR TOKEN HERE]``` with your App token.

5. Press Ctrl + F5 to build the project.

You should see data and patches pushed in your application and displayed on your terminal.

you can use the provided demo example API which simulates updating stocks prices from a financial market:
'http://stockmarket.streamdata.io/v2/prices'

Feel free to test it with any REST/Json API of your choice.

If you have any question or remark, please contact support@streamdata.io