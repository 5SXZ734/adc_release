#include "front.stubs.hh"

void __stdcall DragAcceptFiles(HWND hWnd, BOOL fAccept);
void __stdcall DragFinish(HDROP hDrop);
UINT __stdcall DragQueryFileW(HDROP hDrop, UINT iFile, wchar_t * lpszFile, UINT cch);
INT __stdcall ShellAboutW(HWND hWnd, const WCHAR * szApp, const WCHAR * szOtherStuff, HICON hIcon);