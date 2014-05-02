#ifndef __STDAFX_H__
#define __STDAFX_H__

#pragma comment(lib, "ws2_32.lib")

#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

using namespace std;

#include <WinSock2.h>
#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#include <vector>
#include <map>
#include <string>

#include <osw\CCallback.h>
#include <osw\ISteamApps004.h>
#include <osw\ISteamFriends009.h>
#include <osw\ISteamGameServer010.h>
#include <osw\ISteamMasterServerUpdater001.h>
#include <osw\ISteamMatchmaking008.h>
#include <osw\ISteamMatchmakingServers002.h>
#include <osw\ISteamNetworking005.h>
#include <osw\ISteamRemoteStorage004.h>
#include <osw\ISteamUser016.h>
#include <osw\ISteamUtils005.h>

#include "CallbacksManager.h"
#include "CSteamApps004.h"
#include "CSteamFriends009.h"
#include "CSteamUser016.h"
#include "CSteamUtils005.h"
#include "CSteamNetworking005.h"
#include "CSteamMatchmaking008.h"
#include "CSteamMatchmakingServers002.h"
#include "CSteamRemoteStorage004.h"

#include "IniReader.h"
#include "IniWriter.h"

#undef S_API
#define S_API extern "C" __declspec(dllexport)
#define S_CALL __cdecl

inline void Steam_Printf(const char* func, const char* fmt, ...)
{
	char vaBuf[256];
	va_list arg;
	va_start(arg, fmt);
	_vsnprintf(vaBuf, 256, fmt, arg);
	va_end(arg);

	printf("[S_API] %s() ---> %s\n", func, vaBuf);
}

#define LOG_ENABLED 1

#if LOG_ENABLED
#define A_LOG(fmt, ...) Steam_Printf(__FUNCTION__, fmt, ##__VA_ARGS__)
#define S_LOG() printf("[S_API] %s()\n", __FUNCTION__)
#else
#define A_LOG()
#define S_LOG()
#endif

#endif /* __STDAFX_H__ */