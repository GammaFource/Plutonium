#ifndef __CSTEAMREMOTESTORAGE004_H__
#define __CSTEAMREMOTESTORAGE004_H__

class CSteamRemoteStorage004 : public ISteamRemoteStorage004
{
public:
	bool FileWrite( const char *pchFile, const void *pvData, int32 cubData );
	int32 FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
	bool FileForget( const char *pchFile );
	bool FileDelete( const char *pchFile );
	SteamAPICall_t FileShare( const char *pchFile );
	bool SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
	bool FileExists( const char *pchFile );
	bool FilePersisted( const char *pchFile );
	int32 GetFileSize( const char *pchFile );
	int64 GetFileTimestamp( const char *pchFile );
	ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
	int32 GetFileCount();
	const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
	bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
	bool IsCloudEnabledForAccount();
	bool IsCloudEnabledForApp();
	void SetCloudEnabledForApp( bool bEnabled );
	SteamAPICall_t UGCDownload( UGCHandle_t hContent );
	bool GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
	int32 UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
	int32 GetCachedUGCCount();
	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
};

#endif /* __CSTEAMREMOTESTORAGE004_H__ */