#ifndef __BITS_SYSCALL_MAN_H__
#define __BITS_SYSCALL_MAN_H__

#define __NEED_SIZE_T
#define __NEED_SSIZE_T
#define __NEED_GID_T
#define __NEED_UID_T
#define __NEED_PID_T
#include <bits/alltypes.h>

int   sys_clone(unsigned long, unsigned long, int *, unsigned long, int *);
int   sys_clone3(struct clone_args *, size_t);

pid_t sys_fork(void);
pid_t sys_vfork(void);

gid_t sys_getgid(void);
gid_t sys_getegid(void);
gid_t sys_getresgid(gid_t *, gid_t *, gid_t *);
gid_t sys_getpgid(pid_t);

uid_t sys_getuid(void);
uid_t sys_geteuid(void);
uid_t sys_getresuid(uid_t *, uid_t *, uid_t *);

pid_t sys_getpid(void);
pid_t sys_getppid(void);

int   sys_setgid(gid_t);
int   sys_setpgid(pid_t, pid_t);
int   sys_setregid(gid_t, gid_t);
int   sys_setresgid(gid_t, gid_t, gid_t);
int   sys_setfsgid(gid_t);

int   sys_setuid(uid_t);
int   sys_setreuid(uid_t, uid_t);
int   sys_setresuid(uid_t, uid_t, uid_t);
int   sys_setfsuid(uid_t);

int   sys_kill(pid_t, int);

#endif
