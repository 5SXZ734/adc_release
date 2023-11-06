#include "front.stubs.hh"

typedef int (__cdecl * _HANDLE_MATH_ERROR)(struct _exception *);
typedef __int64 __time64_t;
typedef __int32 __time32_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int _ctype_t;
typedef int time_t;
typedef void (__cdecl *PVFV)();
long _ftol(register double);
double _CIfmod(register double, register double);
int _initterm(PVFV *, PVFV *);


int __getmainargs(int * _Argc, char *** _Argv, char *** _Env, int _DoWildCard, struct _startupinfo * _StartInfo);
int * __p__commode();
int* __p__fmode();
void __set_app_type(int at);
void __setusermatherr(_HANDLE_MATH_ERROR pf);
long atol(const char *str);
long _atol_l(const char *str, struct locale_t locale);
long _wtol(const wchar_t *str);
long _wtol_l(const wchar_t *str, struct locale_t locale);
void __stdcall exit(int const status);
int _isctype(int c, _ctype_t desc);
int _isctype_l(int c, _ctype_t desc, struct locale_t locale);
int iswctype(wint_t c, wctype_t desc);
int _iswctype_l(wint_t c, wctype_t desc, struct locale_t locale);
struct tm *localtime(const time_t *sourceTime);
struct tm *_localtime32(const __time32_t *sourceTime);
struct tm *_localtime64(const __time64_t *sourceTime);
time_t time(time_t *destTime);
__time32_t _time32(__time32_t *destTime);
__time64_t _time64(__time64_t *destTime);
int strncmp(const char *string1, const char *string2, size_t count);
int wcsncmp(const wchar_t *string1, const wchar_t *string2, size_t count);
int _mbsncmp(const unsigned char *string1, const unsigned char *string2, size_t count);
int _mbsncmp_l(const unsigned char *string1, const unsigned char *string2, size_t count, struct locale_t locale);
int _mbsnbcmp(const unsigned char *string1, const unsigned char *string2, size_t count);
char *strncpy(char *strDest, const char *strSource, size_t count);
char *_strncpy_l(char *strDest, const char *strSource, size_t count, struct locale_t locale);
wchar_t *wcsncpy(wchar_t *strDest, const wchar_t *strSource, size_t count);
wchar_t *_wcsncpy_l(wchar_t *strDest, const wchar_t *strSource,	size_t count, struct locale_t locale);
unsigned char *_mbsncpy(unsigned char *strDest, const unsigned char *strSource, size_t count);
unsigned char *_mbsncpy_l(unsigned char *strDest, const unsigned char *strSource, size_t count, struct locale_t locale);

