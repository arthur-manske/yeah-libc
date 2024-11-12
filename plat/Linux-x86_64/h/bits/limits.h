#ifndef __BITS_LIMITS_H__
#define __BITS_LIMITS_H__

#define FILESIZEBITS     0x40

#define PAGESIZE         0x1000

#define SSIZE_MAX        0x7FFFFFFFFFFFFFFF

#define CHAR_BIT        0x8
#define CHAR_MAX        0x7f
#define CHAR_MIN        (-CHAR_MAX-1)

#define INT_MAX         0x7fffffff
#define INT_MIN         0x80000000

#define LLONG_MAX       0x7fffffffffffffffLL
#define LLONG_MIN       (-LLONG_MAX-1LL)

#define LONG_BIT        0x40U
#define LONG_MAX        0x7fffffffffffffffL
#define LONG_MIN	(-LONG_MAX-1L)

#define MB_LEN_MAX      0x4U

#define SCHAR_MAX       0x7f
#define SCHAR_MIN       0x80

#define SHRT_MAX        0x7fff
#define SHRT_MIN        0x8000

#define SSIZE_MAX       0x7fffffffffffffffLL

#define UINT_MAX        0xffffffffU
#define ULLONG_MAX      0xffffffffffffffffULL
#define ULONG_MAX       0xffffffffffffffffUL
#define USHRT_MAX       0xffffU
#define UCHAR_MAX       0xffU

#define WORD_BIT        0x20

#endif
