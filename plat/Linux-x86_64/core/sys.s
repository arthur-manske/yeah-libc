.section .text
.globl sys_read
sys_read:
	xorq %rax,%rax
	syscall
	ret

.globl sys_write
sys_write:
	movq $1,%rax
	syscall
	ret

.globl sys_open
sys_open:
	movq $2,%rax
	syscall
	ret

.globl sys_close
sys_close:
	movq $3,%rax
	syscall
	ret

.globl sys_poll
sys_poll:
	movq $7,%rax
	syscall
	ret

.globl sys_lseek
sys_lseek:
	movq $8,%rax
	syscall
	ret

.globl sys_mmap
sys_mmap:
	movq $9,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mprotect
sys_mprotect:
	movq $10,%rax
	syscall
	ret

.globl sys_munmap
sys_munmap:
	movq $11,%rax
	syscall
	ret

.globl sys_brk
sys_brk:
	movq $12,%rax
	syscall
	ret

.globl sys_rt_sigaction
sys_rt_sigaction:
	movq $13,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_rt_sigprocmask
sys_rt_sigprocmask:
	movq $14,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_rt_sigreturn
sys_rt_sigreturn:
	movq $15,%rax
	syscall
	ret

.globl sys_ioctl
sys_ioctl:
	movq $16,%rax
	syscall
	ret

.globl sys_pread
sys_pread:
	movq $17,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pwrite
sys_pwrite:
	movq $18,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_readv
sys_readv:
	movq $19,%rax
	syscall
	ret

.globl sys_writev
sys_writev:
	movq $20,%rax
	syscall
	ret

.globl sys_access
sys_access:
	movq $21,%rax
	syscall
	ret

.globl sys_pipe
sys_pipe:
	movq $22,%rax
	syscall
	ret

.globl sys_select
sys_select:
	movq $23,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_sched_yield
sys_sched_yield:
	movq $24,%rax
	syscall
	ret

.globl sys_mremap
sys_mremap:
	movq $25,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_msync
sys_msync:
	movq $26,%rax
	syscall
	ret

.globl sys_mincore
sys_mincore:
	movq $27,%rax
	syscall
	ret

.globl sys_madvise
sys_madvise:
	movq $28,%rax
	syscall
	ret

.globl sys_shmget
sys_shmget:
	movq $29,%rax
	syscall
	ret

.globl sys_shmat
sys_shmat:
	movq $30,%rax
	syscall
	ret

.globl sys_shmctl
sys_shmctl:
	movq $31,%rax
	syscall
	ret

.globl sys_dup
sys_dup:
	movq $32,%rax
	syscall
	ret

.globl sys_dup2
sys_dup2:
	movq $33,%rax
	syscall
	ret

.globl sys_pause
sys_pause:
	movq $34,%rax
	syscall
	ret

.globl sys_nanosleep
sys_nanosleep:
	movq $35,%rax
	syscall
	ret

.globl sys_getitimer
sys_getitimer:
	movq $36,%rax
	syscall
	ret

.globl sys_alarm
sys_alarm:
	movq $37,%rax
	syscall
	ret

.globl sys_setitimer
sys_setitimer:
	movq $38,%rax
	syscall
	ret

.globl sys_getpid
sys_getpid:
	movq $39,%rax
	syscall
	ret

.globl sys_sendfile
sys_sendfile:
	movq $40,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_socket
sys_socket:
	movq $41,%rax
	syscall
	ret

.globl sys_connect
sys_connect:
	movq $42,%rax
	syscall
	ret

.globl sys_accept
sys_accept:
	movq $43,%rax
	syscall
	ret

.globl sys_sendto
sys_sendto:
	movq $44,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_recvfrom
sys_recvfrom:
	movq $45,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_sendmsg
sys_sendmsg:
	movq $46,%rax
	syscall
	ret

.globl sys_recvmsg
sys_recvmsg:
	movq $47,%rax
	syscall
	ret

.globl sys_shutdown
sys_shutdown:
	movq $48,%rax
	syscall
	ret

.globl sys_bind
sys_bind:
	movq $49,%rax
	syscall
	ret

.globl sys_listen
sys_listen:
	movq $50,%rax
	syscall
	ret

.globl sys_getsockname
sys_getsockname:
	movq $51,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_getpeername
sys_getpeername:
	movq $52,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_socketpair
sys_socketpair:
	movq $53,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_setsockopt
sys_setsockopt:
	movq $54,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_getsockopt
sys_getsockopt:
	movq $55,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_clone
sys_clone:
	movq $56,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fork
sys_fork:
	movq $57,%rax
	syscall
	ret

.globl sys_vfork
sys_vfork:
	movq $58,%rax
	syscall
	ret

.globl sys_execve
sys_execve:
	movq $59,%rax
	syscall
	ret

.globl sys_wait4
sys_wait4:
	movq $61,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_kill
sys_kill:
	movq $62,%rax
	syscall
	ret

.globl sys_uname
sys_uname:
	movq $63,%rax
	syscall
	ret

.globl sys_semget
sys_semget:
	movq $64,%rax
	syscall
	ret

.globl sys_semop
sys_semop:
	movq $65,%rax
	syscall
	ret

.globl sys_semctl
sys_semctl:
	movq $66,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_shmdt
sys_shmdt:
	movq $67,%rax
	syscall
	ret

.globl sys_msgget
sys_msgget:
	movq $68,%rax
	syscall
	ret

.globl sys_msgsnd
sys_msgsnd:
	movq $69,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_msgrcv
sys_msgrcv:
	movq $70,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_msgctl
sys_msgctl:
	movq $71,%rax
	syscall
	ret

.globl sys_fcntl
sys_fcntl:
	movq $72,%rax
	syscall
	ret

.globl sys_flock
sys_flock:
	movq $73,%rax
	syscall
	ret

.globl sys_fsync
sys_fsync:
	movq $74,%rax
	syscall
	ret

.globl sys_fdatasync
sys_fdatasync:
	movq $75,%rax
	syscall
	ret

.globl sys_truncate
sys_truncate:
	movq $76,%rax
	syscall
	ret

.globl sys_ftruncate
sys_ftruncate:
	movq $77,%rax
	syscall
	ret

/* .globl sys_getdents */
/* sys_getdents: */
/* 	movq $78,%rax */
/* 	syscall */
/* 	ret */

.globl sys_getcwd
sys_getcwd:
	movq $79,%rax
	syscall
	ret

.globl sys_chdir
sys_chdir:
	movq $80,%rax
	syscall
	ret

.globl sys_fchdir
sys_fchdir:
	movq $81,%rax
	syscall
	ret

.globl sys_rename
sys_rename:
	movq $82,%rax
	syscall
	ret

.globl sys_mkdir
sys_mkdir:
	movq $83,%rax
	syscall
	ret

.globl sys_rmdir
sys_rmdir:
	movq $84,%rax
	syscall
	ret

.globl sys_link
sys_link:
	movq $86,%rax
	syscall
	ret

.globl sys_unlink
sys_unlink:
	movq $87,%rax
	syscall
	ret

.globl sys_symlink
sys_symlink:
	movq $88,%rax
	syscall
	ret

.globl sys_readlink
sys_readlink:
	movq $89,%rax
	syscall
	ret

.globl sys_chmod
sys_chmod:
	movq $90,%rax
	syscall
	ret

.globl sys_fchmod
sys_fchmod:
	movq $91,%rax
	syscall
	ret

.globl sys_chown
sys_chown:
	movq $92,%rax
	syscall
	ret

.globl sys_fchown
sys_fchown:
	movq $93,%rax
	syscall
	ret

.globl sys_lchown
sys_lchown:
	movq $94,%rax
	syscall
	ret

.globl sys_umask
sys_umask:
	movq $95,%rax
	syscall
	ret

.globl sys_gettimeofday
sys_gettimeofday:
	movq $96,%rax
	syscall
	ret

.globl sys_getrlimit
sys_getrlimit:
	movq $97,%rax
	syscall
	ret

.globl sys_getrusage
sys_getrusage:
	movq $98,%rax
	syscall
	ret

.globl sys_sysinfo
sys_sysinfo:
	movq $99,%rax
	syscall
	ret

.globl sys_times
sys_times:
	movq $100,%rax
	syscall
	ret

.globl sys_ptrace
sys_ptrace:
	movq $101,%rax
	syscall
	ret

.globl sys_getuid
sys_getuid:
	movq $102,%rax
	syscall
	ret

.globl sys_syslog
sys_syslog:
	movq $103,%rax
	syscall
	ret

.globl sys_getgid
sys_getgid:
	movq $104,%rax
	syscall
	ret

.globl sys_setuid
sys_setuid:
	movq $105,%rax
	syscall
	ret

.globl sys_setgid
sys_setgid:
	movq $106,%rax
	syscall
	ret

.globl sys_geteuid
sys_geteuid:
	movq $107,%rax
	syscall
	ret

.globl sys_getegid
sys_getegid:
	movq $108,%rax
	syscall
	ret

.globl sys_setpgid
sys_setpgid:
	movq $109,%rax
	syscall
	ret

.globl sys_getppid
sys_getppid:
	movq $110,%rax
	syscall
	ret

.globl sys_getpgrp
sys_getpgrp:
	movq $111,%rax
	syscall
	ret

.globl sys_setsid
sys_setsid:
	movq $112,%rax
	syscall
	ret

.globl sys_setreuid
sys_setreuid:
	movq $113,%rax
	syscall
	ret

.globl sys_setregid
sys_setregid:
	movq $114,%rax
	syscall
	ret

.globl sys_getgroups
sys_getgroups:
	movq $115,%rax
	syscall
	ret

.globl sys_setgroups
sys_setgroups:
	movq $116,%rax
	syscall
	ret

.globl sys_setresuid
sys_setresuid:
	movq $117,%rax
	syscall
	ret

.globl sys_getresuid
sys_getresuid:
	movq $118,%rax
	syscall
	ret

.globl sys_setresgid
sys_setresgid:
	movq $119,%rax
	syscall
	ret

.globl sys_getresgid
sys_getresgid:
	movq $120,%rax
	syscall
	ret

.globl sys_getpgid
sys_getpgid:
	movq $121,%rax
	syscall
	ret

.globl sys_setfsuid
sys_setfsuid:
	movq $122,%rax
	syscall
	ret

.globl sys_setfsgid
sys_setfsgid:
	movq $123,%rax
	syscall
	ret

.globl sys_getsid
sys_getsid:
	movq $124,%rax
	syscall
	ret

.globl sys_capget
sys_capget:
	movq $125,%rax
	syscall
	ret

.globl sys_capset
sys_capset:
	movq $126,%rax
	syscall
	ret

.globl sys_rt_sigpending
sys_rt_sigpending:
	movq $127,%rax
	syscall
	ret

.globl sys_rt_sigtimedwait
sys_rt_sigtimedwait:
	movq $128,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_rt_sigqueueinfo
sys_rt_sigqueueinfo:
	movq $129,%rax
	syscall
	ret

.globl sys_rt_sigsuspend
sys_rt_sigsuspend:
	movq $130,%rax
	syscall
	ret

.globl sys_sigaltstack
sys_sigaltstack:
	movq $131,%rax
	syscall
	ret

.globl sys_utime
sys_utime:
	movq $132,%rax
	syscall
	ret

.globl sys_mknod
sys_mknod:
	movq $133,%rax
	syscall
	ret

.globl sys_personality
sys_personality:
	movq $135,%rax
	syscall
	ret

.globl sys_ustat
sys_ustat:
	movq $136,%rax
	syscall
	ret

.globl sys_statfs
sys_statfs:
	movq $137,%rax
	syscall
	ret

.globl sys_fstatfs
sys_fstatfs:
	movq $138,%rax
	syscall
	ret

.globl sys_sysfs
sys_sysfs:
	movq $139,%rax
	syscall
	ret

.globl sys_getpriority
sys_getpriority:
	movq $140,%rax
	syscall
	ret

.globl sys_setpriority
sys_setpriority:
	movq $141,%rax
	syscall
	ret

.globl sys_sched_setparam
sys_sched_setparam:
	movq $142,%rax
	syscall
	ret

.globl sys_sched_getparam
sys_sched_getparam:
	movq $143,%rax
	syscall
	ret

.globl sys_sched_setscheduler
sys_sched_setscheduler:
	movq $144,%rax
	syscall
	ret

.globl sys_sched_getscheduler
sys_sched_getscheduler:
	movq $145,%rax
	syscall
	ret

.globl sys_sched_get_priority_max
sys_sched_get_priority_max:
	movq $146,%rax
	syscall
	ret

.globl sys_sched_get_priority_min
sys_sched_get_priority_min:
	movq $147,%rax
	syscall
	ret

.globl sys_sched_rr_get_interval
sys_sched_rr_get_interval:
	movq $148,%rax
	syscall
	ret

.globl sys_mlock
sys_mlock:
	movq $149,%rax
	syscall
	ret

.globl sys_munlock
sys_munlock:
	movq $150,%rax
	syscall
	ret

.globl sys_mlockall
sys_mlockall:
	movq $151,%rax
	syscall
	ret

.globl sys_munlockall
sys_munlockall:
	movq $152,%rax
	syscall
	ret

.globl sys_vhangup
sys_vhangup:
	movq $153,%rax
	syscall
	ret

.globl sys_adjtimex
sys_adjtimex:
	movq $159,%rax
	syscall
	ret

.globl sys_setrlimit
sys_setrlimit:
	movq $160,%rax
	syscall
	ret

.globl sys_chroot
sys_chroot:
	movq $161,%rax
	syscall
	ret

.globl sys_sync
sys_sync:
	movq $162,%rax
	syscall
	ret

.globl sys_acct
sys_acct:
	movq $163,%rax
	syscall
	ret

.globl sys_settimeofday
sys_settimeofday:
	movq $164,%rax
	syscall
	ret

.globl sys_mount
sys_mount:
	movq $165,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_umount
sys_umount:
	movq $166,%rax
	syscall
	ret

.globl sys_swapon
sys_swapon:
	movq $167,%rax
	syscall
	ret

.globl sys_swapoff
sys_swapoff:
	movq $168,%rax
	syscall
	ret

.globl sys_reboot
sys_reboot:
	movq $169,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_sethostname
sys_sethostname:
	movq $170,%rax
	syscall
	ret

.globl sys_setdomainname
sys_setdomainname:
	movq $171,%rax
	syscall
	ret

.globl sys_iopl
sys_iopl:
	movq $172,%rax
	syscall
	ret

.globl sys_ioperm
sys_ioperm:
	movq $173,%rax
	syscall
	ret

.globl sys_init_module
sys_init_module:
	movq $175,%rax
	syscall
	ret

.globl sys_delete_module
sys_delete_module:
	movq $176,%rax
	syscall
	ret

.globl sys_quotactl
sys_quotactl:
	movq $179,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_gettid
sys_gettid:
	movq $186,%rax
	syscall
	ret

.globl sys_readahead
sys_readahead:
	movq $187,%rax
	syscall
	ret

.globl sys_setxattr
sys_setxattr:
	movq $188,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_lsetxattr
sys_lsetxattr:
	movq $189,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fsetxattr
sys_fsetxattr:
	movq $190,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_getxattr
sys_getxattr:
	movq $191,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_lgetxattr
sys_lgetxattr:
	movq $192,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fgetxattr
sys_fgetxattr:
	movq $193,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_listxattr
sys_listxattr:
	movq $194,%rax
	syscall
	ret

.globl sys_llistxattr
sys_llistxattr:
	movq $195,%rax
	syscall
	ret

.globl sys_flistxattr
sys_flistxattr:
	movq $196,%rax
	syscall
	ret

.globl sys_removqexattr
sys_removqexattr:
	movq $197,%rax
	syscall
	ret

.globl sys_lremovqexattr
sys_lremovqexattr:
	movq $198,%rax
	syscall
	ret

.globl sys_fremovqexattr
sys_fremovqexattr:
	movq $199,%rax
	syscall
	ret

.globl sys_tkill
sys_tkill:
	movq $200,%rax
	syscall
	ret

.globl sys_time
sys_time:
	movq $201,%rax
	syscall
	ret

.globl sys_futex
sys_futex:
	movq $202,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_sched_setaffinity
sys_sched_setaffinity:
	movq $203,%rax
	syscall
	ret

.globl sys_sched_getaffinity
sys_sched_getaffinity:
	movq $204,%rax
	syscall
	ret

.globl sys_set_thread_area
sys_set_thread_area:
	movq $205,%rax
	syscall
	ret

.globl sys_io_setup
sys_io_setup:
	movq $206,%rax
	syscall
	ret

.globl sys_io_destroy
sys_io_destroy:
	movq $207,%rax
	syscall
	ret

.globl sys_io_getevents
sys_io_getevents:
	movq $208,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_io_submit
sys_io_submit:
	movq $209,%rax
	syscall
	ret

.globl sys_io_cancel
sys_io_cancel:
	movq $210,%rax
	syscall
	ret

.globl sys_get_thread_area
sys_get_thread_area:
	movq $211,%rax
	syscall
	ret

.globl sys_epoll_create
sys_epoll_create:
	movq $213,%rax
	syscall
	ret

.globl sys_remap_file_pages
sys_remap_file_pages:
	movq $216,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_getdents
sys_getdents:
	movq $217,%rax
	syscall
	ret

.globl sys_set_tid_address
sys_set_tid_address:
	movq $218,%rax
	syscall
	ret

.globl sys_restart_syscall
sys_restart_syscall:
	movq $219,%rax
	syscall
	ret

.globl sys_semtimedop
sys_semtimedop:
	movq $220,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fadvise
sys_fadvise:
	movq $221,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_timer_create
sys_timer_create:
	movq $222,%rax
	syscall
	ret

.globl sys_timer_settime
sys_timer_settime:
	movq $223,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_timer_gettime
sys_timer_gettime:
	movq $224,%rax
	syscall
	ret

.globl sys_timer_getoverrun
sys_timer_getoverrun:
	movq $225,%rax
	syscall
	ret

.globl sys_timer_delete
sys_timer_delete:
	movq $226,%rax
	syscall
	ret

.globl sys_clock_settime
sys_clock_settime:
	movq $227,%rax
	syscall
	ret

.globl sys_clock_gettime
sys_clock_gettime:
	movq $228,%rax
	syscall
	ret

.globl sys_clock_getres
sys_clock_getres:
	movq $229,%rax
	syscall
	ret

.globl sys_clock_nanosleep
sys_clock_nanosleep:
	movq $230,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_epoll_wait
sys_epoll_wait:
	movq $232,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_epoll_ctl
sys_epoll_ctl:
	movq $233,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_tgkill
sys_tgkill:
	movq $234,%rax
	syscall
	ret

.globl sys_utimes
sys_utimes:
	movq $235,%rax
	syscall
	ret

.globl sys_vserver
sys_vserver:
	movq $236,%rax
	syscall
	ret

.globl sys_mbind
sys_mbind:
	movq $237,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_set_mempolicy
sys_set_mempolicy:
	movq $238,%rax
	syscall
	ret

.globl sys_get_mempolicy
sys_get_mempolicy:
	movq $239,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mq_open
sys_mq_open:
	movq $240,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mq_unlink
sys_mq_unlink:
	movq $241,%rax
	syscall
	ret

.globl sys_mq_timedsend
sys_mq_timedsend:
	movq $242,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mq_timedreceive
sys_mq_timedreceive:
	movq $243,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mq_notify
sys_mq_notify:
	movq $244,%rax
	syscall
	ret

.globl sys_mq_getsetattr
sys_mq_getsetattr:
	movq $245,%rax
	syscall
	ret

.globl sys_kexec_load
sys_kexec_load:
	movq $246,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_waitid
sys_waitid:
	movq $247,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_add_key
sys_add_key:
	movq $248,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_request_key
sys_request_key:
	movq $249,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_keyctl
sys_keyctl:
	movq $250,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_ioprio_set
sys_ioprio_set:
	movq $251,%rax
	syscall
	ret

.globl sys_ioprio_get
sys_ioprio_get:
	movq $252,%rax
	syscall
	ret

.globl sys_inotify_init
sys_inotify_init:
	movq $253,%rax
	syscall
	ret

.globl sys_inotify_add_watch
sys_inotify_add_watch:
	movq $254,%rax
	syscall
	ret

.globl sys_inotify_rm_watch
sys_inotify_rm_watch:
	movq $255,%rax
	syscall
	ret

.globl sys_migrate_pages
sys_migrate_pages:
	movq $256,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_openat
sys_openat:
	movq $257,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mkdirat
sys_mkdirat:
	movq $258,%rax
	syscall
	ret

.globl sys_mknodat
sys_mknodat:
	movq $259,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fchownat
sys_fchownat:
	movq $260,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_futimesat
sys_futimesat:
	movq $261,%rax
	syscall
	ret

.globl sys_unlinkat
sys_unlinkat:
	movq $263,%rax
	syscall
	ret

.globl sys_renameat
sys_renameat:
	movq $264,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_linkat
sys_linkat:
	movq $265,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_symlinkat
sys_symlinkat:
	movq $266,%rax
	syscall
	ret

.globl sys_readlinkat
sys_readlinkat:
	movq $267,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fchmodat
sys_fchmodat:
	movq $268,%rax
	syscall
	ret

.globl sys_faccessat
sys_faccessat:
	movq $269,%rax
	syscall
	ret

.globl sys_pselect6
sys_pselect6:
	movq $270,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_ppoll
sys_ppoll:
	movq $271,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_unshare
sys_unshare:
	movq $272,%rax
	syscall
	ret

.globl sys_set_robust_list
sys_set_robust_list:
	movq $273,%rax
	syscall
	ret

.globl sys_get_robust_list
sys_get_robust_list:
	movq $274,%rax
	syscall
	ret

.globl sys_splice
sys_splice:
	movq $275,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_tee
sys_tee:
	movq $276,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_sync_file_range
sys_sync_file_range:
	movq $277,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_vmsplice
sys_vmsplice:
	movq $278,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_movqe_pages
sys_movqe_pages:
	movq $279,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_utimensat
sys_utimensat:
	movq $280,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_epoll_pwait
sys_epoll_pwait:
	movq $281,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_signalfd
sys_signalfd:
	movq $282,%rax
	syscall
	ret

.globl sys_timerfd_create
sys_timerfd_create:
	movq $283,%rax
	syscall
	ret

.globl sys_eventfd
sys_eventfd:
	movq $284,%rax
	syscall
	ret

.globl sys_fallocate
sys_fallocate:
	movq $285,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_timerfd_settime
sys_timerfd_settime:
	movq $286,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_timerfd_gettime
sys_timerfd_gettime:
	movq $287,%rax
	syscall
	ret

.globl sys_accept4
sys_accept4:
	movq $288,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_signalfd4
sys_signalfd4:
	movq $289,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_eventfd2
sys_eventfd2:
	movq $290,%rax
	syscall
	ret

.globl sys_epoll_create1
sys_epoll_create1:
	movq $291,%rax
	syscall
	ret

.globl sys_dup3
sys_dup3:
	movq $292,%rax
	syscall
	ret

.globl sys_pipe2
sys_pipe2:
	movq $293,%rax
	syscall
	ret

.globl sys_inotify_init1
sys_inotify_init1:
	movq $294,%rax
	syscall
	ret

.globl sys_preadv
sys_preadv:
	movq $295,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pwritev
sys_pwritev:
	movq $296,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_rt_tgsigqueueinfo
sys_rt_tgsigqueueinfo:
	movq $297,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_perf_event_open
sys_perf_event_open:
	movq $298,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_recvmmsg
sys_recvmmsg:
	movq $299,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fanotify_init
sys_fanotify_init:
	movq $300,%rax
	syscall
	ret

.globl sys_fanotify_mark
sys_fanotify_mark:
	movq $301,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_prlimit64
sys_prlimit64:
	movq $302,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_name_to_handle_at
sys_name_to_handle_at:
	movq $303,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_open_by_handle_at
sys_open_by_handle_at:
	movq $304,%rax
	syscall
	ret

.globl sys_clock_adjtime
sys_clock_adjtime:
	movq $305,%rax
	syscall
	ret

.globl sys_syncfs
sys_syncfs:
	movq $306,%rax
	syscall
	ret

.globl sys_sendmmsg
sys_sendmmsg:
	movq $307,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_setns
sys_setns:
	movq $308,%rax
	syscall
	ret

.globl sys_getcpu
sys_getcpu:
	movq $309,%rax
	syscall
	ret

.globl sys_process_vm_readv
sys_process_vm_readv:
	movq $310,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_process_vm_writev
sys_process_vm_writev:
	movq $311,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_kcmp
sys_kcmp:
	movq $312,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_finit_module
sys_finit_module:
	movq $313,%rax
	syscall
	ret

.globl sys_sched_setattr
sys_sched_setattr:
	movq $314,%rax
	syscall
	ret

.globl sys_sched_getattr
sys_sched_getattr:
	movq $315,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_renameat2
sys_renameat2:
	movq $316,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_seccomp
sys_seccomp:
	movq $317,%rax
	syscall
	ret

.globl sys_getrandom
sys_getrandom:
	movq $318,%rax
	syscall
	ret

.globl sys_memfd_create
sys_memfd_create:
	movq $319,%rax
	syscall
	ret

.globl sys_kexec_file_load
sys_kexec_file_load:
	movq $320,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_bpf
sys_bpf:
	movq $321,%rax
	syscall
	ret

.globl sys_execveat
sys_execveat:
	movq $322,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_userfaultfd
sys_userfaultfd:
	movq $323,%rax
	syscall
	ret

.globl sys_membarrier
sys_membarrier:
	movq $324,%rax
	syscall
	ret

.globl sys_mlock2
sys_mlock2:
	movq $325,%rax
	syscall
	ret

.globl sys_copy_file_range
sys_copy_file_range:
	movq $326,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_preadv2
sys_preadv2:
	movq $327,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pwritev2
sys_pwritev2:
	movq $328,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pkey_mprotect
sys_pkey_mprotect:
	movq $329,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pkey_alloc
sys_pkey_alloc:
	movq $330,%rax
	syscall
	ret

.globl sys_pkey_free
sys_pkey_free:
	movq $331,%rax
	syscall
	ret

.globl sys_statx
sys_statx:
	movq $332,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_io_pgetevents
sys_io_pgetevents:
	movq $333,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_rseq
sys_rseq:
	movq $334,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pidfd_send_signal
sys_pidfd_send_signal:
	movq $424,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_io_uring_setup
sys_io_uring_setup:
	movq $425,%rax
	syscall
	ret

.globl sys_io_uring_enter
sys_io_uring_enter:
	movq $426,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_io_uring_register
sys_io_uring_register:
	movq $427,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_open_tree
sys_open_tree:
	movq $428,%rax
	syscall
	ret

.globl sys_movqe_mount
sys_movqe_mount:
	movq $429,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fsopen
sys_fsopen:
	movq $430,%rax
	syscall
	ret

.globl sys_fsconfig
sys_fsconfig:
	movq $431,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fsmount
sys_fsmount:
	movq $432,%rax
	syscall
	ret

.globl sys_fspick
sys_fspick:
	movq $433,%rax
	syscall
	ret

.globl sys_pidfd_open
sys_pidfd_open:
	movq $434,%rax
	syscall
	ret

.globl sys_clone3
sys_clone3:
	movq $435,%rax
	syscall
	ret

.globl sys_close_range
sys_close_range:
	movq $436,%rax
	syscall
	ret

.globl sys_openat2
sys_openat2:
	movq $437,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_pidfd_getfd
sys_pidfd_getfd:
	movq $438,%rax
	syscall
	ret

.globl sys_faccessat2
sys_faccessat2:
	movq $439,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_process_madvise
sys_process_madvise:
	movq $440,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_epoll_pwait2
sys_epoll_pwait2:
	movq $441,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_mount_setattr
sys_mount_setattr:
	movq $442,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_quotactl_fd
sys_quotactl_fd:
	movq $443,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_landlock_create_ruleset
sys_landlock_create_ruleset:
	movq $444,%rax
	syscall
	ret

.globl sys_landlock_add_rule
sys_landlock_add_rule:
	movq $445,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_landlock_restrict_self
sys_landlock_restrict_self:
	movq $446,%rax
	syscall
	ret

.globl sys_memfd_secret
sys_memfd_secret:
	movq $447,%rax
	syscall
	ret

.globl sys_process_mrelease
sys_process_mrelease:
	movq $448,%rax
	syscall
	ret

.globl sys_futex_waitv
sys_futex_waitv:
	movq $449,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_set_mempolicy_home_node
sys_set_mempolicy_home_node:
	movq $450,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_cachestat
sys_cachestat:
	movq $451,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_fchmodat2
sys_fchmodat2:
	movq $452,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_map_shadow_stack
sys_map_shadow_stack:
	movq $453,%rax
	syscall
	ret

.globl sys_futex_wake
sys_futex_wake:
	movq $454,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_futex_wait
sys_futex_wait:
	movq $455,%rax
	movq %rcx,%r10
	syscall
	ret

.globl sys_futex_requeue
sys_futex_requeue:
	movq $456,%rax
	movq %rcx,%r10
	syscall
	ret
