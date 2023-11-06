#include "front.stubs.hh"

HDC __stdcall CreateDCW(const WCHAR * pwszDriver, const WCHAR * pwszDevice, const WCHAR * pszPort, const struct DEVMODEW *pdm);
HFONT __stdcall CreateFontIndirectW(const struct  LOGFONTW *lplf);
BOOL __stdcall DeleteDC(HDC hdc);
BOOL __stdcall DeleteObject(HGDIOBJ ho);
int __stdcall EndDoc(HDC hdc);
int __stdcall EndPage(HDC hdc);
int __stdcall EnumFontsW(HDC hdc, const WCHAR * lpLogfont, FONTENUMPROCW lpProc, LPARAM lParam);
int __stdcall GetDeviceCaps(HDC hdc, int index);
int __stdcall GetObjectW(HANDLE h, int c, VOID * pv);
HGDIOBJ __stdcall GetStockObject(int i);
BOOL __stdcall GetTextExtentPoint32W(HDC hdc, const WCHAR * lpString, int c, struct SIZE *psizl);
int __stdcall GetTextFaceW(HDC hdc, int c, wchar_t * lpName);
BOOL __stdcall LPtoDP(HDC hdc, struct POINT *lppt, int c);
HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h);
int __stdcall SetAbortProc(HDC hdc, ABORTPROC proc);
int __stdcall SetBkMode(HDC hdc, int mode);
int __stdcall SetMapMode(HDC hdc, int iMode);
BOOL __stdcall GetTextMetricsW(HDC hdc, struct TEXTMETRICW *lptm);
BOOL __stdcall SetViewportExtEx(HDC hdc, int x, int y, struct SIZE *lpsz);
BOOL __stdcall SetWindowExtEx(HDC hdc, int x, int y, struct SIZE *lpsz);
int __stdcall StartDocW(HDC hdc, const struct DOCINFOW *lpdi);
int __stdcall StartPage(HDC hdc);
BOOL __stdcall TextOutW(HDC hdc, int x, int y, const WCHAR * lpString, int c);