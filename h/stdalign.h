#ifndef __STDALIGN_H__
#define __STDALIGN_H__
#ifndef __cplusplus
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 202311L
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L
#if defined(__GNUC__) || defined(__clang__)
#define _Alignas(t) __attribute__((__aligned__(t)))
#define _Alignof(t) __alignof__(t)
#elif defined(__MSVC__)
#define _Alignas(t) __declspec(aligned(t))
#define _Alignof(t) __alignof(t)
#else
/* There's nothing we can do */
#define _Alignas(...)
#define _Alignof(...)
#endif
#else 

#define alignas _Alignas
#define alignof _Alignof

#define alignas_is_defined 1
#define alignof_is_defined 1
#endif
#else
#define alignas_is_defined 1
#define alignof_is_defined 1
#endif
#endif
