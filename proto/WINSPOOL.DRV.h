#include "front.stubs.hh"

BOOL __stdcall OpenPrinterW(WCHAR *lpPrinterName, HANDLE* phPrinter, struct PRINTER_DEFAULTSW *pDefault);
BOOL __stdcall GetPrinterDriverW(HANDLE hPrinter, WCHAR* pEnvironment, DWORD Level, BYTE* pDriverInfo, DWORD cbBuf, DWORD* pcbNeeded);
BOOL __stdcall ClosePrinter(HANDLE phPrinter);