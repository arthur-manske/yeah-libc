/* Linux-x86_64 bits types */

#if defined(__NEED_VA_LIST) && !defined(__DEFINED_VA_LIST)
#if defined(__GCC__) || defined(__clang__)
typedef __builtin_va_list va_list;
#define __DEFINED_VA_LIST
#else
/* Other compilers aren't supported (for now) */
#endif
#endif

#if defined(__NEED_SIZE_T) && !defined(__DEFINED_SIZE_T)
typedef unsigned long size_t;
#define __DEFINED_SIZE_T
#endif

#if defined(__NEED_SSIZE_T) && !defined(__DEFINED_SSIZE_T)
typedef signed long ssize_t;
#define __DEFINED_SSIZE_T
#endif

#if defined(__NEED_WCHAR_T) && !defined(__DEFINED_WCHAR_T)
typedef unsigned int wchar_t;
#define __DEFINED_WCHAR_T
#endif

#if defined(__NEED_WINT_T) && !defined(__DEFINED_WINT_T)
typedef unsigned int wint_t;
#define __DEFINED_WINT_T
#endif

#if defined(__NEED_INTPTR_T) && !defined(__DEFINED_INTPTR_T)
typedef signed   long  intptr_t;
#define __DEFINED_INTPTR_T
#endif

#if defined(__NEED_UINTPTR_T) && !defined(__DEFINED_UINTPTR_T)
typedef unsigned   long  uintptr_t;
#define __DEFINED_UINTPTR_T
#endif

#if defined(__NEED_BLKSIZE_T) && !defined(__DEFINED_BLKSIZE_T)
typedef unsigned int  blksize_t;
#define __DEFINED_BLKSIZE_T
#endif

#if defined(__NEED_NLINK_T) && !defined(__DEFINED_NLINK_T)
typedef unsigned int  nlink_t;
#define __DEFINED_NLINK_T
#endif

#if defined(__NEED_UID_T) && !defined(__DEFINED_UID_T)
typedef unsigned uid_t;
#define __DEFINED_UID_T
#endif

#if defined(__NEED_GID_T) && !defined(__DEFINED_GID_T)
typedef unsigned gid_t;
#define __DEFINED_GID_T
#endif

#if defined(__NEED_MODE_T) && !defined(__DEFINED_MODE_T)
typedef unsigned int  mode_t;
#define __DEFINED_MODE_T
#endif

#if defined(__NEED_INO_T) && !defined(__DEFINED_INO_T)
typedef unsigned long ino_t;
#define __DEFINED_INO_T
#endif

#if defined(__NEED_RECLEN_T) && !defined(__DEFINED_RECLEN_T)
typedef unsigned short reclen_t;
#define __DEFINED_RECLEN_T
#endif

#if defined(__NEED_TIME_T) && !defined(__DEFINED_TIME_T)
typedef unsigned long time_t;
#define __DEFINED_TIME_T
#endif

#if defined(__NEED_OFF_T) && !defined(__DEFINED_OFF_T)
typedef unsigned long off_t;
#define __DEFINED_OFF_T
#endif

#if defined(__NEED_PID_T) && !defined(__DEFINED_PID_T)
typedef int pid_t;
#define __DEFINED_PID_T
#endif

#if defined(__NEED_ID_T) && !defined(__DEFINED_ID_T)
typedef unsigned id_t;
#define __DEFINED_ID_T
#endif

#if defined(__NEED_BLKCNT_T) && !defined(__DEFINED_BLKCNT_T)
typedef unsigned long blkcnt_t;
#define __DEFINED_BLKCNT_T
#endif

#if defined(__NEED_DEV_T) && !defined(__DEFINED_DEV_T)
typedef unsigned long dev_t;
#define __DEFINED_DEV_T
#endif

#if defined(__NEED_SUSECONDS_T) && !defined(__DEFINED_SUSECONDS_T)
typedef unsigned long suseconds_t;
#define __DEFINED_SUSECONDS_T
#endif

#if defined(__NEED_STRUCT_TIMESPEC) && !defined(__DEFINED_STRUCT_TIMESPEC) 
struct timespec {
	time_t tv_sec;
	long   tv_nsec;
};
#define __DEFINED_STRUCT_TIMESPEC
#endif

#if defined(__NEED_STRUCT_TIMEVAL) && !defined(__DEFINED_STRUCT_TIMEVAL) 
struct timeval {
	time_t      tv_sec;
	suseconds_t tv_usec;
};
#define __DEFINED_STRUCT_TIMEVAL
#endif

#if defined(__NEED_STRUCT_IOVEC) && !defined(__DEFINED_STRUCT_IOVEC)
struct iovec {
	void   *iov_base;
	size_t  iov_len;
};
#define __DEFINED_STRUCT_IOVEC
#endif

#if defined(__NEED_STRUCT_RUSAGE) && !defined(__DEFINED_STRUCT_RUSAGE)
struct rusage {
	struct timeval ru_utime;
	struct timeval ru_stime;
	long           ru_maxrss;
	long           ru_ixrss;
	long           ru_idrss;
	long           ru_isrss;
	long           ru_minflt;
	long           ru_majflt;
	long           ru_nswap;
	long           ru_inblock;
	long           ru_oublock;
	long           ru_msgsnd;
	long           ru_msgrcv;
	long           ru_nsignals;
	long           ru_nvcsw;
	long           ru_nivcsw;
	long           __pad0[16];
};
#define __DEFINED_STRUCT_RUSAGE
#endif

#if defined(__NEED_SIGSET_T) && !defined(__DEFINED_SIGSET_T)
typedef struct __sigset_t { unsigned long __bits[2]; } sigset_t;
#define __DEFINED_SIGSET_T
#endif

#if defined(__NEED_UNION_SIGVAL) && !defined(__DEFINED_UNION_SIGVAL)
union sigval {
	int   sival_int;
	void *sival_ptr;
};
#define __DEFINED_UNION_SIGVAL
#endif

#if defined(__NEED_SIGINFO_T) && !defined(__DEFINED_SIGINFO_T)
typedef struct {
	int si_signo, si_errno, si_code;
	union {
		char __pad[128 - 2*sizeof(int) - sizeof(long)];
		struct {
			union {
				struct {
					pid_t si_pid;
					uid_t si_uid;
				} piduid;
				struct {
					int si_timerid;
					int si_overrun;
				} timer;
			} first;
			union {
				union sigval si_value;
				struct {
					int si_status;
					clock_t si_utime, si_stime;
				} sigchld;
			} second;
		} si_common;
		struct {
			void *si_addr;
			short si_addr_lsb;
			union {
				struct {
					void *si_lower;
					void *si_upper;
				} addr_bnd;
				unsigned si_pkey;
			} first;
		} sigfault;
		struct {
			long si_band;
			int si_fd;
		} sigpoll;
		struct {
			void *si_call_addr;
			int si_syscall;
			unsigned si_arch;
		} sigsys;
	} si_fields;
} siginfo_t;
#define si_pid       si_fields.si_common.first.piduid.si_pid
#define si_uid       si_fields.si_common.first.piduid.si_uid
#define si_status    si_fields.si_common.second.sigchld.si_status
#define si_utime     si_fields.si_common.second.sigchld.si_utime
#define si_stime     si_fields.si_common.second.sigchld.si_stime
#define si_value     si_fields.si_common.second.si_value
#define si_addr      si_fields.sigfault.si_addr
#define si_addr_lsb  si_fields.sigfault.si_addr_lsb
#define si_lower     si_fields.sigfault.first.addr_bnd.si_lower
#define si_upper     si_fields.sigfault.first.addr_bnd.si_upper
#define si_pkey      si_fields.sigfault.first.si_pkey
#define si_band      si_fields.sigpoll.si_band
#define si_fd        si_fields.sigpoll.si_fd
#define si_timerid   si_fields.si_common.first.timer.si_timerid
#define si_overrun   si_fields.si_common.first.timer.si_overrun
#define si_ptr       si_value.sival_ptr
#define si_int       si_value.sival_int
#define si_call_addr si_fields.sigsys.si_call_addr
#define si_syscall __si_fields.sigsys.si_syscall
#define si_arch    __si_fields.sigsys.si_arch
#define __DEFINED_SIGINFO_T
#endif

#if defined(__NEED_CLOCKID_T) && !defined(__DEFINED_CLOCKID_T)
typedef int clockid_t;
#define __DEFINED_CLOCKID_T
#endif

#if defined(__FLT_EVAL_METHOD__) && __FLT_EVAL_METHOD__ == 2
#if defined(__NEED_FLOAT_T) && !defined(__DEFINED_FLOAT_T)
typedef long double float_t;
#define __DEFINED_FLOAT_T
#endif

#if defined(__NEED_DOUBLE_T) && !defined(__DEFINED_DOUBLE_T)
typedef long double double_t;
#define __DEFINED_DOUBLE_T
#endif

#else
#if defined(__NEED_FLOAT_T) && !defined(__DEFINED_FLOAT_T)
typedef float float_t;
#define __DEFINED_FLOAT_T
#endif

#if defined(__NEED_DOUBLE_T) && !defined(__DEFINED_DOUBLE_T)
typedef double double_t;
#define __DEFINED_DOUBLE_T
#endif

#if defined(__NEED_MAX_ALIGN_T) && !defined(__DEFINED_MAX_ALIGN_T)
typedef struct { long long __ll; long double __ld; } max_align_t;
#define __DEFINED_MAX_ALIGN_T

#if defined(__NEED_PTRDIFF_T) && !defined(__DEFINED_PTRDIFF_T)
typedef long ptrdiff_t;
#define __DEFINED_PTRDIFF_T
#endif

#if defined(__NEED_REGOFF_T) && !defined(__DEFINED_REGOFF_T)
typedef long regoff_t;
#define __DEFINED_REGOFF_T
#endif

#if defined(__NEED_REGISTER_T) && !defined(__DEFINED_REGISTER_T)
typedef long register_t;
#define __DEFINED_REGISTER_T
#endif

#endif

#if defined(__NEED_FSBLKCNT_T) && !defined(__DEFINED_FSBLKCNT_T)
typedef unsigned long fsblkcnt_t;
#define __DEFINED_FSBLKCNT_T
#endif

#if defined(__NEED_FSFILCNT_T) && !defined(__DEFINED_FSFILCNT_T)
typedef unsigned long fsfilcnt_t;
#define __DEFINED_FSFILCNT_T
#endif

#if defined(__NEED_WCTYPE_T) && !defined(__DEFINED_WCTYPE_T)
typedef unsigned long wctype_t;
#define __DEFINED_WCTYPE_T
#endif


#if defined(__NEED_TIMER_T) && !defined(__DEFINED_TIMER_T)
typedef void * timer_t;
#define __DEFINED_TIMER_T
#endif

#if defined(__NEED_CLOCKID_T) && !defined(__DEFINED_CLOCKID_T)
typedef int clockid_t;
#define __DEFINED_CLOCKID_T
#endif

#if defined(__NEED_CLOCK_T) && !defined(__DEFINED_CLOCK_T)
typedef long clock_t;
#define __DEFINED_CLOCK_T
#endif

#if defined(__NEED_MBSTATE_T) && !defined(__DEFINED_MBSTATE_T)
typedef struct __mbstate_t { unsigned __opaque1, __opaque2; } mbstate_t;
#define __DEFINED_MBSTATE_T
#endif

#if defined(__NEED_STRUCT_WINSIZE) && !defined(__DEFINED_STRUCT_WINSIZE)
struct winsize { unsigned short ws_row, ws_col, ws_xpixel, ws_ypixel; };
#define __DEFINED_STRUCT_WINSIZE
#endif

#if defined(__NEED_SOCKLEN_T) && !defined(__DEFINED_SOCKLEN_T)
typedef unsigned socklen_t;
#define __DEFINED_SOCKLEN_T
#endif

#if defined(__NEED_SA_FAMILY_T) && !defined(__DEFINED_SA_FAMILY_T)
typedef unsigned short sa_family_t;
#define __DEFINED_SA_FAMILY_T
#endif

/* Threads */
#if defined(__NEED_PTHREAD_T) && !defined(__DEFINED_PTHREAD_T)
typedef struct __pthread * pthread_t;
#define __DEFINED_PTHREAD_T
#endif

#if defined(__NEED_PTHREAD_ONCE_T) && !defined(__DEFINED_PTHREAD_ONCE_T)
typedef int pthread_once_t;
#define __DEFINED_PTHREAD_ONCE_T
#endif

#if defined(__NEED_PTHREAD_KEY_T) && !defined(__DEFINED_PTHREAD_KEY_T)
typedef unsigned pthread_key_t;
#define __DEFINED_PTHREAD_KEY_T
#endif

#if defined(__NEED_PTHREAD_SPINLOCK_T) && !defined(__DEFINED_PTHREAD_SPINLOCK_T)
typedef int pthread_spinlock_t;
#define __DEFINED_PTHREAD_SPINLOCK_T
#endif

#if defined(__NEED_PTHREAD_MUTEXATTR_T) && !defined(__DEFINED_PTHREAD_MUTEXATTR_T)
typedef struct { unsigned __attr; } pthread_mutexattr_t;
#define __DEFINED_PTHREAD_MUTEXATTR_T
#endif

#if defined(__NEED_PTHREAD_CONDATTR_T) && !defined(__DEFINED_PTHREAD_CONDATTR_T)
typedef struct { unsigned __attr; } pthread_condattr_t;
#define __DEFINED_PTHREAD_CONDATTR_T
#endif

#if defined(__NEED_PTHREAD_BARRIERATTR_T) && !defined(__DEFINED_PTHREAD_BARRIERATTR_T)
typedef struct { unsigned __attr; } pthread_barrierattr_t;
#define __DEFINED_PTHREAD_BARRIERATTR_T
#endif

#if defined(__NEED_PTHREAD_RWLOCKATTR_T) && !defined(__DEFINED_PTHREAD_RWLOCKATTR_T)
typedef struct { unsigned __attr[2]; } pthread_rwlockattr_t;
#define __DEFINED_PTHREAD_RWLOCKATTR_T
#endif

#if defined(__NEED_PTHREAD_ATTR_T) && !defined(__DEFINED_PTHREAD_ATTR_T)
typedef struct {
	union {
		int __i[14];
		volatile int __vi[14];
		unsigned long __s[7];
	} __attr;
} pthread_attr_t;
#define __DEFINED_PTHREAD_ATTR_T
#endif

#if defined(__NEED_PTHREAD_MUTEX_T) && !defined(__DEFINED_PTHREAD_MUTEX_T)
typedef struct {
	union {
		int __i[10];
		volatile int __vi[10];
		volatile void *volatile __p[5];
	} __mtx;
} pthread_mutex_t;
#define __DEFINED_PTHREAD_MUTEX_T
#endif

#if defined(__NEED_MTX_T) && !defined(__DEFINED_MTX_T)
typedef struct {
	union {
		int __i[10];
		volatile int __vi[10];
		volatile void *volatile __p[5];
	} __mtx;
} mtx_t;
#define __DEFINED_MTX_T
#endif

#if defined(__NEED_PTHREAD_COND_T) && !defined(__DEFINED_PTHREAD_COND_T)
typedef struct {
	union {
		int __i[12];
		volatile int __vi[12];
		void *__p[6];
	} __cond;
} pthread_cond_t;
#define __DEFINED_PTHREAD_COND_T
#endif

#if defined(__NEED_CND_T) && !defined(__DEFINED_CND_T)
typedef struct {
	union {
		int __i[12];
		volatile int __vi[12];
		void *__p[6];
	} __cond;
} cnd_t;
#define __DEFINED_CND_T
#endif

#if defined(__NEED_PTHREAD_RWLOCK_T) && !defined(__DEFINED_PTHREAD_RWLOCK_T)
typedef struct {
	union {
		int __i[14];
		volatile int __i[14];
		void *__p[7];
	} __lock;
} pthread_rwlock_t;
#define __DEFINED_PTHREAD_RWLOCK_T
#endif

#if defined(__NEED_PTHREAD_BARRIER_T) && !defined(__DEFINED_PTHREAD_BARRIER_T)
typedef struct {
	union {
		int __i[8];
		volatile int __vi[8];
		void *__p[4];
	} __barrier;
} pthread_barrier_t;
#define __DEFINED_PTHREAD_BARRIER_T
#endif
