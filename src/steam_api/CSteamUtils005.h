#ifndef __STEAMUTILS005_H__
#define __STEAMUTILS005_H__

class CSteamUtils005 : public ISteamUtils005
{
	uint32 GetSecondsSinceAppActive();
	uint32 GetSecondsSinceComputerActive();
	EUniverse GetConnectedUniverse();
	uint32 GetServerRealTime();
	const char *GetIPCountry();
	bool GetImageSize( int iImage, uint32 *pnWidth, uint32 *pnHeight );
	bool GetImageRGBA( int iImage, uint8 *pubDest, int nDestBufferSize );
	bool GetCSERIPPort( uint32 *unIP, uint16 *usPort );
	uint8 GetCurrentBatteryPower();
	uint32 GetAppID();
	void SetOverlayNotificationPosition( ENotificationPosition eNotificationPosition );
	bool IsAPICallCompleted( SteamAPICall_t hSteamAPICall, bool *pbFailed );
	ESteamAPICallFailure GetAPICallFailureReason( SteamAPICall_t hSteamAPICall );
	bool GetAPICallResult( SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed );
	void RunFrame();
	uint32 GetIPCCallCount();
	void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction );
	bool IsOverlayEnabled();
	bool BOverlayNeedsPresent();
	SteamAPICall_t CheckFileSignature( const char *szFileName );
	bool ShowGamepadTextInput( EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength );
	uint32 GetEnteredGamepadTextLength();
	bool GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax);
};

#endif /* __STEAMUTILS005_H__ */