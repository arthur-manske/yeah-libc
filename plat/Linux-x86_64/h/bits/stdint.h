#ifndef __BITS_STDINT_H__
#define __BITS_STDINT_H__

#define _POSIX_V8_LP64_OFF64 1

#define INT8_C(c)  c
#define INT16_C(c) c
#define INT32_C(c) c

#define UINT8_C(c)  c ## U
#define UINT16_C(c) c ## U
#define UINT32_C(c) c ## U
#define UINT64_C(c) c ## UL

#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT64_MIN
#define INT_LEAST64_MIN INT64_MIN

#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT64_MAX
#define INT_LEAST64_MAX INT64_MAX

#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT64_MAX
#define UINT_LEAST64_MAX UINT64_MAX

#define UINTMAX_MAX      UINT64_MAX

#define INTMAX_MAX       INT64_MAX
#define INTMAX_MIN       INT64_MIN

typedef signed   char  int8_t;
typedef signed   short int16_t;
typedef signed   int   int32_t;
typedef signed   long  int64_t;

typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;
typedef unsigned long  uint64_t;

typedef int32_t  int_fast16_t;
typedef int32_t  int_fast32_t;
typedef int64_t  int_fast64_t;

typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

#define INT_FAST16_MIN  INT32_MIN
#define INT_FAST32_MIN  INT32_MIN

#define INT_FAST16_MAX  INT32_MAX
#define INT_FAST32_MAX  INT32_MAX

#define UINT_FAST16_MAX UINT32_MAX
#define UINT_FAST32_MAX UINT32_MAX

#define INTPTR_MIN  INT64_MIN
#define INTPTR_MAX  INT64_MAX
#define UINTPTR_MAX UINT64_MAX
#define PTRDIFF_MAX INT64_MAX
#define PTRDIFF_MIN INT64_MIN
#define SIZE_MAX    UINT64_MAX

#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX

#endif
