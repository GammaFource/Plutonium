#include "stdafx.h"

int CSteamMatchmaking008::GetFavoriteGameCount()
{
	return 0;
}

bool CSteamMatchmaking008::GetFavoriteGame( int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer )
{
	return true;
}

int CSteamMatchmaking008::AddFavoriteGame( AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer )
{
	return 0;
}

bool CSteamMatchmaking008::RemoveFavoriteGame( AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags )
{
	return true;
}

SteamAPICall_t CSteamMatchmaking008::RequestLobbyList()
{
	static LobbyMatchList_t cb;
	cb.m_nLobbiesMatching = 0;

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	return callID;
}

void CSteamMatchmaking008::AddRequestLobbyListStringFilter( const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType )
{

}

void CSteamMatchmaking008::AddRequestLobbyListNumericalFilter( const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType )
{

}

void CSteamMatchmaking008::AddRequestLobbyListNearValueFilter( const char *pchKeyToMatch, int nValueToBeCloseTo )
{

}

void CSteamMatchmaking008::AddRequestLobbyListFilterSlotsAvailable( int nSlotsAvailable )
{

}

void CSteamMatchmaking008::AddRequestLobbyListDistanceFilter( ELobbyDistanceFilter eLobbyDistanceFilter )
{

}

void CSteamMatchmaking008::AddRequestLobbyListResultCountFilter( int cMaxResults )
{

}

void CSteamMatchmaking008::AddRequestLobbyListCompatibleMembersFilter( CSteamID steamID )
{

}

CSteamID CSteamMatchmaking008::GetLobbyByIndex( int iLobby )
{
	return CSteamID(iLobby+1, k_EUniversePublic, k_EAccountTypeIndividual);
}

SteamAPICall_t CSteamMatchmaking008::CreateLobby( ELobbyType eLobbyType, int cMaxMembers )
{
	CSteamID steamIDLobby = CSteamID(0x1337+cMaxMembers, k_EUniversePublic, k_EAccountTypeChat);

	static LobbyCreated_t cb;
	cb.m_eResult = k_EResultOK;
	cb.m_ulSteamIDLobby = steamIDLobby.ConvertToUint64();

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	JoinLobby(steamIDLobby);
	return callID;
}

SteamAPICall_t CSteamMatchmaking008::JoinLobby( CSteamID steamIDLobby )
{
	static LobbyEnter_t cb;
	cb.m_bLocked = false;
	cb.m_EChatRoomEnterResponse = k_EChatRoomEnterResponseSuccess;
	cb.m_rgfChatPermissions = k_EChatPermissionMute;
	cb.m_ulSteamIDLobby = steamIDLobby.ConvertToUint64();

	SteamAPICall_t callID = CallbacksManager::GetSteamAPICall();
	CallbacksManager::InsertResult(&cb, callID);

	return callID;
}

void CSteamMatchmaking008::LeaveLobby( CSteamID steamIDLobby )
{

}

bool CSteamMatchmaking008::InviteUserToLobby( CSteamID steamIDLobby, CSteamID steamIDInvitee )
{
	return true;
}

int CSteamMatchmaking008::GetNumLobbyMembers( CSteamID steamIDLobby )
{
	return 0;
}

CSteamID CSteamMatchmaking008::GetLobbyMemberByIndex( CSteamID steamIDLobby, int iMember )
{
	return CSteamID();
}

const char *CSteamMatchmaking008::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return "yolo";
}

bool CSteamMatchmaking008::SetLobbyData( CSteamID steamIDLobby, const char *pchKey, const char *pchValue )
{
	return true;
}

int CSteamMatchmaking008::GetLobbyDataCount( CSteamID steamIDLobby )
{
	return 0;
}

bool CSteamMatchmaking008::GetLobbyDataByIndex( CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize )
{
	return true;
}

bool CSteamMatchmaking008::DeleteLobbyData( CSteamID steamIDLobby, const char *pchKey )
{
	return true;
}

const char *CSteamMatchmaking008::GetLobbyMemberData( CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey )
{
	return 0;
}

void CSteamMatchmaking008::SetLobbyMemberData( CSteamID steamIDLobby, const char *pchKey, const char *pchValue )
{

}

bool CSteamMatchmaking008::SendLobbyChatMsg( CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody )
{
	return true;
}

int CSteamMatchmaking008::GetLobbyChatEntry( CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType )
{
	return 0;
}

bool CSteamMatchmaking008::RequestLobbyData( CSteamID steamIDLobby )
{
	return true;
}

void CSteamMatchmaking008::SetLobbyGameServer( CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer )
{

}

bool CSteamMatchmaking008::GetLobbyGameServer( CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer )
{
	return true;
}

bool CSteamMatchmaking008::SetLobbyMemberLimit( CSteamID steamIDLobby, int cMaxMembers )
{
	return true;
}

int CSteamMatchmaking008::GetLobbyMemberLimit( CSteamID steamIDLobby )
{
	return 0;
}

bool CSteamMatchmaking008::SetLobbyType( CSteamID steamIDLobby, ELobbyType eLobbyType )
{
	return true;
}

bool CSteamMatchmaking008::SetLobbyJoinable( CSteamID steamIDLobby, bool bLobbyJoinable )
{
	return true;
}

CSteamID CSteamMatchmaking008::GetLobbyOwner( CSteamID steamIDLobby )
{
	return CSteamID();
}

bool CSteamMatchmaking008::SetLobbyOwner( CSteamID steamIDLobby, CSteamID steamIDNewOwner )
{
	return true;
}

bool CSteamMatchmaking008::SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2)
{
	return true;
}