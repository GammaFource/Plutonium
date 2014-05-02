#include "stdafx.h"

uint32 CSteamUtils005::GetSecondsSinceAppActive()
{
	return 0;
}

uint32 CSteamUtils005::GetSecondsSinceComputerActive()
{
	return 0;
}

EUniverse CSteamUtils005::GetConnectedUniverse()
{
	return k_EUniversePublic;
}

uint32 CSteamUtils005::GetServerRealTime()
{
	return 0;
}

const char *CSteamUtils005::GetIPCountry()
{
	return "PT";
}

bool CSteamUtils005::GetImageSize( int iImage, uint32 *pnWidth, uint32 *pnHeight )
{
	return true;
}

bool CSteamUtils005::GetImageRGBA( int iImage, uint8 *pubDest, int nDestBufferSize )
{
	return true;
}

bool CSteamUtils005::GetCSERIPPort( uint32 *unIP, uint16 *usPort )
{
	return true;
}

uint8 CSteamUtils005::GetCurrentBatteryPower()
{
	return 255;
}

uint32 CSteamUtils005::GetAppID()
{
	return 0;
}

void CSteamUtils005::SetOverlayNotificationPosition( ENotificationPosition eNotificationPosition )
{
	
}

bool CSteamUtils005::IsAPICallCompleted( SteamAPICall_t hSteamAPICall, bool *pbFailed )
{
	return true;
}

ESteamAPICallFailure CSteamUtils005::GetAPICallFailureReason( SteamAPICall_t hSteamAPICall )
{
	return k_ESteamAPICallFailureNone;
}

bool CSteamUtils005::GetAPICallResult( SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed )
{
	return true;
}

void CSteamUtils005::RunFrame()
{
	
}

uint32 CSteamUtils005::GetIPCCallCount()
{
	return 1;
}

void CSteamUtils005::SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction )
{
	
}

bool CSteamUtils005::IsOverlayEnabled()
{
	return true;
}

bool CSteamUtils005::BOverlayNeedsPresent()
{
	return true;
}

SteamAPICall_t CSteamUtils005::CheckFileSignature( const char *szFileName )
{
	A_LOG("szFileName: %s", szFileName);

	static CheckFileSignature_t cb;
	cb.m_eCheckFileSignature = k_ECheckFileSignatureValidSignature;

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	return callID;
}

bool CSteamUtils005::ShowGamepadTextInput( EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength )
{
	return true;
}

uint32 CSteamUtils005::GetEnteredGamepadTextLength()
{
	return 0;
}

bool CSteamUtils005::GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax)
{
	return true;
}