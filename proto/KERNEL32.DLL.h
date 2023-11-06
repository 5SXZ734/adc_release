#include "front.stubs.hh"

BOOL __stdcall CloseHandle(HANDLE hObject);
INT __stdcall CompareStringW(LCID lcid, DWORD flags, const WCHAR * str1, INT len1, const WCHAR * str2, INT len2);
HANDLE __stdcall CreateFileMappingW(HANDLE hFile, struct SECURITY_ATTRIBUTES *lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, const WCHAR * lpName);
HANDLE __stdcall CreateFileW(const WCHAR * lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, struct SECURITY_ATTRIBUTES *lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
BOOL __stdcall DeleteFileW(const WCHAR * lpFileName);
BOOL __stdcall FindClose(HANDLE hFindFile);
HANDLE __stdcall FindFirstFileW(const WCHAR * lpFileName, struct WIN32_FIND_DATAW *lpFindFileData);
int __stdcall FoldStringW(DWORD dwMapFlags, const WCHAR *lpSrcStr, int cchSrc, wchar_t * lpDestStr, int cchDest);
DWORD __stdcall FormatMessageW(DWORD dwFlags, const void *lpSource, DWORD dwMessageId, DWORD dwLanguageId, wchar_t * lpBuffer, DWORD nSize, va_list *Arguments);
UINT __stdcall GetACP();
wchar_t * __stdcall GetCommandLineW();
BOOL __stdcall GetCPInfo(UINT CodePage, struct CPINFO *lpCPInfo);
int __stdcall GetDateFormatW(LCID Locale, DWORD dwFlags, const struct SYSTEMTIME *lpDate, const WCHAR * lpFormat, wchar_t * lpDateStr, int cchDate);
BOOL __stdcall GetFileInformationByHandle(HANDLE hFile, struct BY_HANDLE_FILE_INFORMATION *lpFileInformation);
DWORD __stdcall GetLastError();
int __stdcall GetLocaleInfoW(LCID Locale, struct LCTYPE LCType, wchar_t * lpLCData, int cchData);
void __stdcall GetLocalTime(struct SYSTEMTIME *lpSystemTime);
HMODULE __stdcall GetModuleHandleA(const CHAR * lpModuleName);
FARPROC __stdcall GetProcAddress(HMODULE hModule, const CHAR * lpProcName);
void __stdcall GetStartupInfoA(struct STARTUPINFO *lpStartupInfo);
int __stdcall GetTimeFormatW(LCID Locale, DWORD dwFlags, const struct SYSTEMTIME *lpTime, const WCHAR * lpFormat, wchar_t * lpTimeStr, int cchTime);
LANGID __stdcall GetUserDefaultLangID();
LCID __stdcall GetUserDefaultLCID();
HGLOBAL __stdcall GlobalFree(HGLOBAL hMem);
VOID * __stdcall GlobalLock(HGLOBAL hMem);
BOOL __stdcall GlobalUnlock(HGLOBAL hMem);
BOOL __stdcall IsDBCSLeadByte(BYTE TestChar);
HMODULE __stdcall LoadLibraryA(const CHAR * lpLibFileName);
HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes);
HLOCAL __stdcall LocalFree(HLOCAL hMem);
VOID * __stdcall LocalLock(HLOCAL hMem);
HLOCAL __stdcall LocalReAlloc(HLOCAL hMem, SIZE_T uBytes, UINT uFlags);
SIZE_T __stdcall LocalSize(HLOCAL hMem);
BOOL __stdcall LocalUnlock(HLOCAL hMem);
wchar_t * __stdcall lstrcatW(wchar_t * lpString1, const WCHAR * lpString2);
int __stdcall lstrcmpiW(const WCHAR * lpString1, const WCHAR * lpString2);
int __stdcall lstrcmpW(const WCHAR * lpString1, const WCHAR * lpString2);
wchar_t * __stdcall lstrcpyW(wchar_t * lpString1, const WCHAR * lpString2);
wchar_t * __stdcall lstrcpynW(wchar_t * lpString1, const WCHAR * lpString2, int iMaxLength);
int __stdcall lstrlenW(const WCHAR * lpString);
VOID *__stdcall MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator);
int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, const CHAR *lpMultiByteStr, int cbMultiByte, wchar_t * lpWideCharStr, int cchWideChar);
BOOL __stdcall SetEndOfFile(HANDLE hFile);
void __stdcall SetLastError(DWORD dwErrCode);
BOOL __stdcall UnmapViewOfFile(const void *lpBaseAddress);
int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, const WCHAR *lpWideCharStr, int cchWideChar, CHAR *lpMultiByteStr, int cbMultiByte, const CHAR *lpDefaultChar, BOOL *lpUsedDefaultChar);
BOOL __stdcall WriteFile(HANDLE hFile, const void *lpBuffer, DWORD nNumberOfBytesToWrite, DWORD *lpNumberOfBytesWritten, struct OVERLAPPED *lpOverlapped);

