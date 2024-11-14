#ifndef __BITS_DIRENT_H__
#define __BITS_DIRENT_H__

#define __NEED_INO_T
#define __NEED_OFF_T
#define __NEED_RECLEN_T
#define __NEED_SIZE_T
#define __NEED_SSIZE_T
#include <bits/alltypes.h>

typedef struct DIR DIR;

#define DT_BLK     6
#define DT_CHR     2
#define DT_DIR     4
#define DT_FIFO    1
#define DT_LNK     10
#define DT_REG     8
#define DT_SOCK    12
#define DT_UNKNOWN 0

#define DT_MQ      16
#define DT_SEM     18
#define DT_SHM     20
#define DT_TMO     22

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE) || defined(_KMIN_SOURCE)
#define DT_WHT     14
#define IFTODT(x)  ((x)>>12 & 017)
#define DTTOIF(x)  ((x)<<12)
#define d_fileno d_ino
#endif

struct dirent {
	ino_t    d_ino;
	off_t    d_off;
	reclen_t d_reclen;
	char     d_name[];
};

struct posix_dent {
	ino_t         d_ino;
	reclen_t      d_reclen;
	unsigned char d_type;
	char          d_name[];
};

#endif
