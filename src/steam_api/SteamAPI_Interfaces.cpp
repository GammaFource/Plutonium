#include "stdafx.h"

S_API ISteamApps004* S_CALL SteamApps()
{
	S_LOG();
	return new CSteamApps004();
}

S_API ISteamFriends009* S_CALL SteamFriends()
{
	S_LOG();
	return new CSteamFriends009();	
}

S_API ISteamGameServer010* S_CALL SteamGameServer()
{
	S_LOG();
	return 0;
}

S_API ISteamMasterServerUpdater001* S_CALL SteamMasterServerUpdater()
{
	S_LOG();
	return 0;
}

S_API ISteamMatchmaking008* S_CALL SteamMatchmaking()
{
	S_LOG();
	return new CSteamMatchmaking008();
}

S_API ISteamMatchmakingServers002* S_CALL SteamMatchmakingServers()
{
	S_LOG();
	return new CSteamMatchmakingServers002();
}

S_API ISteamNetworking005* S_CALL SteamNetworking()
{
	// Spamming the console a lot
	//S_LOG();

	return new CSteamNetworking005();
}

S_API ISteamRemoteStorage004* S_CALL SteamRemoteStorage()
{
	S_LOG();
	return new CSteamRemoteStorage004();
}

S_API ISteamUser016* S_CALL SteamUser()
{
	S_LOG();
	return new CSteamUser016();
}

S_API ISteamUtils005* S_CALL SteamUtils()
{
	S_LOG();
	return new CSteamUtils005();
}