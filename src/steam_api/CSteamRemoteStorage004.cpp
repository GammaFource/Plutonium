#include "stdafx.h"

bool CSteamRemoteStorage004::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
	return true;
}

int32 CSteamRemoteStorage004::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
	return 0;
}

bool CSteamRemoteStorage004::FileForget( const char *pchFile )
{
	return true;
}

bool CSteamRemoteStorage004::FileDelete( const char *pchFile )
{
	return true;
}

SteamAPICall_t CSteamRemoteStorage004::FileShare( const char *pchFile )
{
	return 0;
}

bool CSteamRemoteStorage004::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
	return true;
}

bool CSteamRemoteStorage004::FileExists( const char *pchFile )
{
	return true;
}

bool CSteamRemoteStorage004::FilePersisted( const char *pchFile )
{
	return true;
}

int32 CSteamRemoteStorage004::GetFileSize( const char *pchFile )
{
	return 0;
}

int64 CSteamRemoteStorage004::GetFileTimestamp( const char *pchFile )
{
	return GetTickCount64();
}

ERemoteStoragePlatform CSteamRemoteStorage004::GetSyncPlatforms( const char *pchFile )
{
	return k_ERemoteStoragePlatformWindows;
}

int32 CSteamRemoteStorage004::GetFileCount()
{
	return 0;
}

const char *CSteamRemoteStorage004::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
	*pnFileSizeInBytes = 0;
	return "null";
}

bool CSteamRemoteStorage004::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
	*pnTotalBytes = 0;
	*puAvailableBytes = 0;

	return true;
}

bool CSteamRemoteStorage004::IsCloudEnabledForAccount()
{
	return true;
}

bool CSteamRemoteStorage004::IsCloudEnabledForApp()
{
	return false;
}

void CSteamRemoteStorage004::SetCloudEnabledForApp( bool bEnabled )
{

}

SteamAPICall_t CSteamRemoteStorage004::UGCDownload( UGCHandle_t hContent )
{
	static _Deprecated_RemoteStorageDownloadUGCResult_t cb;

	cb.m_eResult = k_EResultOK;
	cb.m_hFile = 293829382539853285;
	cb.m_nAppID = 1337;
	cb.m_nSizeInBytes = 0;
	cb.m_pchFileName = "no.pe";
	cb.m_ulSteamIDOwner = CSteamID(0x1337, k_EUniversePublic, k_EAccountTypeIndividual).ConvertToUint64();

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	return callID;
}

bool CSteamRemoteStorage004::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return true;
}

int32 CSteamRemoteStorage004::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return 0;
}

int32 CSteamRemoteStorage004::GetCachedUGCCount()
{
	return 0;
}

UGCHandle_t CSteamRemoteStorage004::GetCachedUGCHandle( int32 iCachedContent )
{
	return 0;
}