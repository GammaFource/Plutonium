#include "stdafx.h"

map<AppId_t, bool> dlcList;

bool CSteamApps004::BIsSubscribed()
{
	return true;
}

bool CSteamApps004::BIsLowViolence()
{
	return false;
}

bool CSteamApps004::BIsCybercafe()
{
	return false;
}

bool CSteamApps004::BIsVACBanned()
{
	return false;
}

const char* CSteamApps004::GetCurrentGameLanguage()
{
	return "english";
}

const char* CSteamApps004::GetAvailableGameLanguages()
{
	return "english";
}

bool CSteamApps004::BIsSubscribedApp(AppId_t nAppID)
{
	return true;
}

bool CSteamApps004::BIsDlcInstalled(AppId_t nAppID)
{
	A_LOG("nAppID: %d", nAppID);
	return true;
	return dlcList[nAppID];
}

uint32 CSteamApps004::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	return 0;
}

bool CSteamApps004::BIsSubscribedFromFreeWeekend()
{
	return false;
}

int CSteamApps004::GetDLCCount()
{
	S_LOG();
	return 0;
	return dlcList.size();
}

bool CSteamApps004::BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pAvailable, char* pchName, int cchNameBufferSize)
{
	*pAppID = 1337;
	*pAvailable = true;
	pchName = new char[cchNameBufferSize];

	return true;
}

void CSteamApps004::InstallDLC(AppId_t nAppID)
{

}

void CSteamApps004::UninstallDLC(AppId_t nAppID)
{

}