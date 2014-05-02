#ifndef __CSTEAMFRIENDS009_H__
#define __CSTEAMFRIENDS009_H__

class CSteamFriends009 : public ISteamFriends009
{
public:
	const char* GetPersonaName();
	void SetPersonaName(const char* pchPersonaName);
	EPersonaState GetPersonaState();
	int GetFriendCount( int iFriendFlags );
	CSteamID GetFriendByIndex( int iFriend, int iFriendFlags );
	EFriendRelationship GetFriendRelationship( CSteamID steamIDFriend );
	EPersonaState GetFriendPersonaState( CSteamID steamIDFriend );
	const char *GetFriendPersonaName( CSteamID steamIDFriend );
	bool GetFriendGamePlayed( CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo );
	const char *GetFriendPersonaNameHistory( CSteamID steamIDFriend, int iPersonaName );
	bool HasFriend( CSteamID steamIDFriend, int iFriendFlags );
	int GetClanCount();
	CSteamID GetClanByIndex( int iClan );
	const char *GetClanName( CSteamID steamIDClan );
	const char *GetClanTag( CSteamID steamIDClan );
	int GetFriendCountFromSource( CSteamID steamIDSource );
	CSteamID GetFriendFromSourceByIndex( CSteamID steamIDSource, int iFriend );
	bool IsUserInSource( CSteamID steamIDUser, CSteamID steamIDSource );
	void SetInGameVoiceSpeaking( CSteamID steamIDUser, bool bSpeaking );
	void ActivateGameOverlay( const char *pchDialog );
	void ActivateGameOverlayToUser( const char *pchDialog, CSteamID steamID );
	void ActivateGameOverlayToWebPage( const char *pchURL );
	void ActivateGameOverlayToStore( AppId_t nAppID );
	void SetPlayedWith( CSteamID steamIDUserPlayedWith );
	void ActivateGameOverlayInviteDialog( CSteamID steamIDLobby );
	int GetSmallFriendAvatar( CSteamID steamIDFriend );
	int GetMediumFriendAvatar( CSteamID steamIDFriend );
	int GetLargeFriendAvatar( CSteamID steamIDFriend );
	bool RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly );
	SteamAPICall_t RequestClanOfficerList( CSteamID steamIDClan );
	CSteamID GetClanOwner( CSteamID steamIDClan );
	int GetClanOfficerCount( CSteamID steamIDClan );
	CSteamID GetClanOfficerByIndex( CSteamID steamIDClan, int iOfficer );
	EUserRestriction GetUserRestrictions();
	bool SetRichPresence( const char *pchKey, const char *pchValue );
	void ClearRichPresence();
	const char *GetFriendRichPresence( CSteamID steamIDFriend, const char *pchKey );
	int GetFriendRichPresenceKeyCount( CSteamID steamIDFriend );
	const char *GetFriendRichPresenceKeyByIndex( CSteamID steamIDFriend, int iKey );
	bool InviteUserToGame( CSteamID steamIDFriend, const char *pchConnectString );
	int GetCoplayFriendCount();
	CSteamID GetCoplayFriend( int iCoplayFriend );
	int GetFriendCoplayTime( CSteamID steamIDFriend );
	AppId_t GetFriendCoplayGame( CSteamID steamIDFriend );
};

#endif /* __CSTEAMFRIENDS009_H__ */