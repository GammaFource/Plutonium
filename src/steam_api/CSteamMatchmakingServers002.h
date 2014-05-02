#ifndef __STEAMMATCHMAKINGSERVERS002_H__
#define __STEAMMATCHMAKINGSERVERS002_H__

class CSteamMatchmakingServers002 : public ISteamMatchmakingServers002
{
public:
	HServerListRequest RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	HServerListRequest RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	HServerListRequest RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	HServerListRequest RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	HServerListRequest RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	HServerListRequest RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
	void ReleaseRequest(HServerListRequest hServerListRequest);
	gameserveritem_t *GetServerDetails( HServerListRequest hRequest, int iServer );
	void CancelQuery( HServerListRequest hRequest );
	void RefreshQuery( HServerListRequest hRequest );
	bool IsRefreshing( HServerListRequest hRequest );
	int GetServerCount( HServerListRequest hRequest );
	void RefreshServer( HServerListRequest hRequest, int iServer );
	HServerQuery PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse );
	HServerQuery PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse );
	HServerQuery ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse );
	void CancelServerQuery( HServerQuery hServerQuery );
};

#endif /* __STEAMMATCHMAKINGSERVERS002_H__ */