#pragma once

void main(void);

void initChilKat(void);
void initConnect(CkRest& rest, const char *apiUrl);
void createUrl(CkRest& rest, const char *apiUrl, CkString& apiUrlCompl);
void checkConnect(CkRest& rest);
void streamLoop(CkServerSentEvent& sse, nlohmann::json& jData, const char *eventStr, CkTask *task);