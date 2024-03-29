// This is a generated source file for Chilkat version 9.5.0.66
#ifndef _C_CkMailboxesWH
#define _C_CkMailboxesWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkMailboxesW CkMailboxesW_Create(void);
CK_VISIBLE_PUBLIC void CkMailboxesW_Dispose(HCkMailboxesW handle);
CK_VISIBLE_PUBLIC int CkMailboxesW_getCount(HCkMailboxesW cHandle);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_getLastMethodSuccess(HCkMailboxesW cHandle);
CK_VISIBLE_PUBLIC void  CkMailboxesW_putLastMethodSuccess(HCkMailboxesW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_GetFlags(HCkMailboxesW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkMailboxesW_getFlags(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC int CkMailboxesW_GetMailboxIndex(HCkMailboxesW cHandle, const wchar_t *mbxName);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_GetName(HCkMailboxesW cHandle, int index, HCkString outStrName);
CK_VISIBLE_PUBLIC const wchar_t *CkMailboxesW_getName(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_GetNthFlag(HCkMailboxesW cHandle, int index, int flagIndex, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkMailboxesW_getNthFlag(HCkMailboxesW cHandle, int index, int flagIndex);
CK_VISIBLE_PUBLIC int CkMailboxesW_GetNumFlags(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_HasFlag(HCkMailboxesW cHandle, int index, const wchar_t *flagName);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_HasInferiors(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_IsMarked(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_IsSelectable(HCkMailboxesW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMailboxesW_LoadTaskResult(HCkMailboxesW cHandle, HCkTaskW task);
#endif
