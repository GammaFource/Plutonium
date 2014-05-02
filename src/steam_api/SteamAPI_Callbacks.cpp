#include "stdafx.h"

S_API void S_CALL SteamAPI_RunCallbacks()
{
	//S_LOG();
	CallbacksManager::RunCallbacks();
}

S_API void S_CALL SteamAPI_RegisterCallback(class CCallbackBase* pCallback, int iCallback)
{
	A_LOG("iCallback: %d", iCallback);
	CallbacksManager::RegisterCallback(pCallback, iCallback);
}

S_API void S_CALL SteamAPI_RegisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall)
{
	A_LOG("hAPICall: %d", hAPICall);
	CallbacksManager::RegisterCallResult(pResult, hAPICall);
}

S_API void S_CALL SteamAPI_UnregisterCallback(class CCallbackBase* pCallback, int iCallback)
{
	A_LOG("iCallback: %d", iCallback);
	CallbacksManager::UnregisterCallback(pCallback, iCallback);
}

S_API void S_CALL SteamAPI_UnregisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall)
{
	A_LOG("hAPICall: %d", hAPICall);
	CallbacksManager::UnregisterCallResult(pResult, hAPICall);
}