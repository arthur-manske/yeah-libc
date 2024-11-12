/* All Linux filesystem related 'direct' system call wrappers */
#define _GNU_SOURCE

#include <stddef.h>

#include <bits/fcntl.h>
#include <bits/syscall/retval.h>
#include <bits/syscall/fs.h>

#define syscalldecl(retype, name, eval, oval, syscall, ...) \
	retype name(__VA_ARGS__)                            \
	{				                    \
		retype ret = syscall;	                    \
		sys_retval(ret, eval, oval);                \
	}

syscalldecl(ssize_t, read,   -1, ret, sys_read(fd, bf, bfsz),        int fd, void       *bf, size_t bfsz)
syscalldecl(ssize_t, pread,  -1, ret, sys_pread(fd, bf, bfsz, pos),  int fd, void       *bf, size_t bfsz, off_t pos)
syscalldecl(ssize_t, write,  -1, ret, sys_write(fd, bf, bfsz),       int fd, const void *bf, size_t bfsz)
syscalldecl(ssize_t, pwrite, -1, ret, sys_pwrite(fd, bf, bfsz, pos), int fd, const void *bf, size_t bfsz, off_t pos)

syscalldecl(int, fstatat, -1, ret, sys_statx(dirfd,  filename, flags,               0x7ffU|0x800U, st), int dirfd, const char *filename, struct stat *st, int flags)
syscalldecl(int, stat,    -1, ret, sys_statx(AT_FDCWD, filename, AT_SYMLINK_FOLLOW,   0x7ffU|0x800U, st), const char *filename, struct stat *st)
syscalldecl(int, lstat,   -1, ret, sys_statx(AT_FDCWD, filename, AT_SYMLINK_NOFOLLOW, 0x7ffU|0x800U, st), const char *filename, struct stat *st)
syscalldecl(int, fstat,   -1, ret, sys_statx(fildes, NULL,     AT_EMPTY_PATH,       0x7ffU|0x800U, st), int fildes,           struct stat *st)

syscalldecl(int, open,   -1, ret, sys_open(filename, flags | O_LARGEFILE), const char *filename, int flags, ...)
syscalldecl(int, openat, -1, ret, sys_openat(dirfd, filename, flags | O_LARGEFILE), int dirfd, const char *filename, int flags, ...)

syscalldecl(int, close,       -1, ret, sys_close(fildes), int fildes)
syscalldecl(int, posix_close, -1, ret, sys_close(fildes), int fildes, int __unused)

syscalldecl(int, pipe,  -1, ret, sys_pipe(fildes),         int fildes[2])
syscalldecl(int, pipe2, -1, ret, sys_pipe2(fildes, flags), int fildes[2], int flags)

syscalldecl(int, dup,  -1, ret, sys_dup(ofd),              int ofd)
syscalldecl(int, dup2, -1, ret, sys_dup2(ofd, nfd),        int ofd, int nfd)
syscalldecl(int, dup3, -1, ret, sys_dup3(ofd, nfd, flags), int ofd, int nfd, int flags)

syscalldecl(int, fcntl, -1, ret, sys_fcntl(fildes, cmd), int fildes, int cmd, ...)

syscalldecl(int, creat, -1, ret, sys_open(filename, O_CREAT|O_WRONLY|O_TRUNC|O_LARGEFILE, mode), const char *filename, mode_t mode)

syscalldecl(int, posix_fallocate, -1, ret, sys_fallocate(fildes, FALLOC_FL_KEEP_SIZE, offset, len), int fildes, off_t offset, off_t len)
syscalldecl(int, fallocate,       -1, ret, sys_fallocate(fildes, mode, offset, len),                int fildes, int   mode,   off_t offset, off_t len)
syscalldecl(int, posix_fadvise,   -1, ret, sys_fadvise(fildes, offset, (size_t)len, advice),        int fildes, off_t offset, off_t len, int advice)

syscalldecl(ssize_t, splice,   -1, ret, sys_splice(inpfd, inpoff, outfd, outoff, len, flags),   int inpfd, off_t *inpoff, int outfd, off_t *outoff, size_t len, unsigned flags)
syscalldecl(ssize_t, vmsplice, -1, ret, sys_vmsplice(inpfd, iov, nrsegs, flags),                int inpfd, const struct iovec *iov, size_t nrsegs, unsigned flags)

/* fast I/O libc extension */
ssize_t __faster_fcpy__(int inpfd, int outfd)
{
	const static size_t bfiter = 40960;

	ssize_t ret = 0;
	ssize_t rdbytes, wrbytes;

	int pfd[2];
	if (pipe(pfd)) return -1;

	while ((rdbytes = splice(inpfd, NULL, pfd[1], NULL, bfiter, SPLICE_F_MORE | SPLICE_F_MOVE)) != 0) {
		if (rdbytes < 0) {
			ret = rdbytes;
			break;
		}

		wrbytes = splice(pfd[0], NULL, outfd, NULL, rdbytes, SPLICE_F_MORE | SPLICE_F_MOVE);	
		if (wrbytes < 0) {
			ret = wrbytes;
			break;
		}

		ret += wrbytes;
	}

	close(pfd[0]);
	close(pfd[1]); 

	return ret;
}
