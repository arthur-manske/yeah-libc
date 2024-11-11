#ifndef __ERRNO_H__
#define __ERRNO_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <bits/errno.h>

#ifdef __STDC_WANT_EXT1__
typedef int errno_t;
#endif

#define errno (*(__errno_location()))

int *__errno_location(void);

#ifdef __cplusplus
}
#endif
#endif
