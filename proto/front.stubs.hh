#pragma once

#include "front.types.hh"

typedef void *HANDLE;
typedef void *HMODULE;
typedef void *HINSTANCE;
typedef void *HTASK;
typedef void *HKEY;
typedef void *HDESK;
typedef void *HDC;
typedef void *HFONT;
typedef void *HPEN;
typedef void *HSTR;
typedef void *HKL;
typedef void *HGDIOBJ;
typedef void *HWND;
typedef void *HDROP;
typedef void *HGLOBAL;
typedef void *HLOCAL;
typedef void *HCURSOR;
typedef void *HICON;
typedef void *HACCEL;
typedef void *HMENU;

typedef unsigned long LCID; 
typedef WORD   ATOM;
typedef WORD   LANGID;  
typedef DWORD REGSAM;

#ifdef _WIN64
	typedef __int64 LONG_PTR; 
	typedef __int64 INT_PTR; 
	typedef unsigned __int64 UINT_PTR;
	typedef unsigned int UHALF_PTR;
	typedef unsigned __int64 ULONG_PTR;
#else
	typedef long LONG_PTR;
	typedef int INT_PTR;
	typedef unsigned int UINT_PTR;
	typedef unsigned short UHALF_PTR;
	typedef unsigned long ULONG_PTR;
#endif

typedef long LSTATUS;
typedef long HRESULT;
typedef UINT_PTR            WPARAM;
typedef LONG_PTR            LPARAM;
typedef LONG_PTR            LRESULT;
typedef ULONG_PTR SIZE_T;
typedef LONG_PTR SSIZE_T;

typedef char *  va_list;

typedef int(__stdcall* FONTENUMPROCW)(const struct LOGFONTW *, const VOID *, DWORD, LPARAM);
typedef BOOL(__stdcall* ABORTPROC)(HDC, int);
typedef int(__stdcall * FARPROC) ();
typedef INT_PTR(__stdcall* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

struct POINT { LONG x; LONG y; };


