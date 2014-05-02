#include "stdafx.h"

HServerListRequest CSteamMatchmakingServers002::RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

HServerListRequest CSteamMatchmakingServers002::RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

HServerListRequest CSteamMatchmakingServers002::RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

HServerListRequest CSteamMatchmakingServers002::RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

HServerListRequest CSteamMatchmakingServers002::RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

HServerListRequest CSteamMatchmakingServers002::RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	return 0;
}

void CSteamMatchmakingServers002::ReleaseRequest(HServerListRequest hServerListRequest)
{

}

gameserveritem_t *CSteamMatchmakingServers002::GetServerDetails( HServerListRequest hRequest, int iServer )
{
	return 0;
}

void CSteamMatchmakingServers002::CancelQuery( HServerListRequest hRequest )
{

}

void CSteamMatchmakingServers002::RefreshQuery( HServerListRequest hRequest )
{

}

bool CSteamMatchmakingServers002::IsRefreshing( HServerListRequest hRequest )
{
	return false;
}

int CSteamMatchmakingServers002::GetServerCount( HServerListRequest hRequest )
{
	return 0;
}

void CSteamMatchmakingServers002::RefreshServer( HServerListRequest hRequest, int iServer )
{

}

HServerQuery CSteamMatchmakingServers002::PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse )
{
	return 0;
}

HServerQuery CSteamMatchmakingServers002::PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse )
{
	return 0;
}

HServerQuery CSteamMatchmakingServers002::ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse )
{
	return 0;
}

void CSteamMatchmakingServers002::CancelServerQuery(HServerQuery hServerQuery)
{

}