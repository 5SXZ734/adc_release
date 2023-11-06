#include "front.stubs.hh"

BOOL __stdcall ChooseFontW(struct CHOOSEFONTW *lpChFont);
DWORD __stdcall CommDlgExtendedError();
HWND __stdcall FindTextW(struct FINDREPLACEW *Arg1);
short __stdcall GetFileTitleW(const WCHAR *lpFile, WCHAR *lpTitle, WORD cbBuf);
BOOL __stdcall GetOpenFileNameW(struct OPENFILENAMEW *Arg1);
BOOL __stdcall GetSaveFileNameW(struct OPENFILENAMEW *Arg1);
BOOL __stdcall PageSetupDlg(struct PAGESETUPDLG *lppsd);
BOOL __stdcall PageSetupDlgW(struct PAGESETUPDLGW *lppsd);
HRESULT __stdcall PrintDlgExW(struct PRINTDLGEXW *lppd);
HWND __stdcall ReplaceTextW(struct FINDREPLACEW *Arg1);