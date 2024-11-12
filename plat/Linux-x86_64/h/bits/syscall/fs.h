#ifndef __BITS_SYSCALL_FS_H__
#define __BITS_SYSCALL_FS_H__

#define _BSD_SOURCE

#define __NEED_SIZE_T
#define __NEED_SSIZE_T
#define __NEED_OFF_T
#define __NEED_TIME_T
#define __NEED_STRUCT_TIMESPEC
#define __NEED_SIGSET_T
#include <bits/alltypes.h>
#include <bits/dirent.h> 
#include <bits/stat.h>

ssize_t sys_read(int, void *, size_t);
ssize_t sys_pread(int, void *, size_t, int);

ssize_t sys_write(int, const void *, size_t);
ssize_t sys_pwrite(int, const void *, size_t, int);

int sys_open(const char *, int, ...);
int sys_openat(int, const char *, int, ...);

int sys_close(int);

int sys_sendfile(int, int, off_t, size_t);

int sys_statx(int, const char *, unsigned long, unsigned long, struct stat *);

int sys_pipe(int *);
int sys_pipe2(int *, int);

int sys_splice(int, off_t *, int, off_t *, size_t, unsigned long);

int sys_dup(int);
int sys_dup2(int, int);
int sys_dup3(int, int, int);

int sys_flock(unsigned, unsigned);
int sys_fcntl(unsigned, unsigned, ...);

int sys_getdents(int, struct dirent *, size_t);

int sys_chdir(const char *);
int sys_fchdir(int);

int sys_link(const char *, const char *);
int sys_linkat(int, const char *, const char *, int);

int sys_unlink(const char *);
int sys_unlinkat(int, const char *, int);

int sys_symlink(const char *, const char *);
int sys_symlinkat(const char *, int, const char *);

int sys_readlink(const char *, char *, int);
int sys_readlinkat(int, const char *, char *, int);

int sys_rename(const char *, const char *);
int sys_renameat(int, const char *, int, const char *);

int sys_lseek(unsigned, off_t, unsigned);

int sys_poll(struct pollfd *, unsigned, int);
int sys_ppoll(struct pollfd *, unsigned, struct timespec *, const sigset_t *, size_t);

#endif
