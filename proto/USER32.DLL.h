#include "front.stubs.hh"

wchar_t * __stdcall CharLowerW(wchar_t * lpsz);
wchar_t * __stdcall CharNextW(const WCHAR * lpsz);
wchar_t * __stdcall CharUpperW(wchar_t * lpsz);
DWORD __stdcall CheckMenuItem(HMENU hMenu, UINT uIDCheckItem, UINT uCheck);
HWND __stdcall ChildWindowFromPoint(HWND hWndParent, struct POINT Point);
BOOL __stdcall CloseClipboard();
HWND __stdcall CreateDialogParamW(HINSTANCE hInstance, const WCHAR * lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND __stdcall CreateWindowExW(DWORD dwExStyle, const WCHAR * lpClassName, const WCHAR * lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, VOID *lpParam);
LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
BOOL __stdcall DestroyWindow(HWND hWnd);
INT_PTR __stdcall DialogBoxParamW(HINSTANCE hInstance, const WCHAR * lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
LRESULT __stdcall DispatchMessageW(const struct MSG *lpMsg);
int __stdcall DrawTextExW(HDC hdc, wchar_t * lpchText, int cchText, struct RECT *lprc, UINT format, struct DRAWTEXTPARAMS *lpdtp);
BOOL __stdcall EnableMenuItem(HMENU hMenu, UINT uIDEnableItem, UINT uEnable);
BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable);
BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult);
BOOL __stdcall GetClientRect(HWND hWnd, struct RECT *lpRect);
BOOL __stdcall GetCursorPos(struct POINT *lpPoint);
HDC __stdcall GetDC(HWND hWnd);
HWND __stdcall GetDesktopWindow();
int __stdcall GetDlgCtrlID(HWND hWnd);
UINT __stdcall GetDlgItemTextW(HWND hDlg, int nIDDlgItem, wchar_t * lpString, int cchMax);
HWND __stdcall GetFocus();
HWND __stdcall GetForegroundWindow();
HKL __stdcall GetKeyboardLayout(DWORD idThread);
HMENU __stdcall GetMenu(HWND hWnd);
UINT __stdcall GetMenuState(HMENU hMenu, UINT uId, UINT uFlags);
BOOL __stdcall GetMessageW(struct MSG *lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
HMENU __stdcall GetSubMenu(HMENU hMenu, int nPos);
HMENU __stdcall GetSystemMenu(HWND hWnd, BOOL bRevert);
int __stdcall GetSystemMetrics(int nIndex);
LONG __stdcall GetWindowLongW(HWND hWnd, int nIndex);
BOOL __stdcall GetWindowPlacement(HWND hWnd, struct WINDOWPLACEMENT *lpwndpl);
int __stdcall GetWindowTextW(HWND hWnd, wchar_t * lpString, int nMaxCount);
BOOL __stdcall InvalidateRect(HWND hWnd, const struct RECT *lpRect, BOOL bErase);
BOOL __stdcall IsDialogMessageW(HWND hDlg, struct MSG *lpMsg);
BOOL __stdcall IsClipboardFormatAvailable(UINT format);
BOOL __stdcall IsIconic(HWND hWnd);
HACCEL __stdcall LoadAcceleratorsW(HINSTANCE hInstance, const WCHAR * lpTableName);
HCURSOR __stdcall LoadCursorW(HINSTANCE hInstance, const WCHAR * lpCursorName);
HICON __stdcall LoadIconW(HINSTANCE hInstance, const WCHAR * lpIconName);
HANDLE __stdcall LoadImageW(HINSTANCE hInst, const WCHAR * name, UINT type, int cx, int cy, UINT fuLoad);
int __stdcall LoadStringW(HINSTANCE hInstance, UINT uID, wchar_t * lpBuffer, int cchBufferMax);
BOOL __stdcall MessageBeep(UINT uType);
int __stdcall MessageBoxW(HWND hWnd, const WCHAR * lpText, const WCHAR * lpCaption, UINT uType);
BOOL __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);
BOOL __stdcall OpenClipboard(HWND hWndNewOwner);
BOOL __stdcall PeekMessageW(struct MSG *lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL __stdcall PostMessageW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
void __stdcall PostQuitMessage(int nExitCode);
ATOM __stdcall RegisterClassExW(const struct WNDCLASSEXW *Arg1);
UINT __stdcall RegisterWindowMessageW(const WCHAR * lpString);
int __stdcall ReleaseDC(HWND hWnd, HDC hDC);
BOOL __stdcall ScreenToClient(HWND hWnd, struct POINT *lpPoint);
LRESULT __stdcall SendDlgItemMessageW(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam);
LRESULT __stdcall SendMessageW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
HWND __stdcall SetActiveWindow(HWND hWnd);
HCURSOR __stdcall SetCursor(HCURSOR hCursor);
BOOL __stdcall SetDlgItemTextW(HWND hDlg, int nIDDlgItem, const WCHAR * lpString);
HWND __stdcall SetFocus(HWND hWnd);
int __stdcall SetScrollPos(HWND hWnd, int nBar, int nPos, BOOL bRedraw);
LONG __stdcall SetWindowLongW(HWND hWnd, int nIndex, LONG dwNewLong);
BOOL __stdcall SetWindowPlacement(HWND hWnd, const struct WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall SetWindowTextW(HWND hWnd, const WCHAR * lpString);
BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow);
int __stdcall TranslateAcceleratorW(HWND hWnd, HACCEL hAccTable, struct MSG *lpMsg);
BOOL __stdcall TranslateMessage(const MSG *lpMsg);
BOOL __stdcall UpdateWindow(HWND hWnd);
BOOL __stdcall WinHelpW(HWND hWndMain, const WCHAR * lpszHelp, UINT uCommand, ULONG_PTR dwData);
int __cdecl wsprintfW(wchar_t *, const WCHAR *, ...);