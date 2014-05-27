#if defined LINUX_MIPSN32
	/* For an N32 strace decode the N32 64-bit syscalls.  */
	{ 3,	TD,	sys_read,		"read"		}, /* 6000 */ /* start of Linux N32 */
	{ 3,	TD,	sys_write,		"write"		}, /* 6001 */
	{ 3,	TD|TF,	sys_open,		"open"		}, /* 6002 */
	{ 1,	TD,	sys_close,		"close"		}, /* 6003 */
	{ 2,	TF,	sys_stat64,		"stat"		}, /* 6004 */
	{ 2,	TD,	sys_fstat64,		"fstat"		}, /* 6005 */
	{ 2,	TF,	sys_lstat64,		"lstat"		}, /* 6006 */
	{ 3,	TD,	sys_poll,		"poll"		}, /* 6007 */
	{ 3,	TD,	sys_lseek,		"lseek"		}, /* 6008 */
	{ 6,	TD|TM,	sys_mmap,		"mmap"		}, /* 6009 */
	{ 3,	TM,	sys_mprotect,		"mprotect"	}, /* 6010 */
	{ 2,	TM,	sys_munmap,		"munmap"	}, /* 6011 */
	{ 1,	TM,	sys_brk,		"brk"		}, /* 6012 */
	{ 4,	TS,	sys_rt_sigaction,	"rt_sigaction"	}, /* 6013 */
	{ 4,	TS,	sys_rt_sigprocmask,	"rt_sigprocmask"}, /* 6014 */
	{ 3,	TD,	sys_ioctl,		"ioctl"		}, /* 6015 */
	{ 4,	TD,	sys_pread,		"pread64"	}, /* 6016 */
	{ 4,	TD,	sys_pwrite,		"pwrite64"	}, /* 6017 */
	{ 3,	TD,	sys_readv,		"readv"		}, /* 6018 */
	{ 3,	TD,	sys_writev,		"writev"	}, /* 6019 */
	{ 2,	TF,	sys_access,		"access"	}, /* 6020 */
	{ 1,	TD,	sys_pipe,		"pipe"		}, /* 6021 */
	{ 5,	TD,	sys_select,		"_newselect"	}, /* 6022 */
	{ 0,	0,	sys_sched_yield,	"sched_yield"	}, /* 6023 */
	{ 5,	TM,	sys_mremap,		"mremap"	}, /* 6024 */
	{ 3,	TM,	sys_msync,		"msync"		}, /* 6025 */
	{ 3,	TM,	sys_mincore,		"mincore"	}, /* 6026 */
	{ 3,	TM,	sys_madvise,		"madvise"	}, /* 6027 */
	{ 3,	TI,	sys_shmget,		"shmget"	}, /* 6028 */
	{ 3,	TI,	sys_shmat,		"shmat"		}, /* 6029 */
	{ 3,	TI,	sys_shmctl,		"shmctl"	}, /* 6030 */
	{ 1,	TD,	sys_dup,		"dup"		}, /* 6031 */
	{ 2,	TD,	sys_dup2,		"dup2"		}, /* 6032 */
	{ 0,	TS,	sys_pause,		"pause"		}, /* 6033 */
	{ 2,	0,	sys_nanosleep,		"nanosleep"	}, /* 6034 */
	{ 2,	0,	sys_getitimer,		"getitimer"	}, /* 6035 */
	{ 3,	0,	sys_setitimer,		"setitimer"	}, /* 6036 */
	{ 1,	0,	sys_alarm,		"alarm"		}, /* 6037 */
	{ 0,	0,	sys_getpid,		"getpid"	}, /* 6038 */
	{ 4,	TD|TN,	sys_sendfile,		"sendfile"	}, /* 6039 */
	{ 3,	TN,	sys_socket,		"socket"	}, /* 6040 */
	{ 3,	TN,	sys_connect,		"connect"	}, /* 6041 */
	{ 3,	TN,	sys_accept,		"accept"	}, /* 6042 */
	{ 6,	TN,	sys_sendto,		"sendto"	}, /* 6043 */
	{ 6,	TN,	sys_recvfrom,		"recvfrom"	}, /* 6044 */
	{ 3,	TN,	sys_sendmsg,		"sendmsg"	}, /* 6045 */
	{ 3,	TN,	sys_recvmsg,		"recvmsg"	}, /* 6046 */
	{ 2,	TN,	sys_shutdown,		"shutdown"	}, /* 6047 */
	{ 3,	TN,	sys_bind,		"bind"		}, /* 6048 */
	{ 2,	TN,	sys_listen,		"listen"	}, /* 6049 */
	{ 3,	TN,	sys_getsockname,	"getsockname"	}, /* 6050 */
	{ 3,	TN,	sys_getpeername,	"getpeername"	}, /* 6051 */
	{ 4,	TN,	sys_socketpair,		"socketpair"	}, /* 6052 */
	{ 5,	TN,	sys_setsockopt,		"setsockopt"	}, /* 6053 */
	{ 5,	TN,	sys_getsockopt,		"getsockopt"	}, /* 6054 */
	{ 2,	TP,	sys_clone,		"clone"		}, /* 6055 */
	{ 0,	TP,	sys_fork,		"fork"		}, /* 6056 */
	{ 3,	TF|TP,	sys_execve,		"execve"	}, /* 6057 */
	{ 1,	TP,	sys_exit,		"exit"		}, /* 6058 */
	{ 4,	TP,	sys_wait4,		"wait4"		}, /* 6059 */
	{ 2,	TS,	sys_kill,		"kill"		}, /* 6060 */
	{ 1,	0,	sys_uname,		"uname"		}, /* 6061 */
	{ 3,	TI,	sys_semget,		"semget"	}, /* 6062 */
	{ 3,	TI,	printargs,		"semop"		}, /* 6063 */
	{ 4,	TI,	sys_semctl,		"semctl"	}, /* 6064 */
	{ 1,	TI,	sys_shmdt,		"shmdt"		}, /* 6065 */
	{ 2,	TI,	sys_msgget,		"msgget"	}, /* 6066 */
	{ 4,	TI,	sys_msgsnd,		"msgsnd"	}, /* 6067 */
	{ 5,	TI,	sys_msgrcv,		"msgrcv"	}, /* 6068 */
	{ 3,	TI,	sys_msgctl,		"msgctl"	}, /* 6069 */
	{ 3,	TD,	sys_fcntl,		"fcntl"		}, /* 6070 */
	{ 2,	TD,	sys_flock,		"flock"		}, /* 6071 */
	{ 1,	TD,	sys_fsync,		"fsync"		}, /* 6072 */
	{ 1,	TD,	sys_fdatasync,		"fdatasync"	}, /* 6073 */
	{ 2,	TF,	sys_truncate64,		"truncate"	}, /* 6074 */
	{ 2,	TD,	sys_ftruncate64,	"ftruncate"	}, /* 6075 */
	{ 3,	TD,	sys_getdents,		"getdents"	}, /* 6076 */
	{ 2,	TF,	sys_getcwd,		"getcwd"	}, /* 6077 */
	{ 1,	TF,	sys_chdir,		"chdir"		}, /* 6078 */
	{ 1,	TD,	sys_fchdir,		"fchdir"	}, /* 6079 */
	{ 2,	TF,	sys_rename,		"rename"	}, /* 6080 */
	{ 2,	TF,	sys_mkdir,		"mkdir"		}, /* 6081 */
	{ 1,	TF,	sys_rmdir,		"rmdir"		}, /* 6082 */
	{ 2,	TD|TF,	sys_creat,		"creat"		}, /* 6083 */
	{ 2,	TF,	sys_link,		"link"		}, /* 6084 */
	{ 1,	TF,	sys_unlink,		"unlink"	}, /* 6085 */
	{ 2,	TF,	sys_symlink,		"symlink"	}, /* 6086 */
	{ 3,	TF,	sys_readlink,		"readlink"	}, /* 6087 */
	{ 2,	TF,	sys_chmod,		"chmod"		}, /* 6088 */
	{ 2,	TD,	sys_fchmod,		"fchmod"	}, /* 6089 */
	{ 3,	TF,	sys_chown,		"chown"		}, /* 6090 */
	{ 3,	TD,	sys_fchown,		"fchown"	}, /* 6091 */
	{ 3,	TF,	sys_chown,		"lchown"	}, /* 6092 */
	{ 1,	0,	sys_umask,		"umask"		}, /* 6093 */
	{ 2,	0,	sys_gettimeofday,	"gettimeofday"	}, /* 6094 */
	{ 2,	0,	sys_getrlimit,		"getrlimit"	}, /* 6095 */
	{ 2,	0,	sys_getrusage,		"getrusage"	}, /* 6096 */
	{ 1,	0,	sys_sysinfo,		"sysinfo"	}, /* 6097 */
	{ 1,	0,	sys_times,		"times"		}, /* 6098 */
	{ 4,	0,	sys_ptrace,		"ptrace"	}, /* 6099 */
	{ 0,	NF,	sys_getuid,		"getuid"	}, /* 6100 */
	{ 3,	0,	sys_syslog,		"syslog"	}, /* 6101 */
	{ 0,	NF,	sys_getgid,		"getgid"	}, /* 6102 */
	{ 1,	0,	sys_setuid,		"setuid"	}, /* 6103 */
	{ 1,	0,	sys_setgid,		"setgid"	}, /* 6104 */
	{ 0,	NF,	sys_geteuid,		"geteuid"	}, /* 6105 */
	{ 0,	NF,	sys_getegid,		"getegid"	}, /* 6106 */
	{ 2,	0,	sys_setpgid,		"setpgid"	}, /* 6107 */
	{ 0,	0,	sys_getppid,		"getppid"	}, /* 6108 */
	{ 0,	0,	sys_getpgrp,		"getpgrp"	}, /* 6109 */
	{ 0,	0,	sys_setsid,		"setsid"	}, /* 6110 */
	{ 2,	0,	sys_setreuid,		"setreuid"	}, /* 6111 */
	{ 2,	0,	sys_setregid,		"setregid"	}, /* 6112 */
	{ 2,	0,	sys_getgroups,		"getgroups"	}, /* 6113 */
	{ 2,	0,	sys_setgroups,		"setgroups"	}, /* 6114 */
	{ 3,	0,	sys_setresuid,		"setresuid"	}, /* 6115 */
	{ 3,	0,	sys_getresuid,		"getresuid"	}, /* 6116 */
	{ 3,	0,	sys_setresgid,		"setresgid"	}, /* 6117 */
	{ 3,	0,	sys_getresgid,		"getresgid"	}, /* 6118 */
	{ 0,	0,	sys_getpgid,		"getpgid"	}, /* 6119 */
	{ 1,	NF,	sys_setfsuid,		"setfsuid"	}, /* 6120 */
	{ 1,	NF,	sys_setfsgid,		"setfsgid"	}, /* 6121 */
	{ 1,	0,	sys_getsid,		"getsid"	}, /* 6122 */
	{ 2,	0,	sys_capget,		"capget"	}, /* 6123 */
	{ 2,	0,	sys_capset,		"capset"	}, /* 6124 */
	{ 2,	TS,	sys_rt_sigpending,	"rt_sigpending"	}, /* 6125 */
	{ 4,	TS,	sys_rt_sigtimedwait,	"rt_sigtimedwait"},/* 6126 */
	{ 3,	TS,	sys_rt_sigqueueinfo,	"rt_sigqueueinfo"},/* 6127 */
	{ 2,	TS,	sys_rt_sigsuspend,	"rt_sigsuspend"	}, /* 6128 */
	{ 2,	TS,	sys_sigaltstack,	"sigaltstack"	}, /* 6129 */
	{ 2,	TF,	sys_utime,		"utime"		}, /* 6130 */
	{ 3,	TF,	sys_mknod,		"mknod"		}, /* 6131 */
	{ 1,	0,	sys_personality,	"personality"	}, /* 6132 */
	{ 2,	0,	sys_ustat,		"ustat"		}, /* 6133 */
	{ 3,	TF,	sys_statfs,		"statfs"	}, /* 6134 */
	{ 3,	TD,	sys_fstatfs,		"fstatfs"	}, /* 6135 */
	{ 5,	0,	sys_sysfs,		"sysfs"		}, /* 6136 */
	{ 2,	0,	sys_getpriority,	"getpriority"	}, /* 6137 */
	{ 3,	0,	sys_setpriority,	"setpriority"	}, /* 6138 */
	{ 2,	0,	sys_sched_setparam,	"sched_setparam"}, /* 6139 */
	{ 2,	0,	sys_sched_getparam,	"sched_getparam"}, /* 6140 */
	{ 3,	0,	sys_sched_setscheduler,	"sched_setscheduler"}, /* 6141 */
	{ 1,	0,	sys_sched_getscheduler,	"sched_getscheduler"}, /* 6142 */
	{ 1,	0,	sys_sched_get_priority_max,"sched_get_priority_max"}, /* 6143 */
	{ 1,	0,	sys_sched_get_priority_min,"sched_get_priority_min"}, /* 6144 */
	{ 2,	0,	sys_sched_rr_get_interval,"sched_rr_get_interval"}, /* 6145 */
	{ 2,	TM,	sys_mlock,		"mlock"		}, /* 6146 */
	{ 2,	TM,	sys_munlock,		"munlock"	}, /* 6147 */
	{ 1,	TM,	sys_mlockall,		"mlockall"	}, /* 6148 */
	{ 0,	TM,	sys_munlockall,		"munlockall"	}, /* 6149 */
	{ 0,	0,	sys_vhangup,		"vhangup"	}, /* 6150 */
	{ 2,	TF,	sys_pivotroot,		"pivot_root"	}, /* 6151 */
	{ 1,	0,	sys_sysctl,		"_sysctl"	}, /* 6152 */
	{ 5,	0,	sys_prctl,		"prctl"		}, /* 6153 */
	{ 1,	0,	sys_adjtimex,		"adjtimex"	}, /* 6154 */
	{ 2,	0,	sys_setrlimit,		"setrlimit"	}, /* 6155 */
	{ 1,	TF,	sys_chroot,		"chroot"	}, /* 6156 */
	{ 0,	0,	sys_sync,		"sync"		}, /* 6157 */
	{ 1,	TF,	sys_acct,		"acct"		}, /* 6158 */
	{ 2,	0,	sys_settimeofday,	"settimeofday"	}, /* 6159 */
	{ 5,	TF,	sys_mount,		"mount"		}, /* 6160 */
	{ 2,	TF,	sys_umount2,		"umount2"	}, /* 6161 */
	{ 2,	TF,	sys_swapon,		"swapon"	}, /* 6162 */
	{ 1,	TF,	sys_swapoff,		"swapoff"	}, /* 6163 */
	{ 4,	0,	sys_reboot,		"reboot"	}, /* 6164 */
	{ 2,	0,	sys_sethostname,	"sethostname"	}, /* 6165 */
	{ 2,	0,	sys_setdomainname,	"setdomainname"	}, /* 6166 */
	{ 2,	0,	sys_create_module,	"create_module"	}, /* 6167 */
	{ 4,	0,	sys_init_module,	"init_module"	}, /* 6168 */
	{ 1,	0,	sys_delete_module,	"delete_module"	}, /* 6169 */
	{ 1,	0,	sys_get_kernel_syms,	"get_kernel_syms"}, /* 6170 */
	{ 5,	0,	sys_query_module,	"query_module"	}, /* 6171 */
	{ 4,	TF,	sys_quotactl,		"quotactl"	}, /* 6172 */
	{ 3,	0,	sys_nfsservctl,		"nfsservctl"	}, /* 6173 */
	{ 5,	TN,	printargs,		"getpmsg"	}, /* 6174 */
	{ 5,	TN,	printargs,		"putpmsg"	}, /* 6175 */
	{ 0,	0,	sys_afs_syscall,	"afs_syscall"	}, /* 6176 */
	{ 0,	0,	printargs,		"reserved177"	}, /* 6177 */
	{ 0,	0,	sys_gettid,		"gettid"	}, /* 6178 */
	{ 3,	TD,	sys_readahead,		"readahead"	}, /* 6179 */
	{ 5,	TF,	sys_setxattr,		"setxattr"	}, /* 6180 */
	{ 5,	TF,	sys_setxattr,		"lsetxattr"	}, /* 6181 */
	{ 5,	TD,	sys_fsetxattr,		"fsetxattr"	}, /* 6182 */
	{ 4,	TF,	sys_getxattr,		"getxattr"	}, /* 6183 */
	{ 4,	TF,	sys_getxattr,		"lgetxattr"	}, /* 6184 */
	{ 4,	TD,	sys_fgetxattr,		"fgetxattr"	}, /* 6185 */
	{ 3,	TF,	sys_listxattr,		"listxattr"	}, /* 6186 */
	{ 3,	TF,	sys_listxattr,		"llistxattr"	}, /* 6187 */
	{ 3,	TD,	sys_flistxattr,		"flistxattr"	}, /* 6188 */
	{ 2,	TF,	sys_removexattr,	"removexattr"	}, /* 6189 */
	{ 2,	TF,	sys_removexattr,	"lremovexattr"	}, /* 6190 */
	{ 2,	TD,	sys_fremovexattr,	"fremovexattr"	}, /* 6191 */
	{ 2,	TS,	sys_kill,		"tkill"		}, /* 6192 */
	{ 1,	0,	sys_time,		"time"		}, /* 6193 */
	{ 6,	0,	sys_futex,		"futex"		}, /* 6194 */
	{ 3,	0,	sys_sched_setaffinity,	"sched_setaffinity"}, /* 6195 */
	{ 3,	0,	sys_sched_getaffinity,	"sched_getaffinity"}, /* 6196 */
	{ 3,	0,	printargs,		"cacheflush"	}, /* 6197 */
	{ 3,	0,	printargs,		"cachectl"	}, /* 6198 */
	{ 4,	0,	sys_sysmips,		"sysmips"	}, /* 6199 */
	{ 2,	0,	sys_io_setup,		"io_setup"	}, /* 6200 */
	{ 1,	0,	sys_io_destroy,		"io_destroy"	}, /* 6201 */
	{ 5,	0,	sys_io_getevents,	"io_getevents"	}, /* 6202 */
	{ 3,	0,	sys_io_submit,		"io_submit"	}, /* 6203 */
	{ 3,	0,	sys_io_cancel,		"io_cancel"	}, /* 6204 */
	{ 1,	TP,	sys_exit,		"exit_group"	}, /* 6205 */
	{ 3,	0,	sys_lookup_dcookie,	"lookup_dcookie"	}, /* 6206 */
	{ 1,	TD,	sys_epoll_create,	"epoll_create"	}, /* 6207 */
	{ 4,	TD,	sys_epoll_ctl,		"epoll_ctl"	}, /* 6208 */
	{ 4,	TD,	sys_epoll_wait,		"epoll_wait"	}, /* 6209 */
	{ 5,	TM,	sys_remap_file_pages,	"remap_file_pages"	}, /* 6210 */
	{ 0,	TS,	sys_rt_sigreturn,	"rt_sigreturn"	}, /* 6211 */
	{ 3,	TD,	sys_fcntl,		"fcntl64"	}, /* 6212 */
	{ 1,	0,	sys_set_tid_address,	"set_tid_address" }, /* 6213 */
	{ 0,	0,	sys_restart_syscall,	"restart_syscall" }, /* 6214 */
	{ 5,	TI,	sys_semtimedop,		"semtimedop"	}, /* 6215 */
	{ 4,	TD,	sys_fadvise64,		"fadvise64"	}, /* 6216 */
	{ 3,	TF,	sys_statfs64,		"statfs64"	}, /* 6217 */
	{ 3,	TD,	sys_fstatfs64,		"fstatfs64"	}, /* 6218 */
	{ 4,	TD|TN,	sys_sendfile64,		"sendfile64"	}, /* 6219 */
	{ 3,	0,	sys_timer_create,	"timer_create"	}, /* 6220 */
	{ 4,	0,	sys_timer_settime,	"timer_settime"	}, /* 6221 */
	{ 2,	0,	sys_timer_gettime,	"timer_gettime"	}, /* 6222 */
	{ 1,	0,	sys_timer_getoverrun,	"timer_getoverrun"	}, /* 6223 */
	{ 1,	0,	sys_timer_delete,	"timer_delete"	}, /* 6224 */
	{ 2,	0,	sys_clock_settime,	"clock_settime"	}, /* 6225 */
	{ 2,	0,	sys_clock_gettime,	"clock_gettime"	}, /* 6226 */
	{ 2,	0,	sys_clock_getres,	"clock_getres"	}, /* 6227 */
	{ 4,	0,	sys_clock_nanosleep,	"clock_nanosleep" }, /* 6228 */
	{ 3,	TS,	sys_tgkill,		"tgkill"	}, /* 6229 */
	{ 2,	TF,	sys_utimes,		"utimes"	}, /* 6230 */
	{ 6,	TM,	sys_mbind,		"mbind"		}, /* 6231 */
	{ 5,	TM,	sys_get_mempolicy,	"get_mempolicy"	}, /* 6232 */
	{ 3,	TM,	sys_set_mempolicy,	"set_mempolicy"	}, /* 6233 */
	{ 4,	0,	sys_mq_open,		"mq_open"	}, /* 6234 */
	{ 1,	0,	sys_mq_unlink,		"mq_unlink"	}, /* 6235 */
	{ 5,	0,	sys_mq_timedsend,	"mq_timedsend"	}, /* 6236 */
	{ 5,	0,	sys_mq_timedreceive,	"mq_timedreceive" }, /* 6237 */
	{ 2,	0,	sys_mq_notify,		"mq_notify"	}, /* 6238 */
	{ 3,	0,	sys_mq_getsetattr,	"mq_getsetattr"	}, /* 6239 */
	{ 5,	0,	sys_vserver,		"vserver"	}, /* 6240 */
	{ 5,	TP,	sys_waitid,		"waitid"	}, /* 6241 */
	[6242] = { },
	{ 5,	0,	sys_add_key,		"add_key"	}, /* 6243 */
	{ 4,	0,	sys_request_key,	"request_key"	}, /* 6244 */
	{ 5,	0,	sys_keyctl,		"keyctl"	}, /* 6245 */
	{ 1,	0,	sys_set_thread_area,	"set_thread_area" }, /* 6246 */
	{ 0,	TD,	sys_inotify_init,	"inotify_init"	}, /* 6247 */
	{ 3,	TD,	sys_inotify_add_watch,	"inotify_add_watch" }, /* 6248 */
	{ 2,	TD,	sys_inotify_rm_watch,	"inotify_rm_watch" }, /* 6249 */
	{ 4,	TM,	sys_migrate_pages,	"migrate_pages"	}, /* 6250 */
	{ 4,	TD|TF,	sys_openat,		"openat"	}, /* 6251 */
	{ 3,	TD|TF,	sys_mkdirat,		"mkdirat"	}, /* 6252 */
	{ 4,	TD|TF,	sys_mknodat,		"mknodat"	}, /* 6253 */
	{ 5,	TD|TF,	sys_fchownat,		"fchownat"	}, /* 6254 */
	{ 3,	TD|TF,	sys_futimesat,		"futimesat"	}, /* 6255 */
	{ 4,	TD|TF,	sys_newfstatat,		"newfstatat"	}, /* 6256 */
	{ 3,	TD|TF,	sys_unlinkat,		"unlinkat"	}, /* 6257 */
	{ 4,	TD|TF,	sys_renameat,		"renameat"	}, /* 6258 */
	{ 5,	TD|TF,	sys_linkat,		"linkat"	}, /* 6259 */
	{ 3,	TD|TF,	sys_symlinkat,		"symlinkat"	}, /* 6260 */
	{ 4,	TD|TF,	sys_readlinkat,		"readlinkat"	}, /* 6261 */
	{ 3,	TD|TF,	sys_fchmodat,		"fchmodat"	}, /* 6262 */
	{ 3,	TD|TF,	sys_faccessat,		"faccessat"	}, /* 6263 */
	{ 6,	TD,	sys_pselect6,		"pselect6"	}, /* 6264 */
	{ 5,	TD,	sys_ppoll,		"ppoll"		}, /* 6265 */
	{ 1,	TP,	sys_unshare,		"unshare"	}, /* 6266 */
	{ 6,	TD,	sys_splice,		"splice"	}, /* 6267 */
	{ 4,	TD,	sys_sync_file_range,	"sync_file_range" }, /* 6268 */
	{ 4,	TD,	sys_tee,		"tee"		}, /* 6269 */
	{ 4,	TD,	sys_vmsplice,		"vmsplice"	}, /* 6270 */
	{ 6,	TM,	printargs,		"move_pages"	}, /* 6271 */
	{ 2,	0,	sys_set_robust_list,	"set_robust_list" }, /* 6272 */
	{ 3,	0,	sys_get_robust_list,	"get_robust_list" }, /* 6273 */
	{ 4,	0,	sys_kexec_load,		"kexec_load"	}, /* 6274 */
	{ 3,	0,	sys_getcpu,		"getcpu"	}, /* 6275 */
	{ 6,	TD,	sys_epoll_pwait,	"epoll_pwait"	}, /* 6276 */
	{ 3,	0,	sys_ioprio_set,		"ioprio_set"	}, /* 6277 */
	{ 2,	0,	sys_ioprio_get,		"ioprio_get"	}, /* 6278 */
	{ 4,	TD|TF,	sys_utimensat,		"utimensat"	}, /* 6279 */
	{ 3,	TD|TS,	sys_signalfd,		"signalfd"	}, /* 6280 */
	{ 4,	TD,	sys_timerfd,		"timerfd"	}, /* 6281 */
	{ 1,	TD,	sys_eventfd,		"eventfd"	}, /* 6282 */
	{ 4,	TD,	sys_fallocate,		"fallocate"	}, /* 6283 */
	{ 2,	TD,	sys_timerfd_create,	"timerfd_create" }, /* 6284 */
	{ 2,	TD,	sys_timerfd_gettime,	"timerfd_gettime" }, /* 6285 */
	{ 4,	TD,	sys_timerfd_settime,	"timerfd_settime" }, /* 6286 */
	{ 4,	TD|TS,	sys_signalfd4,		"signalfd4"	}, /* 6287 */
	{ 2,	TD,	sys_eventfd2,		"eventfd2"	}, /* 6288 */
	{ 1,	TD,	sys_epoll_create1,	"epoll_create1"	}, /* 6289 */
	{ 3,	TD,	sys_dup3,		"dup3"		}, /* 6290 */
	{ 2,	TD,	sys_pipe2,		"pipe2"		}, /* 6291 */
	{ 1,	TD,	sys_inotify_init1,	"inotify_init1"	}, /* 6292 */
	{ 4,	TD,	sys_preadv,		"preadv"	}, /* 6293 */
	{ 4,	TD,	sys_pwritev,		"pwritev"	}, /* 6294 */
	{ 4,	TP|TS,	sys_rt_tgsigqueueinfo,	"rt_tgsigqueueinfo" }, /* 6295 */
	{ 5,	TD,	sys_perf_event_open,	"perf_event_open" }, /* 6296 */
	{ 4,	TN,	sys_accept4,		"accept4"	}, /* 6297 */
	{ 5,	TN,	sys_recvmmsg,		"recvmmsg"	}, /* 6298 */
	{ 3,	TD,	sys_getdents64,		"getdents64"	}, /* 6299 */
	{ 2,	TD,	sys_fanotify_init,	"fanotify_init"	}, /* 6300 */
	{ 5,	TD|TF,	sys_fanotify_mark,	"fanotify_mark"	}, /* 6301 */
	{ 4,	0,	sys_prlimit64,		"prlimit64"	}, /* 6302 */
	{ 5,	TD|TF,	sys_name_to_handle_at,	"name_to_handle_at"}, /* 6303 */
	{ 3,	TD,	sys_open_by_handle_at,	"open_by_handle_at"}, /* 6304 */
	{ 2,	0,	sys_clock_adjtime,	"clock_adjtime"	}, /* 6305 */
	{ 1,	TD,	sys_syncfs,		"syncfs"	}, /* 6306 */
	{ 4,	TN,	sys_sendmmsg,		"sendmmsg"	}, /* 6307 */
	{ 2,	TD,	sys_setns,		"setns"		}, /* 6308 */
	{ 6,	0,	sys_process_vm_readv,	"process_vm_readv"	}, /* 6309 */
	{ 6,	0,	sys_process_vm_writev,	"process_vm_writev"	}, /* 6310 */
	{ 5,	0,	sys_kcmp,		"kcmp"			}, /* 6311 */
	{ 3,	TD,	sys_finit_module,	"finit_module"		}, /* 6312 */
#else
	{ 0,	0,	printargs,		"n32_read"		}, /* 6000 */
	{ 0,	0,	printargs,		"n32_write"		}, /* 6001 */
	{ 0,	0,	printargs,		"n32_open"		}, /* 6002 */
	{ 0,	0,	printargs,		"n32_close"		}, /* 6003 */
	{ 0,	0,	printargs,		"n32_stat"		}, /* 6004 */
	{ 0,	0,	printargs,		"n32_fstat"		}, /* 6005 */
	{ 0,	0,	printargs,		"n32_lstat"		}, /* 6006 */
	{ 0,	0,	printargs,		"n32_poll"		}, /* 6007 */
	{ 0,	0,	printargs,		"n32_lseek"		}, /* 6008 */
	{ 0,	TD|TM,	printargs,		"n32_mmap"		}, /* 6009 */
	{ 0,	TM,	printargs,		"n32_mprotect"		}, /* 6010 */
	{ 0,	TM,	printargs,		"n32_munmap"		}, /* 6011 */
	{ 0,	TM,	printargs,		"n32_brk"		}, /* 6012 */
	{ 0,	0,	printargs,		"n32_rt_sigaction"	}, /* 6013 */
	{ 0,	0,	printargs,		"n32_rt_sigprocmask"	}, /* 6014 */
	{ 0,	0,	printargs,		"n32_ioctl"		}, /* 6015 */
	{ 0,	0,	printargs,		"n32_pread64"		}, /* 6016 */
	{ 0,	0,	printargs,		"n32_pwrite64"		}, /* 6017 */
	{ 0,	0,	printargs,		"n32_readv"		}, /* 6018 */
	{ 0,	0,	printargs,		"n32_writev"		}, /* 6019 */
	{ 0,	0,	printargs,		"n32_access"		}, /* 6020 */
	{ 0,	0,	printargs,		"n32_pipe"		}, /* 6021 */
	{ 0,	0,	printargs,		"n32__newselect"	}, /* 6022 */
	{ 0,	0,	printargs,		"n32_sched_yield"	}, /* 6023 */
	{ 0,	TM,	printargs,		"n32_mremap"		}, /* 6024 */
	{ 0,	TM,	printargs,		"n32_msync"		}, /* 6025 */
	{ 0,	TM,	printargs,		"n32_mincore"		}, /* 6026 */
	{ 0,	TM,	printargs,		"n32_madvise"		}, /* 6027 */
	{ 0,	0,	printargs,		"n32_shmget"		}, /* 6028 */
	{ 0,	0,	printargs,		"n32_shmat"		}, /* 6029 */
	{ 0,	0,	printargs,		"n32_shmctl"		}, /* 6030 */
	{ 0,	0,	printargs,		"n32_dup"		}, /* 6031 */
	{ 0,	0,	printargs,		"n32_dup2"		}, /* 6032 */
	{ 0,	0,	printargs,		"n32_pause"		}, /* 6033 */
	{ 0,	0,	printargs,		"n32_nanosleep"		}, /* 6034 */
	{ 0,	0,	printargs,		"n32_getitimer"		}, /* 6035 */
	{ 0,	0,	printargs,		"n32_setitimer"		}, /* 6036 */
	{ 0,	0,	printargs,		"n32_alarm"		}, /* 6037 */
	{ 0,	0,	printargs,		"n32_getpid"		}, /* 6038 */
	{ 0,	0,	printargs,		"n32_sendfile"		}, /* 6039 */
	{ 0,	0,	printargs,		"n32_socket"		}, /* 6040 */
	{ 0,	0,	printargs,		"n32_connect"		}, /* 6041 */
	{ 0,	0,	printargs,		"n32_accept"		}, /* 6042 */
	{ 0,	0,	printargs,		"n32_sendto"		}, /* 6043 */
	{ 0,	0,	printargs,		"n32_recvfrom"		}, /* 6044 */
	{ 0,	0,	printargs,		"n32_sendmsg"		}, /* 6045 */
	{ 0,	0,	printargs,		"n32_recvmsg"		}, /* 6046 */
	{ 0,	0,	printargs,		"n32_shutdown"		}, /* 6047 */
	{ 0,	0,	printargs,		"n32_bind"		}, /* 6048 */
	{ 0,	0,	printargs,		"n32_listen"		}, /* 6049 */
	{ 0,	0,	printargs,		"n32_getsockname"	}, /* 6050 */
	{ 0,	0,	printargs,		"n32_getpeername"	}, /* 6051 */
	{ 0,	0,	printargs,		"n32_socketpair"	}, /* 6052 */
	{ 0,	0,	printargs,		"n32_setsockopt"	}, /* 6053 */
	{ 0,	0,	printargs,		"n32_getsockopt"	}, /* 6054 */
	{ 0,	0,	printargs,		"n32_clone"		}, /* 6055 */
	{ 0,	0,	printargs,		"n32_fork"		}, /* 6056 */
	{ 0,	0,	printargs,		"n32_execve"		}, /* 6057 */
	{ 0,	0,	printargs,		"n32_exit"		}, /* 6058 */
	{ 0,	0,	printargs,		"n32_wait4"		}, /* 6059 */
	{ 0,	0,	printargs,		"n32_kill"		}, /* 6060 */
	{ 0,	0,	printargs,		"n32_uname"		}, /* 6061 */
	{ 0,	0,	printargs,		"n32_semget"		}, /* 6062 */
	{ 0,	0,	printargs,		"n32_semop"		}, /* 6063 */
	{ 0,	0,	printargs,		"n32_semctl"		}, /* 6064 */
	{ 0,	0,	printargs,		"n32_shmdt"		}, /* 6065 */
	{ 0,	0,	printargs,		"n32_msgget"		}, /* 6066 */
	{ 0,	0,	printargs,		"n32_msgsnd"		}, /* 6067 */
	{ 0,	0,	printargs,		"n32_msgrcv"		}, /* 6068 */
	{ 0,	0,	printargs,		"n32_msgctl"		}, /* 6069 */
	{ 0,	0,	printargs,		"n32_fcntl"		}, /* 6070 */
	{ 0,	0,	printargs,		"n32_flock"		}, /* 6071 */
	{ 0,	0,	printargs,		"n32_fsync"		}, /* 6072 */
	{ 0,	0,	printargs,		"n32_fdatasync"		}, /* 6073 */
	{ 0,	0,	printargs,		"n32_truncate"		}, /* 6074 */
	{ 0,	0,	printargs,		"n32_ftruncate"		}, /* 6075 */
	{ 0,	0,	printargs,		"n32_getdents"		}, /* 6076 */
	{ 0,	0,	printargs,		"n32_getcwd"		}, /* 6077 */
	{ 0,	0,	printargs,		"n32_chdir"		}, /* 6078 */
	{ 0,	0,	printargs,		"n32_fchdir"		}, /* 6079 */
	{ 0,	0,	printargs,		"n32_rename"		}, /* 6080 */
	{ 0,	0,	printargs,		"n32_mkdir"		}, /* 6081 */
	{ 0,	0,	printargs,		"n32_rmdir"		}, /* 6082 */
	{ 0,	0,	printargs,		"n32_creat"		}, /* 6083 */
	{ 0,	0,	printargs,		"n32_link"		}, /* 6084 */
	{ 0,	0,	printargs,		"n32_unlink"		}, /* 6085 */
	{ 0,	0,	printargs,		"n32_symlink"		}, /* 6086 */
	{ 0,	0,	printargs,		"n32_readlink"		}, /* 6087 */
	{ 0,	0,	printargs,		"n32_chmod"		}, /* 6088 */
	{ 0,	0,	printargs,		"n32_fchmod"		}, /* 6089 */
	{ 0,	0,	printargs,		"n32_chown"		}, /* 6090 */
	{ 0,	0,	printargs,		"n32_fchown"		}, /* 6091 */
	{ 0,	0,	printargs,		"n32_lchown"		}, /* 6092 */
	{ 0,	0,	printargs,		"n32_umask"		}, /* 6093 */
	{ 0,	0,	printargs,		"n32_gettimeofday"	}, /* 6094 */
	{ 0,	0,	printargs,		"n32_getrlimit"		}, /* 6095 */
	{ 0,	0,	printargs,		"n32_getrusage"		}, /* 6096 */
	{ 0,	0,	printargs,		"n32_sysinfo"		}, /* 6097 */
	{ 0,	0,	printargs,		"n32_times"		}, /* 6098 */
	{ 0,	0,	printargs,		"n32_ptrace"		}, /* 6099 */
	{ 0,	0,	printargs,		"n32_getuid"		}, /* 6100 */
	{ 0,	0,	printargs,		"n32_syslog"		}, /* 6101 */
	{ 0,	0,	printargs,		"n32_getgid"		}, /* 6102 */
	{ 0,	0,	printargs,		"n32_setuid"		}, /* 6103 */
	{ 0,	0,	printargs,		"n32_setgid"		}, /* 6104 */
	{ 0,	0,	printargs,		"n32_geteuid"		}, /* 6105 */
	{ 0,	0,	printargs,		"n32_getegid"		}, /* 6106 */
	{ 0,	0,	printargs,		"n32_setpgid"		}, /* 6107 */
	{ 0,	0,	printargs,		"n32_getppid"		}, /* 6108 */
	{ 0,	0,	printargs,		"n32_getpgrp"		}, /* 6109 */
	{ 0,	0,	printargs,		"n32_setsid"		}, /* 6110 */
	{ 0,	0,	printargs,		"n32_setreuid"		}, /* 6111 */
	{ 0,	0,	printargs,		"n32_setregid"		}, /* 6112 */
	{ 0,	0,	printargs,		"n32_getgroups"		}, /* 6113 */
	{ 0,	0,	printargs,		"n32_setgroups"		}, /* 6114 */
	{ 0,	0,	printargs,		"n32_setresuid"		}, /* 6115 */
	{ 0,	0,	printargs,		"n32_getresuid"		}, /* 6116 */
	{ 0,	0,	printargs,		"n32_setresgid"		}, /* 6117 */
	{ 0,	0,	printargs,		"n32_getresgid"		}, /* 6118 */
	{ 0,	0,	printargs,		"n32_getpgid"		}, /* 6119 */
	{ 0,	0,	printargs,		"n32_setfsuid"		}, /* 6120 */
	{ 0,	0,	printargs,		"n32_setfsgid"		}, /* 6121 */
	{ 0,	0,	printargs,		"n32_getsid"		}, /* 6122 */
	{ 0,	0,	printargs,		"n32_capget"		}, /* 6123 */
	{ 0,	0,	printargs,		"n32_capset"		}, /* 6124 */
	{ 0,	0,	printargs,		"n32_rt_sigpending"	}, /* 6125 */
	{ 0,	0,	printargs,		"n32_rt_sigtimedwait"	}, /* 6126 */
	{ 0,	0,	printargs,		"n32_rt_sigqueueinfo"	}, /* 6127 */
	{ 0,	0,	printargs,		"n32_rt_sigsuspend"	}, /* 6128 */
	{ 0,	0,	printargs,		"n32_sigaltstack"	}, /* 6129 */
	{ 0,	0,	printargs,		"n32_utime"		}, /* 6130 */
	{ 0,	0,	printargs,		"n32_mknod"		}, /* 6131 */
	{ 0,	0,	printargs,		"n32_personality"	}, /* 6132 */
	{ 0,	0,	printargs,		"n32_ustat"		}, /* 6133 */
	{ 0,	0,	printargs,		"n32_statfs"		}, /* 6134 */
	{ 0,	0,	printargs,		"n32_fstatfs"		}, /* 6135 */
	{ 0,	0,	printargs,		"n32_sysfs"		}, /* 6136 */
	{ 0,	0,	printargs,		"n32_getpriority"	}, /* 6137 */
	{ 0,	0,	printargs,		"n32_setpriority"	}, /* 6138 */
	{ 0,	0,	printargs,		"n32_sched_setparam"	}, /* 6139 */
	{ 0,	0,	printargs,		"n32_sched_getparam"	}, /* 6140 */
	{ 0,	0,	printargs,		"n32_sched_setscheduler"}, /* 6141 */
	{ 0,	0,	printargs,		"n32_sched_getscheduler"}, /* 6142 */
	{ 0,	0,	printargs,		"n32_sched_get_priority_max"}, /* 6143 */
	{ 0,	0,	printargs,		"n32_sched_get_priority_min"}, /* 6144 */
	{ 0,	0,	printargs,		"n32_sched_rr_get_interval"}, /* 6145 */
	{ 0,	TM,	printargs,		"n32_mlock"		}, /* 6146 */
	{ 0,	TM,	printargs,		"n32_munlock"		}, /* 6147 */
	{ 0,	TM,	printargs,		"n32_mlockall"		}, /* 6148 */
	{ 0,	TM,	printargs,		"n32_munlockall"	}, /* 6149 */
	{ 0,	0,	printargs,		"n32_vhangup"		}, /* 6150 */
	{ 0,	0,	printargs,		"n32_pivot_root"	}, /* 6151 */
	{ 0,	0,	printargs,		"n32__sysctl"		}, /* 6152 */
	{ 0,	0,	printargs,		"n32_prctl"		}, /* 6153 */
	{ 0,	0,	printargs,		"n32_adjtimex"		}, /* 6154 */
	{ 0,	0,	printargs,		"n32_setrlimit"		}, /* 6155 */
	{ 0,	0,	printargs,		"n32_chroot"		}, /* 6156 */
	{ 0,	0,	printargs,		"n32_sync"		}, /* 6157 */
	{ 0,	0,	printargs,		"n32_acct"		}, /* 6158 */
	{ 0,	0,	printargs,		"n32_settimeofday"	}, /* 6159 */
	{ 0,	0,	printargs,		"n32_mount"		}, /* 6160 */
	{ 0,	0,	printargs,		"n32_umount2"		}, /* 6161 */
	{ 0,	0,	printargs,		"n32_swapon"		}, /* 6162 */
	{ 0,	0,	printargs,		"n32_swapoff"		}, /* 6163 */
	{ 0,	0,	printargs,		"n32_reboot"		}, /* 6164 */
	{ 0,	0,	printargs,		"n32_sethostname"	}, /* 6165 */
	{ 0,	0,	printargs,		"n32_setdomainname"	}, /* 6166 */
	{ 0,	0,	printargs,		"n32_create_module"	}, /* 6167 */
	{ 0,	0,	printargs,		"n32_init_module"	}, /* 6168 */
	{ 0,	0,	printargs,		"n32_delete_module"	}, /* 6169 */
	{ 0,	0,	printargs,		"n32_get_kernel_syms"	}, /* 6170 */
	{ 0,	0,	printargs,		"n32_query_module"	}, /* 6171 */
	{ 0,	TF,	printargs,		"n32_quotactl"		}, /* 6172 */
	{ 0,	0,	printargs,		"n32_nfsservctl"	}, /* 6173 */
	{ 0,	0,	printargs,		"n32_getpmsg"		}, /* 6174 */
	{ 0,	0,	printargs,		"n32_putpmsg"		}, /* 6175 */
	{ 0,	0,	printargs,		"n32_afs_syscall"	}, /* 6176 */
	{ 0,	0,	printargs,		"n32_reserved177"	}, /* 6177 */
	{ 0,	0,	printargs,		"n32_gettid"		}, /* 6178 */
	{ 0,	0,	printargs,		"n32_readahead"		}, /* 6179 */
	{ 0,	0,	printargs,		"n32_setxattr"		}, /* 6180 */
	{ 0,	0,	printargs,		"n32_lsetxattr"		}, /* 6181 */
	{ 0,	0,	printargs,		"n32_fsetxattr"		}, /* 6182 */
	{ 0,	0,	printargs,		"n32_getxattr"		}, /* 6183 */
	{ 0,	0,	printargs,		"n32_lgetxattr"		}, /* 6184 */
	{ 0,	0,	printargs,		"n32_fgetxattr"		}, /* 6185 */
	{ 0,	0,	printargs,		"n32_listxattr"		}, /* 6186 */
	{ 0,	0,	printargs,		"n32_llistxattr"	}, /* 6187 */
	{ 0,	0,	printargs,		"n32_flistxattr"	}, /* 6188 */
	{ 0,	0,	printargs,		"n32_removexattr"	}, /* 6189 */
	{ 0,	0,	printargs,		"n32_lremovexattr"	}, /* 6190 */
	{ 0,	0,	printargs,		"n32_fremovexattr"	}, /* 6191 */
	{ 0,	0,	printargs,		"n32_tkill"		}, /* 6192 */
	{ 0,	0,	printargs,		"n32_time"		}, /* 6193 */
	{ 0,	0,	printargs,		"n32_futex"		}, /* 6194 */
	{ 0,	0,	printargs,		"n32_sched_setaffinity"	}, /* 6195 */
	{ 0,	0,	printargs,		"n32_sched_getaffinity"	}, /* 6196 */
	{ 0,	0,	printargs,		"n32_cacheflush"	}, /* 6197 */
	{ 0,	0,	printargs,		"n32_cachectl"		}, /* 6198 */
	{ 0,	0,	printargs,		"n32_sysmips"		}, /* 6199 */
	{ 0,	0,	printargs,		"n32_io_setup"		}, /* 6200 */
	{ 0,	0,	printargs,		"n32_io_destroy"	}, /* 6201 */
	{ 0,	0,	printargs,		"n32_io_getevents"	}, /* 6202 */
	{ 0,	0,	printargs,		"n32_io_submit"		}, /* 6203 */
	{ 0,	0,	printargs,		"n32_io_cancel"		}, /* 6204 */
	{ 1,	TP,	printargs,		"n32_exit_group"	}, /* 6205 */
	{ 0,	0,	printargs,		"n32_lookup_dcookie"	}, /* 6206 */
	{ 0,	0,	printargs,		"n32_epoll_create"	}, /* 6207 */
	{ 0,	0,	printargs,		"n32_epoll_ctl"		}, /* 6208 */
	{ 0,	0,	printargs,		"n32_epoll_wait"	}, /* 6209 */
	{ 0,	TM,	printargs,		"n32_remap_file_pages"	}, /* 6210 */
	{ 0,	0,	printargs,		"n32_rt_sigreturn"	}, /* 6211 */
	{ 0,	0,	printargs,		"n32_fcntl64"		}, /* 6212 */
	{ 0,	0,	printargs,		"n32_set_tid_address"	}, /* 6213 */
	{ 0,	0,	printargs,		"n32_restart_syscall"	}, /* 6214 */
	{ 0,	0,	printargs,		"n32_semtimedop"	}, /* 6215 */
	{ 0,	0,	printargs,		"n32_fadvise64"		}, /* 6216 */
	{ 0,	0,	printargs,		"n32_statfs64"		}, /* 6217 */
	{ 0,	0,	printargs,		"n32_fstatfs64"		}, /* 6218 */
	{ 0,	0,	printargs,		"n32_sendfile64"	}, /* 6219 */
	{ 3,	0,	printargs,		"n32_timer_create"	}, /* 6220 */
	{ 4,	0,	printargs,		"n32_timer_settime"	}, /* 6221 */
	{ 2,	0,	printargs,		"n32_timer_gettime"	}, /* 6222 */
	{ 1,	0,	printargs,		"n32_timer_getoverrun"	}, /* 6223 */
	{ 1,	0,	printargs,		"n32_timer_delete"	}, /* 6224 */
	{ 2,	0,	printargs,		"n32_clock_settime"	}, /* 6225 */
	{ 2,	0,	printargs,		"n32_clock_gettime"	}, /* 6226 */
	{ 2,	0,	printargs,		"n32_clock_getres"	}, /* 6227 */
	{ 4,	0,	printargs,		"n32_clock_nanosleep"	}, /* 6228 */
	{ 3,	0,	printargs,		"n32_tgkill"		}, /* 6229 */
	{ 2,	0,	printargs,		"n32_utimes"		}, /* 6230 */
	{ 6,	TM,	printargs,		"n32_mbind"		}, /* 6231 */
	{ 5,	TM,	printargs,		"n32_get_mempolicy"	}, /* 6232 */
	{ 3,	TM,	printargs,		"n32_set_mempolicy"	}, /* 6233 */
	{ 4,	0,	printargs,		"n32_mq_open"		}, /* 6234 */
	{ 1,	0,	printargs,		"n32_mq_unlink"		}, /* 6235 */
	{ 5,	0,	printargs,		"n32_mq_timedsend"	}, /* 6236 */
	{ 5,	0,	printargs,		"n32_mq_timedreceive"	}, /* 6237 */
	{ 2,	0,	printargs,		"n32_mq_notify"		}, /* 6238 */
	{ 3,	0,	printargs,		"n32_mq_getsetattr"	}, /* 6239 */
	{ 5,	0,	printargs,		"n32_vserver"		}, /* 6240 */
	{ 5,	TP,	printargs,		"n32_waitid"		}, /* 6241 */
	{ 0,	0,	printargs,		"n32_SYS_6242"		}, /* 6242 */
	{ 5,	0,	printargs,		"n32_add_key"		}, /* 6243 */
	{ 4,	0,	printargs,		"n32_request_key"	}, /* 6244 */
	{ 5,	0,	printargs,		"n32_keyctl"		}, /* 6245 */
	{ 1,	0,	printargs,		"n32_set_thread_area"	}, /* 6246 */
	{ 0,	TD,	printargs,		"n32_inotify_init"	}, /* 6247 */
	{ 3,	TD,	printargs,		"n32_inotify_add_watch" }, /* 6248 */
	{ 2,	TD,	printargs,		"n32_inotify_rm_watch"	}, /* 6249 */
	{ 4,	TM,	printargs,		"n32_migrate_pages"	}, /* 6250 */
	{ 4,	TD|TF,	printargs,		"n32_openat"		}, /* 6251 */
	{ 3,	TD|TF,	printargs,		"n32_mkdirat"		}, /* 6252 */
	{ 4,	TD|TF,	printargs,		"n32_mknodat"		}, /* 6253 */
	{ 5,	TD|TF,	printargs,		"n32_fchownat"		}, /* 6254 */
	{ 3,	TD|TF,	printargs,		"n32_futimesat"		}, /* 6255 */
	{ 4,	TD|TF,	printargs,		"n32_newfstatat"	}, /* 6256 */
	{ 3,	TD|TF,	printargs,		"n32_unlinkat"		}, /* 6257 */
	{ 4,	TD|TF,	printargs,		"n32_renameat"		}, /* 6258 */
	{ 5,	TD|TF,	printargs,		"n32_linkat"		}, /* 6259 */
	{ 3,	TD|TF,	printargs,		"n32_symlinkat"		}, /* 6260 */
	{ 4,	TD|TF,	printargs,		"n32_readlinkat"	}, /* 6261 */
	{ 3,	TD|TF,	printargs,		"n32_fchmodat"		}, /* 6262 */
	{ 3,	TD|TF,	printargs,		"n32_faccessat"		}, /* 6263 */
	{ 6,	TD,	printargs,		"n32_pselect6"		}, /* 6264 */
	{ 5,	TD,	printargs,		"n32_ppoll"		}, /* 6265 */
	{ 1,	TP,	printargs,		"n32_unshare"		}, /* 6266 */
	{ 6,	TD,	printargs,		"n32_splice"		}, /* 6267 */
	{ 4,	TD,	printargs,		"n32_sync_file_range"	}, /* 6268 */
	{ 4,	TD,	printargs,		"n32_tee"		}, /* 6269 */
	{ 4,	TD,	printargs,		"n32_vmsplice"		}, /* 6270 */
	{ 6,	TM,	printargs,		"n32_move_pages"	}, /* 6271 */
	{ 2,	0,	printargs,		"n32_set_robust_list"	}, /* 6272 */
	{ 3,	0,	printargs,		"n32_get_robust_list"	}, /* 6273 */
	{ 5,	0,	printargs,		"n32_kexec_load"	}, /* 6274 */
	{ 3,	0,	printargs,		"n32_getcpu"		}, /* 6275 */
	{ 5,	TD,	printargs,		"n32_epoll_pwait"	}, /* 6276 */
	{ 3,	0,	printargs,		"n32_ioprio_set"	}, /* 6277 */
	{ 2,	0,	printargs,		"n32_ioprio_get"	}, /* 6278 */
	{ 4,	TD|TF,	printargs,		"n32_utimensat"		}, /* 6279 */
	{ 3,	TD|TS,	printargs,		"n32_signalfd"		}, /* 6280 */
	{ 4,	TD,	printargs,		"n32_timerfd"		}, /* 6281 */
	{ 1,	TD,	printargs,		"n32_eventfd"		}, /* 6282 */
	{ 6,	TD,	printargs,		"n32_fallocate"		}, /* 6283 */
	{ 2,	TD,	printargs,		"n32_timerfd_create"	}, /* 6284 */
	{ 2,	TD,	printargs,		"n32_timerfd_gettime"	}, /* 6285 */
	{ 4,	TD,	printargs,		"n32_timerfd_settime"	}, /* 6286 */
	{ 4,	TD|TS,	printargs,		"n32_signalfd4"		}, /* 6287 */
	{ 2,	TD,	printargs,		"n32_eventfd2"		}, /* 6288 */
	{ 1,	TD,	printargs,		"n32_epoll_create1"	}, /* 6289 */
	{ 3,	TD,	printargs,		"n32_dup3"		}, /* 6290 */
	{ 2,	TD,	printargs,		"n32_pipe2"		}, /* 6291 */
	{ 1,	TD,	printargs,		"n32_inotify_init1"	}, /* 6292 */
	{ 5,	TD,	printargs,		"n32_preadv"		}, /* 6293 */
	{ 5,	TD,	printargs,		"n32_pwritev"		}, /* 6294 */
	{ 4,	TP|TS,	printargs,		"n32_rt_tgsigqueueinfo" }, /* 6295 */
	{ 5,	TD,	printargs,		"n32_perf_event_open"	}, /* 6296 */
	{ 4,	TN,	printargs,		"n32_accept4"		}, /* 6297 */
	{ 5,	TN,	printargs,		"n32_recvmmsg"		}, /* 6298 */
	{ 3,	TD,	printargs,		"n32_getdents64"	}, /* 6299 */
	{ 2,	0,	printargs,		"n32_fanotify_init"	}, /* 6300 */
	{ 5,	0,	printargs,		"n32_fanotify_mark"	}, /* 6301 */
	{ 4,	0,	printargs,		"n32_prlimit64"		}, /* 6302 */
	{ 5,	TD|TF,	printargs,		"n32_name_to_handle_at"	}, /* 6303 */
	{ 3,	TD,	printargs,		"n32_open_by_handle_at"	}, /* 6304 */
	{ 2,	0,	printargs,		"n32_clock_adjtime"	}, /* 6305 */
	{ 1,	TD,	printargs,		"n32_syncfs"		}, /* 6306 */
	{ 4,	TN,	printargs,		"n32_sendmmsg"		}, /* 6307 */
	{ 2,	TD,	printargs,		"n32_setns"		}, /* 6308 */
	{ 6,	0,	printargs,		"n32_process_vm_readv"	}, /* 6309 */
	{ 6,	0,	printargs,		"n32_process_vm_writev"	}, /* 6310 */
	{ 5,	0,	printargs,		"n32_kcmp"		}, /* 6311 */
	{ 3,	TD,	printargs,		"n32_finit_module"	}, /* 6312 */
#endif
