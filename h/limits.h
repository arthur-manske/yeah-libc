#ifndef __LIMITS_H__
#define __LIMITS_H__

#include <bits/limits.h>

#define OPEN_MAX  INT_MAX
#define PAGE_SIZE PAGESIZE

#define NAME_MAX       0xff
#define HOST_NAME_MAX  0xff
#define LOGIN_NAME_MAX 0xff
#define RE_DUP_MAX     0xff

#define PIPE_BUF      0x1000
#define PATH_MAX      0x2000
#define LINE_MAX      0x2000
#define TTY_NAME_MAX  0x0020
#define TZNAME_MAX    0x000c

#define MB_LEN_MAX    0x04

#define BC_DIM_MAX         0x800
#define BC_BASE_MAX        0x400
#define BC_STRING_MAX      0x400
#define BC_SCALE_MAX       0x0ff
#define EXPR_NEST_MAX      0x020
#define CHARCLASS_NAME_MAX 0x020
#define COLL_WEIGHTS_MAX   0x002

#define NZERO 20

#define NL_MSGMAX  0xffff
#define NL_TEXTMAX 0x0800
#define NL_SETMAX  0x00ff
#define NL_LANGMAX 0x0040
#define NL_ARGMAX  0x0009

#define _POSIX_CLOCKRES_MIN      0x1312D00
#define _POSIX_AIO_LISTIO_MAX    0x2
#define _POSIX_AIO_MAX           0x1
#define _POSIX_ARG_MAX           0x1000
#define _POSIX_CHILD_MAX         0x19
#define _POSIX_DELAYTIMER_MAX    0x20
#define _POSIX_HOST_NAME_MAX     0xff
#define _POSIX_LINK_MAX          0x8
#define _POSIX_LOGIN_NAME_MAX    0x9
#define _POSIX_MAX_CANON         0xff
#define _POSIX_MAX_INPUT         0xff
#define _POSIX_MQ_OPEN_MAX       0x8
#define _POSIX_MQ_PRIO_MAX       0x20
#define _POSIX_NAME_MAX          0xe
#define _POSIX_NGROUPS_MAX       0x8
#define _POSIX_OPEN_MAX          0x14
#define _POSIX_PATH_MAX          0x100
#define _POSIX_PIPE_BUF          0x200
#define _POSIX_RE_DUP_MAX        0xff
#define _POSIX_RTSIG_MAX         0x8
#define _POSIX_SEM_NSEMS_MAX     0x100
#define _POSIX_SEM_VALUE_MAX     0x7fff
#define _POSIX_SIGQUEUE_MAX      0x20
#define _POSIX_SSIZE_MAX         0x7fff
#define _POSIX_SS_REPL_MAX       0x4
#define _POSIX_STREAM_MAX        0x8
#define _POSIX_SYMLINK_MAX       0xff
#define _POSIX_SYMLOOP_MAX       0x8
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 0x4
#define _POSIX_THREAD_KEYS_MAX   0x80
#define _POSIX_THREAD_THREADS_MAX 0x40
#define _POSIX_TIMER_MAX         0x20
#define _POSIX_TTY_NAME_MAX      0x9
#define _POSIX_TZNAME_MAX        0x6
#define _POSIX2_BC_BASE_MAX      0x63
#define _POSIX2_BC_DIM_MAX       0x800
#define _POSIX2_BC_SCALE_MAX     0x63
#define _POSIX2_BC_STRING_MAX    0x3e8
#define _POSIX2_CHARCLASS_NAME_MAX 0xe
#define _POSIX2_COLL_WEIGHTS_MAX 0x2
#define _POSIX2_EXPR_NEST_MAX    0x20
#define _POSIX2_LINE_MAX         0x800
#define _POSIX2_RE_DUP_MAX       0xff

#define PTHREAD_KEYS_MAX              _POSIX_THREAD_KEYS_MAX
#define PTHREAD_STACK_MIN             0x800
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS

#define SEM_VALUE_MAX                 INT_MAX
#define SEM_NSEMS_MAX                 _POSIX_SEM_NSEMS_MAX

#define DELAYTIMER_MAX                INT_MAX
#define MQ_PRIO_MAX                   SHRT_MAX

#if defined(_XOPEN_SOURCE)
#define _XOPEN_IOV_MAX           0x10
#define _XOPEN_NAME_MAX          0xff
#define _XOPEN_PATH_MAX          0x400
#endif

#endif
