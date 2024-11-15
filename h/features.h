#ifdef __UNDEF_FEATURES_H__
#undef __FEATURES_H__

#undef __feat_inline
#undef __feat_restrict
#undef __feat_thread
#undef __feat_noreturn
#undef __feat_alignas
#undef __feat_alignof

#undef __UNDEF_FEATURES_H__
#else 
#ifndef __FEATURES_H__
#define __FEATURES_H__

#if defined(_ALL_SOURCE) && !defined(_GNU_SOURCE)
#define _GNU_SOURCE
#endif

#if defined(_DEFAULT_SOURCE) && !defined(_BSD_SOURCE)
#define _BSD_SOURCE
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __feat_inline   inline
#define __feat_restrict restrict
#elif defined(__GNUC__) || defined(__clang__)
#define __feat_inline   __attribute__((always_inline))
#define __feat_restrict __attribute__((restrict))
#elif defined(__MSVC__)
#define __feat_inline   __forceinline
#define __feat_restrict __restrict
#else /* Some code may broke on non-standard old compilers */
#define __feat_inline   static
#define __feat_restrict
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#if __STDC_VERSION__ >= 202311L
#define __feat_thread      thread_local
#define __feat_noreturn    [[noreturn]]
#define __feat_alignas(x)  alignas(x)
#define __feat_alignof(x)  alignof(x)
#else
#define __feat_thread      _Thread_local
#define __feat_noreturn    _Noreturn
#define __feat_alignas(x)  _Alignas(x)
#define __feat_alignof(x)  _Alignof(x)
#endif
#elif defined(__GNUC__) || defined(__clang__)
#define __feat_thread      __attribute__((thread))
#define __feat_noreturn    __attribute__((noreturn))
#define __feat_alignas(x)  __attribute__((aligned(x)))
#define __feat_alignof(x)  __alignof(x)
#elif defined(__MSVC__)
#define __feat_thread      __declspec(thread)
#define __feat_noreturn    __declspec(noreturn)
#define __feat_alignas(x)  __declspec(aligned(x))
#define __feat_alignof(x)  __alignof(x)
#else /* Some code may broke HARD here */
#define __feat_thread
#define __feat_noreturn
#define __feat_alignas(x)
#define __feat_alignof(x) 0
#endif

#endif
#endif
