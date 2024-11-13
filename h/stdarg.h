#ifndef __STDC_VERSION_STDARG_H__
#define __STDC_VERSION_STDARG_H__ 202311L

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_VA_LIST
#include <bits/alltypes.h>

#if defined(__GNUC__) || defined(__clang__)
#define va_arg(ap, t)		__builtin_va_arg(ap, t) 
#define va_copy(dest, src)	__builtin_va_copy(dest, src)
#define va_end(ap)		__builtin_va_end(ap)
#define va_start(ap, start)	__builtin_va_start(ap,start)
#else
/* Unsupported (for now) */
#endif

#ifdef __cplusplus
}
#endif
#endif
