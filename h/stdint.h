#ifndef __STDINT_H__
#define __STDINT_H__

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_INTPTR_T
#define __NEED_UINTPTR_T
#define __NEED_WCHAR_T
#define __NEED_WINT_T
#include <bits/alltypes.h>

#include <bits/stdint.h>
#include <bits/wchar.h>

typedef signed   short     int_least16_t;
typedef signed   long      int_least32_t;
typedef signed   long long int_least64_t;

typedef unsigned short     uint_least16_t;
typedef unsigned long      uint_least32_t;
typedef unsigned long long uint_least64_t;

typedef signed   long long intmax_t;
typedef unsigned long long uintmax_t;

#ifdef __cplusplus
}
#endif
#endif
