#include "stdafx.h"

map<CCallbackBase*, int>			mCallbacks;
map<CCallbackBase*, SteamAPICall_t> mCallResults;
map<void*, SteamAPICall_t>			mResults;

typedef map<CCallbackBase*, int>::iterator				mCallbacksItr;
typedef map<CCallbackBase*, SteamAPICall_t>::iterator	mCallResultsItr;
typedef map<LPVOID, SteamAPICall_t>::iterator			mResultsItr;

SteamAPICall_t CallbacksManager::callID;

void CallbacksManager::RunCallbacks()
{
	for(mResultsItr itr = mResults.begin();
		itr != mResults.end(); itr++)
	{
		LPVOID			lpResult = itr->first;
		SteamAPICall_t	hAPICall = itr->second;

		for(mCallResultsItr itr2 = mCallResults.begin();
			itr2 != mCallResults.end(); itr2++)
		{
			CCallbackBase* pCallback = itr2->first;
			SteamAPICall_t hAPICall2 = itr2->second;

			if(hAPICall == hAPICall2)
			{
				pCallback->Run(lpResult, false, hAPICall);
			}
		}
	}

	ClearResults();
}

void CallbacksManager::RegisterCallback(class CCallbackBase* pCallback, int iCallback)
{
	mCallbacks.insert(make_pair(pCallback, iCallback));
}

void CallbacksManager::RegisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall)
{
	mCallResults.insert(make_pair(pResult, hAPICall));
}

void CallbacksManager::UnregisterCallback(class CCallbackBase* pCallback, int iCallback)
{
	for(mCallbacksItr itr = mCallbacks.begin();
		itr != mCallbacks.end();)
	{
		CCallbackBase* pCallback2 = itr->first;
		__int32 iCallback2 = itr->second;

		if(pCallback == pCallback2 &&
			iCallback == iCallback2 &&
			pCallback->GetICallback() == iCallback2)
		{
			mCallbacks.erase(itr++);
		}
		else
		{
			++itr;
		}
	}
}

void CallbacksManager::UnregisterCallResult(class CCallbackBase* pResult, SteamAPICall_t hAPICall)
{
	for(mCallResultsItr itr = mCallResults.begin();
		itr != mCallResults.end();)
	{
		CCallbackBase* pCallback2 = itr->first;
		SteamAPICall_t hAPICall2 = itr->second;

		if(pCallback2 == pResult &&
			hAPICall == hAPICall2)
		{
			mCallResults.erase(itr++);
		}
		else
		{
			++itr;
		}
	}
}

void CallbacksManager::InsertResult(LPVOID lpResult, SteamAPICall_t hAPICall)
{
	mResults.insert(make_pair(lpResult, hAPICall));
}

SteamAPICall_t CallbacksManager::GetSteamAPICall()
{
	return callID++;
}

bool CallbacksManager::ClearResults()
{
	if(mResults.empty())
		return false;

	mResults.clear();
	return true;
}