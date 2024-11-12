#ifndef __BITS_SYSCALL_MEM_H__
#define __BITS_SYSCALL_MEM_H__

#define __NEED_SIZE_T
#include <bits/alltypes.h>

int sys_mmap(void *, size_t, unsigned long, unsigned long, unsigned long);
int sys_mprotect(void *, size_t, unsigned long);
int sys_munmap(void *, size_t);
int sys_brk(void *);

#endif
