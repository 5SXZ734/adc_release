#include "front.stubs.hh"

BOOL __stdcall IsTextUnicode(const VOID *lpv, int iSize, INT *lpiResult);
LSTATUS __stdcall RegCloseKey(HKEY hKey);
LSTATUS __stdcall RegCreateKeyW(HKEY hKey, const WCHAR * lpSubKey, HKEY *phkResult);
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey, const CHAR * lpSubKey, DWORD ulOptions, REGSAM samDesired, HKEY *phkResult);
LSTATUS __stdcall RegQueryValueExA(HKEY hKey, const CHAR * lpValueName, DWORD *lpReserved, DWORD *lpType, BYTE *lpData, DWORD *lpcbData);
LSTATUS __stdcall RegQueryValueExW(HKEY hKey, const WCHAR * lpValueName, DWORD *lpReserved, DWORD *lpType, BYTE *lpData, DWORD *lpcbData);
LSTATUS __stdcall RegSetValueExW(HKEY hKey, const WCHAR * lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData);