#ifndef __STDDEF_H__
#define __STDDEF_H__

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_SIZE_T
#define __NEED_MAXALIGN_T
#define __NEED_PTRDIFF_T
#define __NEED_WCHAR_T
#include <bits/alltypes.h>

#define NULL ((void *) 0)

#if (defined(__GNUC__) && __GNUC__ >= 3) || (defined(__clang) && __clang__ >= 20600)
	#define offsetof(type, md) __builtin_offsetof(type, md)
#else
	#define offsetof(type, md) ((size_t)(char *)&(((type *)0)->md) - (char *) 0)
#endif

#if (defined(__GNUC__) && __GNUC__ >= 4) || (defined(__clang__) && __clang__ >= 20600)
	#define unreachable() (__builtin_unreachable())
#elif defined(__MSVC__)
	#define unreachable() (__assume(0))
#else
	#include <features.h>

	__feat_noreturn __feat_inline void unreachable_impl(void) {}
	#define unreachable() (unreachable_impl())

	#define __UNDEF_FEATURES_H__
	#include <features.h>
#endif

#ifdef __cplusplus
}
#endif
#endif
