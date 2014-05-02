#ifndef __CALLBACKSMANAGER_H__
#define __CALLBACKSMANAGER_H__

class CallbacksManager
{
private:
	static SteamAPICall_t callID;

public:
	static void RunCallbacks();
	static void RegisterCallback(class CCallbackBase* pCallback, int iCallback);
	static void RegisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall);
	static void UnregisterCallback(class CCallbackBase* pCallback, int iCallback);
	static void UnregisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall);

	static SteamAPICall_t GetSteamAPICall();

	static void InsertResult(LPVOID lpResult, SteamAPICall_t hAPICall);
	static bool ClearResults();
};

#endif /* __CALLBACKSMANAGER_H__ */