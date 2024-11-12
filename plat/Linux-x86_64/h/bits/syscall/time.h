#ifndef __BITS_SYSCALL_TIME_H__
#define __BITS_SYSCALL_TIME_H__

#define __NEED_SIZE_T
#define __NEED_SSIZE_T
#define __NEED_OFF_T
#define __NEED_TIME_T
#define __NEED_CLOCKID_T
#define __NEED_STRUCT_TIMESPEC
#include <bits/alltypes.h>

#include <sys/timex.h>

unsigned sys_alarm(unsigned);
int      sys_utimensat(int, const char *, const struct timespec[2], int);
int      sys_nanosleep(const struct timespec *, struct timespec *);
int      sys_clock_nanosleep(clockid_t, int, const struct timespec *, struct timespec *);

int      sys_clock_settime(clockid_t, const struct timespec *);
int      sys_clock_gettime(clockid_t, struct timespec *);
int      sys_clock_getres(clockid_t, struct timespec *);
int      sys_clock_adjtime(clockid_t, struct timex);

#endif
