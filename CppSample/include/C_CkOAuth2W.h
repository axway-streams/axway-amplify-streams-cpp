// This is a generated source file for Chilkat version 9.5.0.66
#ifndef _C_CkOAuth2WH
#define _C_CkOAuth2WH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkOAuth2W_setAbortCheck(HCkOAuth2W cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkOAuth2W_setPercentDone(HCkOAuth2W cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkOAuth2W_setProgressInfo(HCkOAuth2W cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_VISIBLE_PUBLIC void CkOAuth2W_setTaskCompleted(HCkOAuth2W cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_VISIBLE_PUBLIC HCkOAuth2W CkOAuth2W_Create(void);
CK_VISIBLE_PUBLIC void CkOAuth2W_Dispose(HCkOAuth2W handle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getAccessToken(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putAccessToken(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_accessToken(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getAccessTokenResponse(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_accessTokenResponse(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC int CkOAuth2W_getAuthFlowState(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getAuthorizationEndpoint(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putAuthorizationEndpoint(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_authorizationEndpoint(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getClientId(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putClientId(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_clientId(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getClientSecret(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putClientSecret(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_clientSecret(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_getCodeChallenge(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putCodeChallenge(HCkOAuth2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkOAuth2W_getCodeChallengeMethod(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putCodeChallengeMethod(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_codeChallengeMethod(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getDebugLogFilePath(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putDebugLogFilePath(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_debugLogFilePath(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getFailureInfo(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_failureInfo(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getLastErrorHtml(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_lastErrorHtml(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getLastErrorText(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_lastErrorText(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getLastErrorXml(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_lastErrorXml(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_getLastMethodSuccess(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putLastMethodSuccess(HCkOAuth2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkOAuth2W_getListenPort(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putListenPort(HCkOAuth2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkOAuth2W_getLocalHost(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putLocalHost(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_localHost(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getRedirectAllowHtml(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putRedirectAllowHtml(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_redirectAllowHtml(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getRedirectDenyHtml(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putRedirectDenyHtml(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_redirectDenyHtml(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getRefreshToken(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putRefreshToken(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_refreshToken(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getResource(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putResource(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_resource(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getScope(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putScope(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_scope(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getTokenEndpoint(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putTokenEndpoint(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_tokenEndpoint(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void CkOAuth2W_getTokenType(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putTokenType(HCkOAuth2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_tokenType(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_getVerboseLogging(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC void  CkOAuth2W_putVerboseLogging(HCkOAuth2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkOAuth2W_getVersion(HCkOAuth2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_version(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_Cancel(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_Monitor(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkOAuth2W_MonitorAsync(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_RefreshAccessToken(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkOAuth2W_RefreshAccessTokenAsync(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_SaveLastError(HCkOAuth2W cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC void CkOAuth2W_SleepMs(HCkOAuth2W cHandle, int millisec);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_StartAuth(HCkOAuth2W cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkOAuth2W_startAuth(HCkOAuth2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkOAuth2W_UseConnection(HCkOAuth2W cHandle, HCkSocketW sock);
#endif
