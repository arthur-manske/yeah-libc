#ifndef __BITS_FCNTL_H__
#define __BITS_FCNTL_H__

#define O_RDONLY     00
#define O_WRONLY     01
#define O_RDWR       02
#define O_CREAT      0100
#define O_EXCL       0200
#define O_NOCTTY     0400
#define O_TRUNC      01000
#define O_APPEND     02000
#define O_NONBLOCK   04000
#define O_DSYNC      010000
#define O_SYNC       04010000
#define O_RSYNC      04010000
#define O_DIRECTORY  0200000
#define O_NOFOLLOW   0400000
#define O_NOATIME    01000000
#define O_CLOEXEC    02000000

#define O_ASYNC      020000
#define O_DIRECT     040000
#define O_LARGEFILE  0100000
#define O_NOATIME    01000000
#define O_PATH       010000000
#define O_TMPFILE    020200000
#define O_NDELAY     O_NONBLOCK

#define F_DUPFD  0
#define F_DUPFD_CLOEXEC 1030
#define F_DUPFD_CLOFORK ?
#define F_GETFD  1
#define F_SETFD  2
#define F_GETFL  3
#define F_SETFL  4
#define F_GETLK  5
#define F_SETLK  6
#define F_SETLKW 7
#define F_SETOWN 8
#define F_GETOWN 9
#define F_SETSIG 10
#define F_GETSIG 11

#define F_SETOWN_EX 15
#define F_GETOWN_EX 16

#define F_GETOWNER_UIDS 17

#define AT_FDCWD            (-100)
#define AT_SYMLINK_NOFOLLOW  0x100
#define AT_EACCESS           0x200
#define AT_REMOVEDIR         0x200
#define AT_SYMLINK_FOLLOW    0x400 
#define AT_HANDLE_FID        AT_REMOVEDIR

#define FD_CLOEXEC 1
#define FD_CLOFORK ?

#define F_RDLCK 0
#define F_WRLCK 1
#define F_UNLCK 2

#define F_OWNER_PID  1
#define F_OWNER_PGRP 2

#define POSIX_FADV_NORMAL     0
#define POSIX_FADV_RANDOM     1
#define POSIX_FADV_SEQUENTIAL 2
#define POSIX_FADV_WILLNEED   3
#define POSIX_FADV_DONTNEED   4
#define POSIX_FADV_NOREUSE    5

#if defined(_KMIN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define F_OWNER_TID 0
#define F_OWNER_GID 2

#define AT_STATX_SYNC_AS_STAT 0x0000

#define AT_EMPTY_PATH         0x100
#define AT_NO_AUTOMOUNT       0x800

#define AT_STATX_FORCE_SYNC   0x2000
#define AT_STATX_DONT_SYNC    0x4000
#define AT_STATX_SYNC_TYPE    0x6000
#define AT_RECURSIVE          0x8000
#endif

#if defined(_KMIN_SOURCE) || defined(_GNU_SOURCE)
#define __NEED_SIZE_T
#define __NEED_SSIZE_T
#define __NEED_OFF_T
#define __NEED_STRUCT_IOVEC
#include <bits/alltypes.h>

#define SPLICE_F_MOVE               1
#define SPLICE_F_NONBLOCK           2
#define SPLICE_F_MORE               4
#define SPLICE_F_GIFT               8

#define FALLOC_FL_KEEP_SIZE         1
#define FALLOC_FL_PUNCH_HOLE        2

int     fallocate(int, int, off_t, off_t);
ssize_t vmsplice(int, const struct iovec *, size_t, unsigned);
ssize_t splice(int, off_t *, int, off_t *, size_t, unsigned);
ssize_t tee(int, int, size_t, unsigned);
ssize_t readahead(int, off_t, size_t);
#endif

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define FAPPEND   O_APPEND
#define FFSYNC    O_SYNC
#define FASYNC    O_ASYNC
#define FNONBLOCK O_NONBLOCK
#define FNDELAY   O_NDELAY

#define F_ULOCK 0
#define F_LOCK  1
#define F_TLOCK 2
#define F_TEST  3

#define F_SETLEASE   1024
#define F_GETLEASE   1025
#define F_NOTIFY     1026
#define F_CANCELLK   1029
#define F_SETPIPE_SZ 1031
#define F_GETPIPE_SZ 1032
#define F_ADD_SEALS  1033
#define F_GET_SEALS  1034

#define F_SEAL_SEAL         0x0001
#define F_SEAL_SHRINK       0x0002
#define F_SEAL_GROW         0x0004
#define F_SEAL_WRITE        0x0008
#define F_SEAL_FUTURE_WRITE 0x0010

#define F_GET_RW_HINT      1035
#define F_SET_RW_HINT      1036
#define F_GET_FILE_RW_HINT 1037
#define F_SET_FILE_RW_HINT 1038

#define RWF_WRITE_LIFE_NOT_SET 0
#define RWH_WRITE_LIFE_NONE    1
#define RWH_WRITE_LIFE_SHORT   2
#define RWH_WRITE_LIFE_MEDIUM  3
#define RWH_WRITE_LIFE_LONG    4
#define RWH_WRITE_LIFE_EXTREME 5

#define DN_ACCESS	0x00000001
#define DN_MODIFY	0x00000002
#define DN_CREATE	0x00000004
#define DN_DELETE	0x00000008
#define DN_RENAME	0x00000010
#define DN_ATTRIB	0x00000020
#define DN_MULTISHOT	0x80000000
#include <bits/access.h>
#endif

#if defined(_GNU_SOURCE)
struct file_handle {
	unsigned handle_bytes;
	int handle_type;
	unsigned char f_handle[];
};

#define MAX_HANDLE_SZ 128

#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define SYNC_FILE_RANGE_WRITE       2
#define SYNC_FILE_RANGE_WAIT_AFTER  4

int name_to_handle_at(int, const char *, struct file_handle *, int *, int);
int open_by_handle_at(int, struct file_handle *, int);
int sync_file_range(int, off_t, off_t, unsigned);
#define loff_t off_t
#endif

#define __NEED_OFF_T
#define __NEED_PID_T
#include <bits/alltypes.h>

struct f_owner_ex {
	int   type;
	pid_t pid;
};

struct flock {
	short l_type;
	short l_whence;
	off_t l_start;
	off_t l_len;
	pid_t l_pid;
};

#endif
