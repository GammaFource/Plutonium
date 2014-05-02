#ifndef __CSTEAMAPPS004_H__
#define __CSTEAMAPPS004_H__

class CSteamApps004 : public ISteamApps004
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char* GetCurrentGameLanguage();
	const char* GetAvailableGameLanguages();
	bool BIsSubscribedApp(AppId_t nAppID);
	bool BIsDlcInstalled(AppId_t nAppID);
	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);
	bool BIsSubscribedFromFreeWeekend();
	int GetDLCCount();
	bool BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pAvailable, char* pchName, int cchNameBufferSize);
	void InstallDLC(AppId_t nAppID);
	void UninstallDLC(AppId_t nAppID);
};

#endif /* __CSTEAMAPPS004_H__ */