#include "stdafx.h"

extern uint32 g_steamID;
char g_appTicket[256];
bool g_reqDone = false;
int g_ticketLen = 0;

struct ourTicket_s
{
	DWORD signature;
	char* sessionID;
} ticket;

HSteamUser CSteamUser016::GetHSteamUser()
{
	return 0;
}

bool CSteamUser016::BLoggedOn()
{
	return false;
}

CSteamID CSteamUser016::GetSteamID()
{
	return CSteamID(g_steamID, k_EUniversePublic, k_EAccountTypeIndividual);
}

int CSteamUser016::InitiateGameConnection( void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure )
{
	return 0;
}

void CSteamUser016::TerminateGameConnection( uint32 unIPServer, uint16 usPortServer )
{

}

void CSteamUser016::TrackAppUsageEvent( CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo )
{

}

bool CSteamUser016::GetUserDataFolder( char *pchBuffer, int cubBuffer )
{
	return true;
}

void CSteamUser016::StartVoiceRecording( )
{

}

void CSteamUser016::StopVoiceRecording( )
{

}

EVoiceResult CSteamUser016::GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
	return k_EVoiceResultOK;
}

EVoiceResult CSteamUser016::GetVoice( bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate )
{
	return k_EVoiceResultOK;
}

EVoiceResult CSteamUser016::DecompressVoice( const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate )
{
	return k_EVoiceResultOK;
}

uint32 CSteamUser016::GetVoiceOptimalSampleRate()
{
	return 0;
}

HAuthTicket CSteamUser016::GetAuthSessionTicket( void *pTicket, int cbMaxTicket, uint32 *pcbTicket )
{
	return 0;
}

EBeginAuthSessionResult CSteamUser016::BeginAuthSession( const void *pAuthTicket, int cbAuthTicket, CSteamID steamID )
{
	static ValidateAuthTicketResponse_t cb;
	cb.m_eAuthSessionResponse = k_EAuthSessionResponseOK;
	cb.m_SteamID = GetSteamID().ConvertToUint64();

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	return k_EBeginAuthSessionResultOK;
}

void CSteamUser016::EndAuthSession( CSteamID steamID )
{

}

void CSteamUser016::CancelAuthTicket( HAuthTicket hAuthTicket )
{

}

EUserHasLicenseForAppResult CSteamUser016::UserHasLicenseForApp( CSteamID steamID, AppId_t appID )
{
	return k_EUserHasLicenseResultHasLicense;
}

bool CSteamUser016::BIsBehindNAT()
{
	return true;
}

void CSteamUser016::AdvertiseGame( CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer )
{

}

SteamAPICall_t CSteamUser016::RequestEncryptedAppTicket( void *pDataToInclude, int cbDataToInclude )
{
	g_reqDone = false;
	int pos = 0;

	// Callbacks stuff
	static EncryptedAppTicketResponse_t cb;
	cb.m_eResult = k_EResultOK;

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	// Now composes our ticket
	ticket.signature = 0xDEADFACE;
	ticket.sessionID = "CHANGE-THIS-LATER";

	memcpy(g_appTicket + pos, &ticket, sizeof(ticket));
	pos += sizeof(ticket);
	memcpy(g_appTicket + pos, pDataToInclude, cbDataToInclude);
	pos += cbDataToInclude;

	g_ticketLen = pos;
	g_reqDone = true;
	return callID;
}

bool CSteamUser016::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
	if(!g_reqDone)
		return false;

	memcpy(pTicket, g_appTicket, cbMaxTicket);
	*pcbTicket = g_ticketLen;

	return true;
}