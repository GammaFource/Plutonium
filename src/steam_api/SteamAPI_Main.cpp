#include "stdafx.h"

bool g_consoleAlloc = false;
bool g_consoleAllocDone = false;
const char* g_nickname = "UnnamedPlayer";
uint32 g_steamID = NULL;

S_API bool S_CALL SteamAPI_Init()
{
	if(GetFileAttributesA(".\\steam_api.ini") == INVALID_FILE_ATTRIBUTES)
	{
		MessageBoxA(0, 
			"The configuration file \'steam_api.ini\' could not be found in the current directory. " 
			"A new one will be automatically generated once you press OK.", 
			"Warning", MB_OK | MB_ICONWARNING);

		srand((uint32)time(NULL));

		CIniWriter ini(".\\steam_api.ini");
		ini.WriteString("Settings", "Nickname", "UnnamedPlayer");
		ini.WriteInteger("Settings", "SteamID", rand());
		ini.WriteBoolean("Miscellaneous", "EnableDebugConsole", false);
	}

	CIniReader ini(".\\steam_api.ini");
	g_nickname = ini.ReadString("Settings", "Nickname", "UnnamedPlayer");
	g_steamID = ini.ReadInteger("Settings", "SteamID", 0);
	g_consoleAlloc = ini.ReadBoolean("Miscellaneous", "EnableDebugConsole", false);
	
	if(g_consoleAlloc && !g_consoleAllocDone)
	{
		if(!AllocConsole())
		{
			MessageBoxA(0, "Could not allocate console.", "Error", MB_OK | MB_ICONERROR);
			TerminateProcess(GetCurrentProcess(), 0x0000DEAD);
			
			return false;
		}

		freopen("CON","w",stdout);
		g_consoleAllocDone = true;
	}

	S_LOG();

	return true;
}

S_API bool S_CALL SteamAPI_Shutdown()
{
	S_LOG();

	return true;
}