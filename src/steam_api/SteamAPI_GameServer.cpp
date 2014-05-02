#include "stdafx.h"

S_API bool S_CALL SteamGameServer_Init()
{
	S_LOG();

	// TODO: implement game server stuff from the old project.

	return true;
}

S_API bool S_CALL SteamGameServer_Shutdown()
{
	S_LOG();
	return true;
}

S_API void S_CALL SteamGameServer_RunCallbacks()
{
	S_LOG();
	CallbacksManager::RunCallbacks();
}

S_API ISteamUtils005* S_CALL SteamGameServerUtils()
{
	return new CSteamUtils005();
}

S_API ISteamNetworking005* S_CALL SteamGameServerNetworking()
{
	return new CSteamNetworking005();
}