/* Linux-x86_64 bits types */

#if defined(__NEED_VA_LIST) && !defined(__DEFINED_VA_LIST)
#if defined(__GCC__) || defined(__clang__)
typedef __builtin_va_list va_list;
#define __DEFINED_VA_LIST
#else
/* Unsupported (for now) */
#endif
#endif

#if defined(__NEED_SIZE_T) && !defined(__DEFINED_SIZE_T)
typedef unsigned long size_t;
#define __DEFINED_SIZE_T
#endif

#if defined(__NEED_SSIZE_T) && !defined(__DEFINED_SSIZE_T)
typedef signed long ssize_t;
#define __DEFINED_SSIZE_T
#endif

#if defined(__NEED_WCHAR_T) && !defined(__DEFINED_WCHAR_T)
typedef unsigned int wchar_t;
#define __DEFINED_WCHAR_T
#endif

#if defined(__NEED_WINT_T) && !defined(__DEFINED_WINT_T)
typedef unsigned int wint_t;
#define __DEFINED_WINT_T
#endif

#if defined(__NEED_INTPTR_T) && !defined(__DEFINED_INTPTR_T)
typedef signed   long  intptr_t;
#define __DEFINED_INTPTR_T
#endif

#if defined(__NEED_UINTPTR_T) && !defined(__DEFINED_UINTPTR_T)
typedef unsigned   long  uintptr_t;
#define __DEFINED_UINTPTR_T
#endif
