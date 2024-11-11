#ifndef __FCNTL_H__
#define __FCNTL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_OFF_T
#define __NEED_MODE_T
#include <bits/alltypes.h> 
#include <bits/fcntl.h>

int creat(const char *, mode_t);
int fcntl(int, int, ...);
int open(const char *, int, ...);
int openat(int, const char *, int, ...);
int posix_fadvise(int, off_t, off_t, int);
int posix_fallocate(int, off_t, off_t);

#define creat(filename, mode) open(filename, O_WRONLY|O_CREAT|O_TRUNC, mode)

#ifdef __cplusplus
}
#endif
#endif
