#include <windows.h>

BOOL APIENTRY DllMain(HINSTANCE hInst     /* Library instance handle. */,
	DWORD reason        /* Reason this function is being called. */,
	LPVOID reserved     /* Not used. */)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(0, (LPCWSTR) L"From DLL\n", (LPCWSTR) L"Process loading DLL", MB_ICONINFORMATION);
		break;

	case DLL_PROCESS_DETACH:
		MessageBox(0, (LPCWSTR) L"From DLL\n", (LPCWSTR) L"Process unloading DLL", MB_ICONINFORMATION);
		break;

	case DLL_THREAD_ATTACH:
		MessageBox(0, (LPCWSTR) L"From DLL\n", (LPCWSTR) L"Creating new thread", MB_ICONINFORMATION);
		break;

	case DLL_THREAD_DETACH:
		MessageBox(0, (LPCWSTR) L"From DLL\n", (LPCWSTR) L"Thread exiting", MB_ICONINFORMATION);
		break;
	}

	return TRUE;
}