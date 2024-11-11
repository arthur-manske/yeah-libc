#ifndef __STDNORETURN_H__
#define __STDNORETURN_H__

#ifdef __cplusplus
extern "C" {
#endif

#if __STDC_VERSION__ >= 202311L
#define noreturn [[noreturn]]
#else
#if defined(__GNUC__) || defined(__clang__)
#define noreturn __attribute__((noreturn))
#elif defined(__MSVC__)
#define noreturn __declspec(noreturn)
#elif __STDC_VERSION__ >= 201112L
#define noreturn _Noreturn
#else
/* There's nothing we can do */
#define noreturn
#endif
#endif

#ifdef __cplusplus
}
#endif
#endif
