#ifndef __BITS_SYSCALL_RETVAL_H__
#define __BITS_SYSCALL_RETVAL_H__

#include <errno.h>

#define sys_retval(ret, eval, oval)    \
	if (_SYSRISE(ret)) {           \
		errno = _SYSRTOE(ret); \
		return eval;           \
	}                              \
	return oval;

#endif
