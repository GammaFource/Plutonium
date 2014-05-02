#include "stdafx.h"

extern const char* g_nickname;

const char* CSteamFriends009::GetPersonaName()
{
	return g_nickname;
}

void CSteamFriends009::SetPersonaName(const char* pchPersonaName)
{
	g_nickname = pchPersonaName;
}

EPersonaState CSteamFriends009::GetPersonaState()
{
	return k_EPersonaStateOnline;
}

int CSteamFriends009::GetFriendCount( int iFriendFlags )
{
	return 1;
}

CSteamID CSteamFriends009::GetFriendByIndex( int iFriend, int iFriendFlags )
{
	return CSteamID(903482 + iFriend, k_EUniversePublic, k_EAccountTypeIndividual);
}

EFriendRelationship CSteamFriends009::GetFriendRelationship( CSteamID steamIDFriend )
{
	return k_EFriendRelationshipFriend;
}

EPersonaState CSteamFriends009::GetFriendPersonaState( CSteamID steamIDFriend )
{
	return k_EPersonaStateOnline;
}

const char *CSteamFriends009::GetFriendPersonaName( CSteamID steamIDFriend )
{
	return "Nobody";
}

bool CSteamFriends009::GetFriendGamePlayed( CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo )
{
	(*pFriendGameInfo).m_gameID = CGameID(0x1337);
	return true;
}

const char *CSteamFriends009::GetFriendPersonaNameHistory( CSteamID steamIDFriend, int iPersonaName )
{
	return "Nobody 2.0";
}

bool CSteamFriends009::HasFriend( CSteamID steamIDFriend, int iFriendFlags )
{
	return true;
}

int CSteamFriends009::GetClanCount()
{
	return 0;
}

CSteamID CSteamFriends009::GetClanByIndex( int iClan )
{
	return CSteamID((uint64)iClan);
}

const char *CSteamFriends009::GetClanName( CSteamID steamIDClan )
{
	return "Chupadores de Pila";
}

const char *CSteamFriends009::GetClanTag( CSteamID steamIDClan )
{
	return "CDP";
}

int CSteamFriends009::GetFriendCountFromSource( CSteamID steamIDSource )
{
	return 0;
}

CSteamID CSteamFriends009::GetFriendFromSourceByIndex( CSteamID steamIDSource, int iFriend )
{
	return CSteamID((uint64)iFriend);
}

bool CSteamFriends009::IsUserInSource( CSteamID steamIDUser, CSteamID steamIDSource )
{
	return true;
}

void CSteamFriends009::SetInGameVoiceSpeaking( CSteamID steamIDUser, bool bSpeaking )
{

}

void CSteamFriends009::ActivateGameOverlay( const char *pchDialog )
{

}

void CSteamFriends009::ActivateGameOverlayToUser( const char *pchDialog, CSteamID steamID )
{

}

void CSteamFriends009::ActivateGameOverlayToWebPage( const char *pchURL )
{

}

void CSteamFriends009::ActivateGameOverlayToStore( AppId_t nAppID )
{

}

void CSteamFriends009::SetPlayedWith( CSteamID steamIDUserPlayedWith )
{

}

void CSteamFriends009::ActivateGameOverlayInviteDialog( CSteamID steamIDLobby )
{

}

int CSteamFriends009::GetSmallFriendAvatar( CSteamID steamIDFriend )
{
	return 0;
}

int CSteamFriends009::GetMediumFriendAvatar( CSteamID steamIDFriend )
{
	return 0;
}

int CSteamFriends009::GetLargeFriendAvatar( CSteamID steamIDFriend )
{
	return 0;
}

bool CSteamFriends009::RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly )
{
	return true;
}

SteamAPICall_t CSteamFriends009::RequestClanOfficerList( CSteamID steamIDClan )
{
	return 0;
}

CSteamID CSteamFriends009::GetClanOwner( CSteamID steamIDClan )
{
	return steamIDClan.ConvertToUint64();
}

int CSteamFriends009::GetClanOfficerCount( CSteamID steamIDClan )
{
	return 0;
}

CSteamID CSteamFriends009::GetClanOfficerByIndex( CSteamID steamIDClan, int iOfficer )
{
	return steamIDClan.ConvertToUint64();
}

EUserRestriction CSteamFriends009::GetUserRestrictions()
{
	return k_nUserRestrictionNone;
}

bool CSteamFriends009::SetRichPresence( const char *pchKey, const char *pchValue )
{
	return true;
}

void CSteamFriends009::ClearRichPresence()
{
	
}

const char *CSteamFriends009::GetFriendRichPresence( CSteamID steamIDFriend, const char *pchKey )
{
	return "";
}

int CSteamFriends009::GetFriendRichPresenceKeyCount( CSteamID steamIDFriend )
{
	return 0;
}

const char *CSteamFriends009::GetFriendRichPresenceKeyByIndex( CSteamID steamIDFriend, int iKey )
{
	return "";
}

bool CSteamFriends009::InviteUserToGame( CSteamID steamIDFriend, const char *pchConnectString )
{
	return true;
}

int CSteamFriends009::GetCoplayFriendCount()
{
	return 0;
}

CSteamID CSteamFriends009::GetCoplayFriend( int iCoplayFriend )
{
	return CSteamID();
}

int CSteamFriends009::GetFriendCoplayTime( CSteamID steamIDFriend )
{
	return 0;
}

AppId_t CSteamFriends009::GetFriendCoplayGame( CSteamID steamIDFriend )
{
	return 0;
}