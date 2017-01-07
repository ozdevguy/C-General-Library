# 1 "json_test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "json_test.c"
# 1 "../lib/json.h" 1
# 25 "../lib/json.h"
# 1 "../lib/stack.h" 1
# 25 "../lib/stack.h"
# 1 "../lib/foundation.h" 1
# 33 "../lib/foundation.h"
# 1 "../lib/config/config.h" 1
# 34 "../lib/foundation.h" 2




# 1 "../lib/sys_include.h" 1
# 24 "../lib/sys_include.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 25 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/unistd.h" 2 3 4


# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 217 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 218 "/usr/include/unistd.h" 2 3 4


typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 227 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 700 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 756 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 969 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4

# 25 "../lib/sys_include.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 26 "../lib/sys_include.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 27 "../lib/sys_include.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 341 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 396 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 426 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 444 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 488 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 516 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 533 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 556 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 643 "/usr/include/string.h" 3 4

# 28 "../lib/sys_include.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 2 3 4
# 29 "../lib/sys_include.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdbool.h" 1 3 4
# 30 "../lib/sys_include.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 89 "/usr/include/math.h" 2 3 4
# 133 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 134 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
extern int signgam;
# 190 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 302 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 327 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 489 "/usr/include/math.h" 3 4

# 31 "../lib/sys_include.h" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 35 "/usr/include/sched.h" 2 3 4
# 43 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };


# 95 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4








struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 44 "/usr/include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 126 "/usr/include/sched.h" 3 4

# 24 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
# 430 "/usr/include/time.h" 3 4

# 25 "/usr/include/pthread.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL





};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 116 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 157 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 192 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 230 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);
# 273 "/usr/include/pthread.h" 3 4
extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 431 "/usr/include/pthread.h" 3 4
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));
# 496 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 508 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 542 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 682 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
# 694 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
# 735 "/usr/include/pthread.h" 3 4
extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 808 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1002 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1046 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1113 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 1147 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));
# 1161 "/usr/include/pthread.h" 3 4

# 31 "../lib/sys_include.h" 2
# 39 "../lib/foundation.h" 2
# 82 "../lib/foundation.h"
# 1 "../lib/types/std_types.h" 1
# 24 "../lib/types/std_types.h"
enum{TYPE_INT, TYPE_UINT, TYPE_LONG, TYPE_ULONG, TYPE_FLOAT, TYPE_DOUBLE, TYPE_CHAR, TYPE_BOOL, TYPE_BYTE, TYPE_UTF8, TYPE_STRING};

typedef unsigned char byte;
# 83 "../lib/foundation.h" 2
# 92 "../lib/foundation.h"
# 1 "../lib/global/environment.h" 1
# 24 "../lib/global/environment.h"
# 1 "../lib/global/std_lib_env.c" 1
# 24 "../lib/global/std_lib_env.c"
void* _std_calloc(size_t, size_t);
void _std_free(void*);


void int_memory_manager_init();

typedef struct standard_library_global standard_library_global;
typedef struct standard_library_global genlib_global;

typedef struct standard_library_context standard_library_context;
typedef struct standard_library_context genlib_context;

typedef struct standard_library_global_config standard_library_global_config;
typedef struct standard_library_global_config genlib_config;

struct standard_library_global{


 _Bool initialized;


 _Bool heap_management_enabled;


 size_t ser_start;


 size_t ser_size;


 void* memory;


 standard_library_context* ctx;

};

struct standard_library_context{


 uint32_t instance_id;


 void* data;


 void* (*memory_allocator)(size_t, standard_library_context*);


 _Bool (*memory_dealloc)(void*, standard_library_context*);


 void* (*logger)(byte*, size_t, uint8_t, standard_library_context*);


 _Bool (*create_thread)(void*(void*));


 void (*operation_failure)(uint8_t, standard_library_context*);

};

struct standard_library_global_config{


 size_t ser_size;


 size_t ser_start;

};




standard_library_global def_lib_global_context;


standard_library_global* lib_global_context;





void _lib_sync(standard_library_global* gctx){

 if(!gctx)
  return;

 lib_global_context = gctx;

}


void _lib_init(){

 def_lib_global_context.heap_management_enabled = 0;
 def_lib_global_context.initialized = 1;
 lib_global_context = &def_lib_global_context;

}


void _lib_init_managed(standard_library_global_config* config){

 def_lib_global_context.heap_management_enabled = 1;
 def_lib_global_context.initialized = 1;
 lib_global_context = &def_lib_global_context;

 if(config){

  lib_global_context->ser_start = config->ser_start;
  lib_global_context->ser_size = config->ser_size;

 }
 else{

  lib_global_context->ser_start = 0x2800000;
  lib_global_context->ser_size = 0x1000000;

 }


 int_memory_manager_init();

}


void _lib_set_default_ctx(standard_library_context* ctx){

 lib_global_context->ctx = ctx;

}


inline standard_library_context* _lib_default_ctx(){

 return lib_global_context->ctx;

}


void* int_std_calloc_bridge(size_t size, standard_library_context* ctx){

 void* ptr = _std_calloc(size, 1);

 if(!ptr)
  ctx->operation_failure(1, ctx);

 return ptr;

}

_Bool int_std_free_bridge(void* ptr, standard_library_context* ctx){

 _std_free(ptr);
 return 1;

}

void int_operation_failure(uint8_t type, standard_library_context* ctx){

 if(type == 1)
  printf("[LOG] C General Library | The process has been killed due to a memory allocation failure.\n");

 else if(type == 2)
  printf("[LOG] C General Library | The process has been killed due to a memory release failure.\n");

 else
  printf("[LOG] C General Library | The process has been killed due to a general failure.\n");

 exit(0);

}

void* int_std_logger(byte* data, size_t length, uint8_t type, standard_library_context* ctx){

 printf("[LOG] %s\n", (char*)data);

 return 0;

}

void _std_lib_environment_min_setup(standard_library_context* ctx, uint32_t instance_id){

 ctx->instance_id = instance_id;
 ctx->memory_allocator = 0;
 ctx->memory_dealloc = 0;
 ctx->logger = 0;

}

void _std_lib_environment_set_memory_allocator(standard_library_context* ctx, void* (*memory_allocator)(size_t, standard_library_context*)){

 ctx->memory_allocator = memory_allocator;

}

void _std_lib_environment_set_memory_deallocator(standard_library_context* ctx, _Bool (*memory_dealloc)(void*, standard_library_context*)){

 ctx->memory_dealloc = memory_dealloc;

}

void _std_lib_environment_set_logger(standard_library_context* ctx, void* (*logger)(byte*, size_t, uint8_t, standard_library_context*)){

 ctx->logger = logger;

}




standard_library_context* _ctx_init(){

 standard_library_context* ctx;

 if(!lib_global_context->initialized)
  return 0;

 ctx = _std_calloc(sizeof(standard_library_context), 1);

 ctx->instance_id = 0;
 ctx->memory_allocator = int_std_calloc_bridge;
 ctx->memory_dealloc = int_std_free_bridge;
 ctx->logger = int_std_logger;
 ctx->operation_failure = int_operation_failure;

 return ctx;

}


void _ctx_delete(standard_library_context* ctx){

 if(!ctx)
  return;

 free(ctx);

}
# 25 "../lib/global/environment.h" 2
# 93 "../lib/foundation.h" 2


# 1 "../lib/mem_glibc.h" 1
# 24 "../lib/mem_glibc.h"
# 1 "../lib/mem/mem_glibc.c" 1
# 24 "../lib/mem/mem_glibc.c"
typedef struct standard_library_memory_manager standard_library_memory_manager;
typedef struct free_block free_block;
typedef struct mem_serialization mem_serialization;


struct free_block{


 void* address;


 size_t size;


 free_block* next;

};

struct mem_serialization{


};

struct standard_library_memory_manager{


 _Bool serializtion;


 free_block* block_128;


 free_block* block_256;


 free_block* block_512;


 free_block* block_1k;


 free_block* block_4k;


 free_block* block_8k;


 free_block* block_16k;


 free_block* block_32k;


 free_block* block_64k;


 free_block* block_128k;


 free_block* block_256k;


 free_block* block_512k;


 free_block* block_1m;


 free_block* block_2m;


 free_block* block_3m;


 free_block* block_4m;


 free_block* block_8m;


 free_block* block_12m;


 free_block* block_16m;


 free_block* block_24m;


 free_block* block_32m;


 free_block* block_40m;


 free_block* block_48m;


 free_block* block_super;

};



inline _Bool _std_managed_heap_specs(size_t ser_pool_addr, size_t ser_pool_size){
# 140 "../lib/mem/mem_glibc.c"
}


inline void _std_managed_heap_init(){
# 171 "../lib/mem/mem_glibc.c"
}

void int_memory_manager_init(){


}



inline void* _std_malloc(size_t allocation_size){


 if(!lib_global_context->heap_management_enabled)
  return calloc(allocation_size, 1);



 return 0;

}


inline void* _std_calloc(size_t ntimes, size_t size){


 if(!lib_global_context->heap_management_enabled)
  return calloc(size, ntimes);

 return 0;

}


inline void _std_free(void* ptr){


 if(!lib_global_context->heap_management_enabled)
  return free(ptr);

}
# 24 "../lib/mem_glibc.h" 2
# 96 "../lib/foundation.h" 2
# 105 "../lib/foundation.h"
# 1 "../lib/mem/memory.c" 1
# 23 "../lib/mem/memory.c"
void* allocate(standard_library_context* ctx, size_t size){

 return ctx->memory_allocator(size, ctx);

}

_Bool destroy(standard_library_context* ctx, void* ptr){

 return ctx->memory_dealloc(ptr, ctx);

}
# 106 "../lib/foundation.h" 2







# 1 "../lib/log/log.h" 1
# 24 "../lib/log/log.h"
# 1 "../lib/log/log.c" 1
# 24 "../lib/log/log.c"
enum {LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_FATAL, LOG_PANIC};

void _log_warning(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_WARNING, ctx);

}

void _log_error(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_ERROR, ctx);

}

void _log_fatal(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_FATAL, ctx);

}

void _log_panic(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_PANIC, ctx);

}

void _log_info(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_INFO, ctx);

}
# 24 "../lib/log/log.h" 2
# 114 "../lib/foundation.h" 2
# 26 "../lib/stack.h" 2





# 1 "../lib/containers/stack/stack.h" 1
# 26 "../lib/containers/stack/stack.h"
typedef struct stack stack;
typedef struct stack_item stack_item;




stack* _stack_new(standard_library_context*, size_t);


void _stack_reset(stack*);


void _stack_delete(stack*);


void _stack_delete_all(stack*, void (void*));


void _stack_push(stack*, void*);


void* _stack_pop(stack*);


void* _stack_peek(stack*);



# 1 "../lib/containers/stack/stack_structs.c" 1
# 25 "../lib/containers/stack/stack_structs.c"
struct stack{


 standard_library_context* ctx;


 byte** entries;


 size_t size;


 size_t top;

};
# 55 "../lib/containers/stack/stack.h" 2
# 1 "../lib/containers/stack/stack.c" 1
# 31 "../lib/containers/stack/stack.c"
static void int_stack_resize(stack* st){

 size_t new_size = st->size * 2, i;

 byte** entries = allocate(st->ctx, (sizeof(size_t) * new_size));

 for(i = 1; i < st->size; i++)
  entries[i] = st->entries[i];

 destroy(st->ctx, st->entries);

 st->entries = entries;
 st->size = new_size;
}

void _stack_delete(stack* st){

 if(!st)
  return;

 destroy(st->ctx, st->entries);
 destroy(st->ctx, st);

}

void _stack_delete_all(stack* st, void (*dealloc)(void*)){

 size_t i;

 if(!st)
  return;

 for(i = 0; i < st->top; i++){

  dealloc(st->entries[i]);

 }

 _stack_delete(st);

}

stack* _stack_new(standard_library_context* ctx, size_t start_size){

 stack* st = allocate(ctx, sizeof(stack));
 st->entries = allocate(ctx, (sizeof(size_t) * start_size));
 st->ctx = ctx;
 st->size = start_size;

 return st;

}

void _stack_reset(stack* st){

 if(!st)
  return;

 destroy(st->ctx, st->entries);
 st->entries = allocate(st->ctx, (sizeof(size_t) * st->size));
 st->top = 0;

}

void _stack_push(stack* st, void* data){

 if(!st)
  return;

 if(st->top == st->size - 1)
  int_stack_resize(st);

 st->top++;
 st->entries[st->top] = data;

}

void* _stack_pop(stack* st){

 if(!st)
  return 0;

 if(!st->top)
  return 0;

 return (void*)(st->entries[st->top--]);

}

void* _stack_peek(stack* st){

 if(!st)
  return 0;

 if(!st->top)
  return 0;

 return (void*)(st->entries[st->top]);


}
# 56 "../lib/containers/stack/stack.h" 2
# 32 "../lib/stack.h" 2
# 26 "../lib/json.h" 2


# 1 "../lib/hashmap.h" 1
# 24 "../lib/hashmap.h"
# 1 "../lib/string.h" 1
# 25 "../lib/string.h"
# 1 "../lib/utf8.h" 1
# 31 "../lib/utf8.h"
# 1 "../lib/types/utf8/utf8.h" 1
# 26 "../lib/types/utf8/utf8.h"
typedef struct utf8_char utf8_char;



utf8_char _utf8_fbytes(byte*);

size_t _utf8_ptr_fbytes(utf8_char*, byte*);

_Bool _utf8_compare(utf8_char*, utf8_char*, _Bool);

_Bool _utf8_compare_ci(utf8_char*, utf8_char*);

utf8_char _utf8_fint(uint32_t);

void _utf8_upper(utf8_char*);

void _utf8_lower(utf8_char*);

unsigned int _utf8_lang(utf8_char*);



# 1 "../lib/types/utf8/utf8_structs.c" 1
# 25 "../lib/types/utf8/utf8_structs.c"
struct utf8_char{

 byte data[5];

 uint8_t size;

 uint32_t value;

};
# 49 "../lib/types/utf8/utf8.h" 2
# 1 "../lib/types/utf8/utf8.c" 1
# 25 "../lib/types/utf8/utf8.c"
static uint8_t int_utf8_sz(byte b0){

 byte b = (b0 & 128);

 if(!b)
  return 1;

 b = ((b0 & 0xE0) ^ 0xC0);

 if(!b)
  return 2;

 b = ((b0 & 0xF0) ^ 0xE0);

 if(!b)
  return 3;

 return 4;

}

static void int_utf8_pad(utf8_char* unichar){

 uint8_t i;


 for(i = unichar->size; i < 5; i++)
  unichar->data[i] = 0;
}


utf8_char _utf8_fbytes(byte* data){

 int8_t size, i;
 uint32_t modifier = 0, dec = 0;
 utf8_char unichar;


 size = int_utf8_sz(*data);
 unichar.size = size;

 int_utf8_pad(&unichar);


 for(i = 0; i < size; i++)
  unichar.data[i] = data[i];


 if(size == 1)
  unichar.value = *((uint8_t*)(data));

 else{

  for(i = (size - 1); i >= 0; i--){

   if(!i)
    modifier = ((data[i] & (0xFF >> (size + 1))) << (6 * (size - 1)));

   else
    modifier = (data[i] & 0x3F) << (6 * (size - i - 1));


   dec |= modifier;

  }

  unichar.value = dec;

 }

 return unichar;

}


size_t _utf8_ptr_fbytes(utf8_char* unichar, byte* data){

 int8_t size, i;
 uint32_t modifier = 0, dec = 0;


 size = int_utf8_sz(*data);
 unichar->size = size;

 int_utf8_pad(unichar);


 for(i = 0; i < size; i++)
  unichar->data[i] = data[i];


 if(size == 1)
  unichar->value = *((uint8_t*)(data));

 else{

  for(i = (size - 1); i >= 0; i--){

   if(!i)
    modifier = ((data[i] & (0xFF >> (size + 1))) << (6 * (size - 1)));

   else
    modifier = (data[i] & 0x3F) << (6 * (size - i - 1));


   dec |= modifier;

  }

  unichar->value = dec;

 }

 return size;

}


_Bool _utf8_compare(utf8_char* c1, utf8_char* c2, _Bool case_insensitive){

 if(c1->value == c2->value)
  return 1;

 if(case_insensitive){


  if(c1->value <= 128 && c2->value <= 128){

   if((c1->value > 64 && c1->value < 91) && c2->value == (c1->value + 32))
    return 1;
   else if((c1->value > 96 && c1->value < 123) && c2->value == (c1->value - 32))
    return 1;

  }
 }

 return 0;

}


_Bool _utf8_compare_ci(utf8_char* c1, utf8_char* c2){

 if(c1->value < 97){

  if(c1->value == c2->value || c1->value == (c2->value + 32))
   return 1;

 }
 else{

  if(c1->value == c2->value || c1->value == (c2->value - 32))
   return 1;

 }

 return 0;

}


utf8_char _utf8_fint(uint32_t input){

 int8_t size, i;
 byte* data;
 uint32_t modifier = 0, val = 0;
 utf8_char unichar;


 if(input > 65535)
  size = 4;


 else if(input > 2047)
  size = 3;


 else if(input > 127)
  size = 2;


 else{

  size = 1;
  unichar.data[0] = input;
  unichar.value = input;
  unichar.size = 1;
  int_utf8_pad(&unichar);
  return unichar;
 }




 unichar.data[0] = (input >> (6 * (size - 1))) | ((254 << (8 - size - 1)) & 255);


 for(i = (size - 2); i >= 0; i--)
  unichar.data[size - i - 1] = (((input >> (6 * i)) & 63) | 128);

 unichar.size = size;

 int_utf8_pad(&unichar);

 return unichar;


}

void _utf8_upper(utf8_char* unichar){

 if(unichar->value > 96 && unichar->value < 123){

  unichar->value -= 32;
  unichar->data[0] -= 32;

 }

}

void _utf8_lower(utf8_char* unichar){

 if(unichar->value > 64 && unichar->value < 91){

  unichar->value += 32;
  unichar->data[0] += 32;

 }

}

unsigned int _utf8_lang(utf8_char* unichar){



 return 0;

}
# 50 "../lib/types/utf8/utf8.h" 2
# 32 "../lib/utf8.h" 2
# 26 "../lib/string.h" 2





# 1 "../lib/types/string/string.h" 1
# 26 "../lib/types/string/string.h"
typedef struct string string;
typedef struct string_list string_list;




string* _string_new(standard_library_context*);
string* _string_new_fbytes(standard_library_context*, byte*);
void _string_delete(string*);
void _string_delete_ll(string_list*);
void _string_set_ci(string*, _Bool);


void _string_clear(string*);


void _string_append_fbytes(string*, byte*);
void _string_append_fstring(string*, string*);
void _string_append_fchar(string*, utf8_char*);


void _string_insert(string*, string*, long);


long _string_position_fbytes(string*, byte*, long);
long _string_position_fstring(string*, string*, long);


byte* _string_pull(string*, size_t*);


utf8_char* _string_pull_carr(string*, size_t*);


_Bool _string_remove_all_fbytes(string*, byte*);
_Bool _string_remove_fbytes(string*, byte*, long);
_Bool _string_remove_all(string*, string*);
_Bool _string_remove(string*, string*, long);


_Bool _string_replace_all_fbytes(string*, byte*, byte*);
_Bool _string_replace_all_fstring(string*, string*, string*);

_Bool _string_replace_fbytes(string*, byte*, byte*, long);
_Bool _string_replace_fstring(string*, string*, string*, long);


utf8_char* _string_char_at(string*, size_t);


string* _string_substr(string*, long, long);


string_list* _string_split(string*, long);

string_list* _string_split_delim(string*, utf8_char, long);


void _string_trim(string* str);


string_list* _string_split_fbytes(string*, byte*, long);
string_list* _string_split_fstring(string*, string*, long);


void _string_lowercase(string*);


void _string_uppercase(string*);


long _string_index_of(string*, utf8_char*, long);


_Bool _string_compare(string*, string*);


size_t _string_hash(string*);


void _string_reset_iterator(string*);

void _string_iterator_rewind(string*);

_Bool _string_has_next(string*);

utf8_char* _string_get_next(string*);

_Bool _string_match_regex_fbytes(string*, byte*);

_Bool _string_match_regex(string*, string*);




# 1 "../lib/types/string/string_structs.c" 1
# 24 "../lib/types/string/string_structs.c"
struct string{


 standard_library_context* ctx;


 utf8_char* data;


 _Bool case_insensitive;


 long length;


 long size;


 size_t iter_pos;

};

struct string_list{


 string* s;


 string_list* next;

};
# 122 "../lib/types/string/string.h" 2
# 1 "../lib/types/string/string.c" 1
# 27 "../lib/types/string/string.c"
string* _string_new(standard_library_context* ctx){

 long total_bytes = 0;

 if(!ctx)
  return 0;

 total_bytes = sizeof(utf8_char) * 10;


 string* str = allocate(ctx, sizeof(string));
 str->data = allocate(ctx, total_bytes);
 str->ctx = ctx;
 str->size = 10;

 return str;

}


string* _string_new_fbytes(standard_library_context* ctx, byte* data){

 long i = 0, j = 0, length = 0, size = 0;
 string* str;

 if(!data)
  return 0;


 while(data[i] != 0){

  utf8_char unichar = _utf8_fbytes(data + i);
  i += unichar.size;
  length++;
 }

 size = length + 10;

 str = allocate(ctx, sizeof(string));
 str->data = allocate(ctx, size * sizeof(utf8_char));
 str->length = length;
 str->size = size;
 str->ctx = ctx;

 for(i = 0; i < length; i++)
  j += _utf8_ptr_fbytes(str->data + i, data + j);

 return str;

}


void _string_delete(string* str){

 if(!str)
  return;

 if(str->data)
  destroy(str->ctx, str->data);

 destroy(str->ctx, str);

}


void _string_delete_ll(string_list* lst){

 string_list* tmp;
 standard_library_context* ctx;

 if(!lst)
  return;

 while(lst){

  tmp = lst->next;
  ctx = lst->s->ctx;
  _string_delete(lst->s);
  destroy(ctx, lst);
  lst = tmp;
 }

}


byte* _string_pull(string* str, size_t* length){

 long i, j = 0, k = 0, total = 0;
 byte* data;

 if(!str || !length)
  return 0;


 for(i = 0; i < str->length; i++)
  total += _utf8_fbytes(str->data[i].data).size;


 data = allocate(str->ctx, total + 1);


 for(i = 0; i < str->length; i++){

  utf8_char unichar = str->data[i];

  for(j = 0; j < unichar.size; j++)
   data[k++] = unichar.data[j];

 }

 *length = total;
 return data;

}


utf8_char* _string_pull_carr(string* str, size_t* length){

 if(!str)
  return 0;

 *length = str->length;

 return str->data;

}

void _string_set_ci(string* str, _Bool value){

 if(!str)
  return;

 str->case_insensitive = value;

}




void _string_clear(string* str){

 size_t i, byte_size;
 byte* data;

 if(!str)
  return;

 str->length = 0;

 byte_size = str->size * sizeof(utf8_char);
 data = (byte*)str->data;

 for(i = 0; i < byte_size; i++)
  data[i] = 0;

}

_Bool _string_remove_all(string* str, string* pattern){

 string* new_string;
 size_t i, j;

 if(!str || !pattern)
  return 0;

 new_string = _string_new(str->ctx);

 for(i = 0; i < str->length; i++){

  j = 0;

  while(j < pattern->length && i < str->length && _utf8_compare(str->data + i, pattern->data + j, str->case_insensitive)){

   i++;
   j++;

  }

  _string_append_fchar(new_string, str->data + i);

 }

 destroy(str->ctx, str->data);

 str->data = new_string->data;
 str->length = new_string->length;
 str->size = new_string->size;

 destroy(str->ctx, new_string);

 return 1;

}

_Bool _string_remove_all_fbytes(string* str, byte* pattern){

 string* new_string;
 _Bool result;

 if(!str || !pattern)
  return 0;

 new_string = _string_new_fbytes(str->ctx, pattern);

 result = _string_remove_all(str, new_string);

 _string_delete(new_string);

 return result;

}

_Bool _string_remove(string* str, string* pattern, long index){

 string *new_string, *string_remainder;
 size_t i, j;

 if(!str || !pattern)
  return 0;

 if(index < 0 || index > str->length)
  return 0;

 new_string = _string_new(str->ctx);
 string_remainder = _string_substr(str, 0, index - 1);
 _string_append_fstring(new_string, string_remainder);
 _string_delete(string_remainder);

 for(i = index; i < str->length; i++){

  j = 0;

  while(j < pattern->length && i < str->length && _utf8_compare(str->data + i, pattern->data + j, str->case_insensitive)){

   i++;
   j++;

  }

  if(j == pattern->length){

   string_remainder = _string_substr(str, i, str->length - 1);
   _string_append_fstring(new_string, string_remainder);
   _string_delete(string_remainder);

   destroy(str->ctx, str->data);

   str->data = new_string->data;
   str->length = new_string->length;
   str->size = new_string->size;

   destroy(str->ctx, new_string);

   return 1;

  }

  _string_append_fchar(new_string, str->data + i);

 }

 return 0;

}

_Bool _string_remove_fbytes(string* str, byte* pattern, long index){

 string* new_string;
 _Bool result;

 if(!str || !pattern)
  return 0;

 new_string = _string_new_fbytes(str->ctx, pattern);

 result = _string_remove(str, new_string, index);

 _string_delete(new_string);

 return result;

}




void _string_append_fbytes(string* str, byte* append){

 if(!str)
  return;


 string* to_append = _string_new_fbytes(str->ctx, append);

 if(!to_append)
  return;

 _string_append_fstring(str, to_append);

 _string_delete(to_append);

}


void _string_append_fstring(string* str, string* append){

 long i, combined_size, new_size, new_byte_size;
 utf8_char* data;

 if(!str || !append)
  return;


 combined_size = (str->length + append->length);


 if(combined_size < str->size){

  for(i = 0; i < append->length; i++)
   str->data[i + str->length] = append->data[i];

  str->length += append->length;
  return;

 }

 new_size = (combined_size + 10);
 new_byte_size = new_size * sizeof(utf8_char);


 data = allocate(str->ctx, new_byte_size);


 for(i = 0; i < str->length; i++)
  data[i] = str->data[i];


 for(i = 0; i < append->length; i++)
  data[i + str->length] = append->data[i];


 destroy(str->ctx, str->data);

 str->data = data;
 str->size = new_size;
 str->length += append->length;

}

void _string_append_fchar(string* str, utf8_char* append){

 if(!str || !append)
  return;

 _string_append_fbytes(str, append->data);

}


void _string_insert(string* str, string* insert, long pos){

 long i, new_size, new_byte_size;
 utf8_char* data;

 if(!str || !insert || pos < 0)
  return;

 if(pos > str->length){

  _string_append_fstring(str, insert);
  return;

 }

 new_size = (str->length + insert->length + 10);
 new_byte_size = new_size * sizeof(utf8_char);

 data = allocate(str->ctx, new_byte_size);


 for(i = 0; i < pos; i++)
  data[i] = str->data[i];


 for(i = 0; i < insert->length; i++)
  data[i + pos] = insert->data[i];


 for(i = pos; i < str->length; i++)
  data[i + insert->length] = str->data[i];

 destroy(str->ctx, str->data);

 str->data = data;
 str->size = new_size;
 str->length += insert->length;

}


long _string_position_fbytes(string* str, byte* find, long s_pos){

 long result;

 if(!str || !find || s_pos < 0)
  return -1;

 string* new_string = _string_new_fbytes(str->ctx, find);

 result = _string_position_fstring(str, new_string, s_pos);

 _string_delete(new_string);

 return result;

}


long _string_position_fstring(string* str, string* find, long s_pos){

 long i, j;

 if(!str || !find || s_pos < 0)
  return 0;

 if(s_pos >= str->length)
  return 0;

 for(i = s_pos; i < str->length; i++){

  for(j = 0; j < find->size; j++){

   if(!_utf8_compare(str->data + i + j, find->data + j, str->case_insensitive))
    break;

  }

  if(j == find->length)
   return i;

 }

 return -1;

}



_Bool _string_replace_fbytes(string* str, byte* pattern, byte* replace, long s_pos){

 _Bool result;

 if(!str || !pattern || !replace || s_pos < 0)
  return 0;

 string* pattern_string = _string_new_fbytes(str->ctx, pattern);
 string* replacement_string = _string_new_fbytes(str->ctx, replace);

 result = _string_replace_fstring(str, pattern_string, replacement_string, s_pos);

 _string_delete(pattern_string);
 _string_delete(replacement_string);

 return result;

}

_Bool _string_replace_fstring(string* str, string* pattern, string* replace, long s_pos){

 long i;
 long find_pos;
 string *s1 = 0, *s2 = 0;

 if(!str || !pattern || !replace || s_pos < 0)
  return 0;

 if(s_pos >= str->length)
  return 0;


 find_pos = _string_position_fstring(str, pattern, s_pos);

 if(find_pos < 0)
  return 0;

 if(find_pos){

  s1 = _string_substr(str, 0, find_pos - 1);
  s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

 }
 else{

  s1 = _string_new(str->ctx);
  s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

 }

 _string_append_fstring(s1, replace);
 _string_append_fstring(s1, s2);
 _string_delete(s2);

 destroy(str->ctx, str->data);
 str->data = s1->data;
 str->size = s1->size;
 str->length = s1->length;
 destroy(str->ctx, s1);

 return 1;

}




_Bool _string_replace_all_fbytes(string* str, byte* pattern, byte* replace){

 _Bool result;

 string* pattern_string = _string_new_fbytes(str->ctx, pattern);
 string* replacement_string = _string_new_fbytes(str->ctx, replace);

 result = _string_replace_all_fstring(str, pattern_string, replacement_string);

 _string_delete(pattern_string);
 _string_delete(replacement_string);

 return result;

}


_Bool _string_replace_all_fstring(string* str, string* pattern, string* replace){

 long i;
 long find_pos;
 string *s1 = 0, *s2 = 0, *tmp;

 if(!str || !pattern || !replace)
  return 0;


 find_pos = _string_position_fstring(str, pattern, 0);


 while(find_pos >= 0){


  if(find_pos > 0 && !s1){

   s1 = _string_substr(str, 0, find_pos - 1);
   s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

  }
  else if(!s1){

   s1 = _string_new(str->ctx);
   s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

  }
  else{

   tmp = _string_substr(s1, 0, find_pos - 1);
   s2 = _string_substr(s1, find_pos + pattern->length, s1->length - 1);

   _string_delete(s1);

   s1 = tmp;

  }



  _string_append_fstring(s1, replace);

  _string_append_fstring(s1, s2);

  find_pos = _string_position_fstring(s1, pattern, find_pos + replace->length - 1);


  _string_delete(s2);

 }

 if(!s1)
  return 0;

 destroy(str->ctx, str->data);
 str->data = s1->data;
 str->size = s1->size;
 str->length = s1->length;
 destroy(str->ctx, s1);

 return 1;

}


long _string_index_of(string* str, utf8_char* unichar, long pos){

 long i;
 utf8_char* data;

 if(!str || !unichar || pos < 0)
  return -1;

 if(pos >= str->length)
  return 1;

 for(i = pos; i < str->length; i++){

  if(_utf8_compare(unichar, str->data + i, str->case_insensitive))
   return i;

 }

 return -1;

}


utf8_char* _string_char_at(string* str, size_t pos){

 if(!str)
  return 0;

 if(pos >= str->length)
  return 0;

 return str->data + pos;

}


string* _string_substr(string* str, long s_pos, long e_pos){

 long i, new_byte_size, new_size;
 utf8_char* data;
 string* new_string;

 if(!str || e_pos < 0)
  return 0;

 if(s_pos >= str->length || e_pos < s_pos || e_pos >= str->length)
  return 0;

 new_size = e_pos - s_pos + 10;
 new_byte_size = new_size * sizeof(utf8_char);


 data = allocate(str->ctx, new_byte_size);


 new_string = allocate(str->ctx, sizeof(string));

 for(i = s_pos; i <= e_pos; i++)
  data[i - s_pos] = str->data[i];


 new_string->ctx = str->ctx;
 new_string->data = data;
 new_string->length = e_pos - s_pos + 1;
 new_string->size = new_size;

 return new_string;

}


string_list* _string_split(string* str, long pos){

 long s1_size, s2_size;
 string_list* lst;
 byte* data;

 if(!str || pos < 0)
  return 0;

 if(pos <= 0 || pos >= str->length)
  return 0;

 lst = allocate(str->ctx, sizeof(string_list));
 lst->s = _string_substr(str, 0, pos);

 lst->next = allocate(str->ctx, sizeof(string_list));
 lst->next->s = _string_substr(str, pos + 1, str->length - 1);

 return lst;

}



string_list* _string_split_delim(string* str, utf8_char delim, long s_pos){

 string_list* lst;
 long pos;

 if(!str || s_pos < 0)
  return 0;

 pos = _string_index_of(str, &delim, s_pos);

 if(pos < 0)
  return 0;

 lst = allocate(str->ctx, sizeof(string_list));
 lst->s = _string_substr(str, 0, pos - 1);

 lst->next = allocate(str->ctx, sizeof(string_list));
 lst->next->s = _string_substr(str, pos + 1, str->length - 1);

 return lst;

}


void _string_trim(string* str){

 long i, s_pos = 0, e_pos = 0;
 string* trimmed;

 if(!str)
  return;

 e_pos = str->length - 1;

 for(i = 0; i < str->length; i++){

  if(str->data[i].value == 32)
   s_pos++;

  else
   break;

 }

 if(s_pos == e_pos){

  destroy(str->ctx, str->data);
  str->length = 0;
  return;

 }

 for(i = str->length - 1; i >= 0; i--){

  if(str->data[i].value == 32)
   e_pos--;

  else
   break;

 }

 if(s_pos == 0 && e_pos == str->length - 1)
  return;

 trimmed = _string_substr(str, s_pos, e_pos);

 destroy(str->ctx, str->data);
 str->data = trimmed->data;
 str->length = trimmed->length;
 str->size = trimmed->size;
 destroy(str->ctx, trimmed);

}


string_list* _string_split_fbytes(string* str, byte* delim, long s_pos){

 string* delim_string;
 string_list* lst;

 if(!str || !delim || s_pos < 0)
  return 0;

 delim_string = _string_new_fbytes(str->ctx, delim);

 lst = _string_split_fstring(str, delim_string, s_pos);

 _string_delete(delim_string);


 return lst;

}

string_list* _string_split_fstring(string* str, string* delim, long s_pos){

 string_list* lst;
 long pos;

 if(!str || !delim || s_pos < 0)
  return 0;

 pos = _string_position_fstring(str, delim, s_pos);

 if(pos < 0)
  return 0;

 lst = allocate(str->ctx, sizeof(string_list));
 lst->s = _string_substr(str, 0, pos - 1);

 lst->next = allocate(str->ctx, sizeof(string_list));
 lst->next->s = _string_substr(str, pos + delim->length, str->length - 1);

 return lst;

}


void _string_lowercase(string* str){

 long i;
 utf8_char* data;

 if(!str)
  return;

 for(i = 0; i < str->length; i++)
  _utf8_lower(str->data + i);


}


void _string_uppercase(string* str){

 long i;

 if(!str)
  return;

 for(i = 0; i < str->length; i++)
  _utf8_upper(str->data + i);

}


_Bool _string_compare(string* str1, string* str2){

 long i;

 if(!str1 || !str2)
  return 0;

 if(str1->length != str2->length)
  return 0;

 for(i = 0; i < str1->length; i++){

  if(!_utf8_compare(str1->data + i, str2->data + i, str1->case_insensitive))
   return 0;

 }

 return 1;

}


size_t _string_hash(string* str){

 size_t i, val = 0;

 if(!str)
  return val;

 for(i = 0; i < str->length; i++)
  val += (str->data[i].value * i);

 return val;

}


void _string_reset_iterator(string* str){

 if(!str)
  return;

 str->iter_pos = 0;

}


void _string_iterator_rewind(string* str){

 if(!str)
  return;

 if(str->iter_pos)
  str->iter_pos--;

}


_Bool _string_has_next(string* str){

 if(!str)
  return 0;

 if(str->iter_pos >= str->length)
  return 0;

 return 1;

}


utf8_char* _string_get_next(string* str){

 if(!_string_has_next(str))
  return 0;

 return str->data + str->iter_pos++;

}
# 123 "../lib/types/string/string.h" 2
# 32 "../lib/string.h" 2
# 25 "../lib/hashmap.h" 2

# 1 "../lib/map.h" 1
# 25 "../lib/map.h"
# 1 "../lib/string.h" 1
# 25 "../lib/string.h"
# 1 "../lib/utf8.h" 1
# 26 "../lib/string.h" 2
# 26 "../lib/map.h" 2





# 1 "../lib/containers/map/map.h" 1
# 26 "../lib/containers/map/map.h"
typedef struct map map;
typedef struct map_entry map_entry;
typedef struct hashmap_entry hashmap_entry;




map* _map_new(standard_library_context*, size_t);


void _map_delete(map*);


_Bool _map_resize(map*, size_t);


_Bool _map_insert(map*, size_t, void*);


map_entry* _map_insert_e(map*, size_t, void*);


void* _map_remove(map*, size_t);


_Bool _map_remove_e(map*, size_t, map_entry*);


void* _map_lookup(map*, size_t);


map_entry* _map_lookup_e(map*, size_t);


void _map_reset_iterator(map*);


_Bool _map_has_next(map*);


void* _map_get_next(map*);


map_entry* _map_get_next_e(map*);



# 1 "../lib/containers/map/map_structs.c" 1
# 24 "../lib/containers/map/map_structs.c"
struct hashmap_entry{

 string* key;

 void* data;

};

struct map_entry{


 _Bool used;


 size_t key;


 void* data;


 void* ext;


 map_entry* next;

};

struct map{


 standard_library_context* ctx;


 size_t iter_tbl;


 map_entry* iter_list;


 size_t size;


 size_t total;


 map_entry* map_table;


 size_t (*hash_algorithm)(byte*);

};
# 74 "../lib/containers/map/map.h" 2
# 1 "../lib/containers/map/map.c" 1
# 26 "../lib/containers/map/map.c"
map* _map_new(standard_library_context* ctx, size_t start_size){

 map* mp;

 if(!ctx || !start_size)
  return 0;

 mp = allocate(ctx, sizeof(map));
 mp->ctx = ctx;
 mp->size = start_size;

 mp->map_table = allocate(ctx, sizeof(map_entry) * start_size);

 return mp;

}

void _map_delete(map* mp){

 size_t i;
 map_entry *entry, *tmp;

 if(!mp)
  return;

 for(i = 0; i < mp->size; i++){

  entry = mp->map_table[i].next;

  while(entry){

   tmp = entry->next;
   destroy(mp->ctx, entry);
   entry = tmp;

  }
 }

 destroy(mp->ctx, mp->map_table);
 destroy(mp->ctx, mp);

}

_Bool _map_resize(map* mp, size_t new_size){

 size_t i;
 map* new_map;
 map_entry *entry, *tmp;

 if(!mp || !new_size)
  return 0;

 new_map = _map_new(mp->ctx, new_size);

 _map_reset_iterator(mp);

 while(_map_has_next(mp)){

  entry = _map_get_next_e(mp);
  _map_insert(new_map, entry->key, entry->data);

 }

 for(i = 0; i < mp->size; i++){

  entry = mp->map_table[i].next;

  while(entry){

   tmp = entry->next;
   destroy(mp->ctx, entry);
   entry = tmp;

  }
 }

 destroy(mp->ctx, mp->map_table);

 mp->iter_tbl = 0;
 mp->iter_list = 0;
 mp->size = new_map->size;
 mp->total = new_map->total;
 mp->map_table = new_map->map_table;

 destroy(mp->ctx, new_map);
 return 1;

}

_Bool _map_insert(map* mp, size_t key, void* data){

 size_t position;
 map_entry *entry;

 if(!mp)
  return 0;

 position = key % mp->size;
 entry = mp->map_table + position;


 while(entry){


  if(entry->key == key)
   return 0;


  else if(!entry->used)
   break;


  else if(!entry->next){

   entry->next = allocate(mp->ctx, sizeof(map_entry));
   entry = entry->next;
   break;

  }

  entry = entry->next;

 }

 mp->total++;
 entry->used = 1;
 entry->key = key;
 entry->data = data;
 return 1;

}

map_entry* _map_insert_e(map* mp, size_t key, void* data){

 size_t position;
 map_entry *entry;

 if(!mp)
  return 0;

 position = key % mp->size;
 entry = mp->map_table + position;


 while(entry){


  if(entry->key == key)
   return 0;


  else if(!entry->used)
   break;


  else if(!entry->next){

   entry->next = allocate(mp->ctx, sizeof(map_entry));
   entry = entry->next;
   break;

  }

  entry = entry->next;

 }

 mp->total++;
 entry->used = 1;
 entry->key = key;
 entry->data = data;
 return entry;

}


void* _map_remove(map* mp, size_t key){

 map_entry *entry, *tmp;
 size_t table_pos;
 void* data;

 if(!mp)
  return 0;

 table_pos = key % mp->size;
 entry = mp->map_table + table_pos;

 while(entry){

  if(entry->key == key && entry->next){

   tmp = entry->next;
   data = entry->data;
   *entry = *tmp;
   destroy(mp->ctx, tmp);
   mp->total--;
   return data;

  }
  else if(entry->key == key){

   entry->used = 0;
   mp->total--;
   return entry->data;

  }

  entry = entry->next;

 }

 return 0;
}

_Bool _map_remove_e(map* mp, size_t key, map_entry* cpy){

 map_entry *entry, *tmp;
 size_t table_pos;

 if(!mp || !cpy)
  return 0;

 table_pos = key % mp->size;
 entry = mp->map_table + table_pos;

 while(entry){

  if(entry->key == key && entry->next){

   tmp = entry->next;
   *cpy = *entry;
   *entry = *tmp;
   destroy(mp->ctx, tmp);
   mp->total--;
   return 1;

  }
  else if(entry->key == key){

   *cpy = *entry;
   entry->used = 0;
   mp->total--;
   return 1;

  }

  entry = entry->next;

 }

 return 0;
}

void* _map_lookup(map* mp, size_t key){

 map_entry* entry;
 size_t table_pos;

 if(!mp)
  return 0;

 table_pos = key % mp->size;
 entry = mp->map_table + table_pos;

 while(entry){

  if(entry->key == key)
   return entry->data;

  entry = entry->next;

 }

 return 0;

}

map_entry* _map_lookup_e(map* mp, size_t key){

 map_entry* entry;
 size_t table_pos;

 if(!mp)
  return 0;

 table_pos = key % mp->size;
 entry = mp->map_table + table_pos;

 while(entry){

  if(entry->key == key)
   return entry;

  entry = entry->next;

 }

 return 0;

}

_Bool _map_exists(map* mp, size_t key){

 if(_map_lookup(mp, key))
  return 1;

 return 0;

}



void _map_reset_iterator(map* mp){

 size_t i;

 if(!mp)
  return;


 for(i = 0; i < mp->size; i++){

  if(mp->map_table[i].used){

   mp->iter_tbl = i;
   mp->iter_list = mp->map_table + i;
   break;

  }

 }

}

_Bool _map_has_next(map* mp){

 if(!mp)
  return 0;

 if(mp->iter_tbl < mp->size)
  return 1;

 return 0;

}

void* _map_get_next(map* mp){

 void* data = 0;

 if(!mp)
  return 0;

 if(mp->iter_list){

  if(mp->iter_list->used){

   data = mp->iter_list->data;
   mp->iter_list = mp->iter_list->next;

  }
 }


 if(mp->iter_list){

  if(mp->iter_list->used)
   return data;

 }

 while(++mp->iter_tbl < mp->size){

  if(mp->map_table[mp->iter_tbl].used){

   mp->iter_list = mp->map_table + mp->iter_tbl;
   return data;

  }

 }

 return data;

}

map_entry* _map_get_next_e(map* mp){

 map_entry* entry = 0;

 if(!mp)
  return 0;

 if(mp->iter_list){

  if(mp->iter_list->used){

   entry = mp->iter_list;
   mp->iter_list = mp->iter_list->next;

  }
 }


 if(mp->iter_list){

  if(mp->iter_list->used)
   return entry;

 }

 while(++mp->iter_tbl < mp->size){

  if(mp->map_table[mp->iter_tbl].used){

   mp->iter_list = mp->map_table + mp->iter_tbl;
   return entry;

  }

 }

 return entry;

}
# 75 "../lib/containers/map/map.h" 2
# 32 "../lib/map.h" 2
# 27 "../lib/hashmap.h" 2



# 1 "../lib/containers/map/hashmap.h" 1
# 27 "../lib/containers/map/hashmap.h"
map* _hashmap_new(standard_library_context*, size_t);


void _hashmap_delete(map*);


void _hashmap_set_algorithm(map*, size_t (byte*));


_Bool _hashmap_resize(map*, size_t);


_Bool _hashmap_insert_fbytes(map*, byte*, void*);


_Bool _hashmap_insert(map*, string*, void*);


void* _hashmap_lookup_fbytes(map*, byte*);


void* _hashmap_lookup(map*, string*);


_Bool _hashmap_remove_fbytes(map*, byte*);


_Bool _hashmap_remove(map*, string*);


void _hashmap_reset_iterator(map*);


_Bool _hashmap_has_next(map*);


void* _hashmap_get_next(map*);


hashmap_entry* _hashmap_get_next_e(map*);



# 1 "../lib/containers/map/hashmap.c" 1
# 24 "../lib/containers/map/hashmap.c"
size_t int_hashmap_hash(byte* input){

 size_t i = 0, res = 0;

 while(input[i] && i < 1000000){

  res += (input[i] * i);
  i++;

 }

 return res;

}


map* _hashmap_new(standard_library_context* ctx, size_t start_size){

 map* hashmap;

 if(!ctx)
  return 0;

 hashmap = _map_new(ctx, start_size);

 hashmap->hash_algorithm = int_hashmap_hash;

 return hashmap;

}

void _hashmap_delete(map* hashmap){

 void* data;
 map_entry* entry;
 hashmap_entry* hm_entry;

 _map_reset_iterator(hashmap);

 while(_map_has_next(hashmap)){

  entry = _map_get_next_e(hashmap);
  hm_entry = entry->ext;
  _string_delete(hm_entry->key);
  destroy(hashmap->ctx, hm_entry);

 }

 _map_delete(hashmap);

}

void _hashmap_set_algorithm(map* hashmap, size_t (*hash_algorithm)(byte*)){

 if(!hashmap || !hash_algorithm)
  return;

 hashmap->hash_algorithm = hash_algorithm;

}

_Bool _hashmap_resize(map* hashmap, size_t new_size){

 return _map_resize(hashmap, new_size);

}


_Bool _hashmap_insert_fbytes(map* hashmap, byte* key, void* data){

 size_t hashed_key;
 map_entry* entry;
 hashmap_entry* hm_entry;

 if(!hashmap || !key || !data)
  return 0;

 hashed_key = hashmap->hash_algorithm(key);

 if((entry = _map_insert_e(hashmap, hashed_key, 0))){

  hm_entry = allocate(hashmap->ctx, sizeof(hashmap_entry));
  hm_entry->key = _string_new_fbytes(hashmap->ctx, key);
  hm_entry->data = data;
  entry->ext = hm_entry;
  return 1;

 }

 return 0;

}

_Bool _hashmap_insert(map* hashmap, string* key, void* data){

 size_t hashed_key;
 map_entry* entry;
 byte* string_data;
 hashmap_entry* hm_entry;

 if(!hashmap || !key || !data)
  return 0;

 string_data = _string_pull(key, &hashed_key);
 hashed_key = hashmap->hash_algorithm(string_data);

 if((entry = _map_insert_e(hashmap, hashed_key, 0))){

  hm_entry = allocate(hashmap->ctx, sizeof(hashmap_entry));
  hm_entry->key = _string_new_fbytes(hashmap->ctx, string_data);
  hm_entry->data = data;
  entry->ext = hm_entry;
  destroy(hashmap->ctx, string_data);
  return 1;

 }

 destroy(hashmap->ctx, string_data);
 return 0;

}

_Bool _hashmap_remove_fbytes(map* hashmap, byte* key){

 size_t hashed_key;
 map_entry entry;
 hashmap_entry* hm_entry;

 if(!hashmap || !key)
  return 0;

 hashed_key = hashmap->hash_algorithm(key);

 if(_map_remove_e(hashmap, hashed_key, &entry)){

  hm_entry = entry.ext;
  _string_delete(hm_entry->key);
  destroy(hashmap->ctx, hm_entry);
  return 1;

 }

 return 0;

}

_Bool _hashmap_remove(map* hashmap, string* key){

 size_t hashed_key;
 byte* string_data;
 map_entry entry;
 hashmap_entry* hm_entry;

 if(!hashmap || !key)
  return 0;

 string_data = _string_pull(key, &hashed_key);
 hashed_key = hashmap->hash_algorithm(string_data);
 destroy(hashmap->ctx, string_data);

 if(_map_remove_e(hashmap, hashed_key, &entry)){

  hm_entry = entry.ext;
  _string_delete(hm_entry->key);
  destroy(hashmap->ctx, hm_entry);
  return 1;

 }

 return 0;

}

void* _hashmap_lookup(map* hashmap, string* key){

 size_t hashed_key;
 byte* key_data;
 map_entry* entry;
 hashmap_entry* hm_entry;

 if(!hashmap || !key)
  return 0;

 key_data = _string_pull(key, &hashed_key);

 hashed_key = hashmap->hash_algorithm(key_data);

 destroy(hashmap->ctx, key_data);

 entry = _map_lookup_e(hashmap, hashed_key);

  if(!entry)
   return 0;

  hm_entry = entry->ext;

  return hm_entry->data;

}

void* _hashmap_lookup_fbytes(map* hashmap, byte* key){

 size_t hashed_key;
 map_entry* entry;
 hashmap_entry* hm_entry;

 if(!hashmap || !key)
  return 0;

 hashed_key = hashmap->hash_algorithm(key);

 entry = _map_lookup_e(hashmap, hashed_key);

 if(!entry)
  return 0;

  hm_entry = entry->ext;

  return hm_entry->data;

}

void _hashmap_reset_iterator(map* hashmap){

 if(!hashmap)
  return;

 _map_reset_iterator(hashmap);

}

_Bool _hashmap_has_next(map* hashmap){

 if(!hashmap)
  return 0;

 return _map_has_next(hashmap);

}

hashmap_entry* _hashmap_get_next_e(map* hashmap){

 map_entry* entry;

 if(!hashmap)
  return 0;

 entry = _map_get_next_e(hashmap);

 if(!entry)
  return 0;

 return (hashmap_entry*)entry->ext;
}

void* _hashmap_get_next(map* hashmap){

 hashmap_entry* entry;

 if((entry = _hashmap_get_next_e(hashmap)))
  return entry->data;

 return 0;
}
# 71 "../lib/containers/map/hashmap.h" 2
# 31 "../lib/hashmap.h" 2
# 29 "../lib/json.h" 2


# 1 "../lib/vector.h" 1
# 31 "../lib/vector.h"
# 1 "../lib/containers/list/vector.h" 1
# 26 "../lib/containers/list/vector.h"
typedef struct vector vector;




vector* _vector_new(standard_library_context*, size_t, size_t);


void _vector_delete(vector*);


void _vector_add(vector*, void*);


void* _vector_get(vector*, size_t);


_Bool _vector_set(vector*, size_t, void*);


void _vector_remove(vector*, size_t);


void _vector_reset_iterator(vector*);


_Bool _vector_has_next(vector*);


void* _vector_get_next(vector*);



# 1 "../lib/containers/list/vector_structs.c" 1
# 24 "../lib/containers/list/vector_structs.c"
struct vector{


 standard_library_context* ctx;


 size_t size;


 size_t used;


 size_t data_size;


 size_t iterator;


 byte* data;


 void* ext;

};
# 60 "../lib/containers/list/vector.h" 2
# 1 "../lib/containers/list/vector.c" 1
# 24 "../lib/containers/list/vector.c"
vector* _vector_new(standard_library_context* ctx, size_t data_size, size_t start_size){

 if(!ctx || !start_size)
  return 0;

 vector* vect = allocate(ctx, sizeof(vector));
 vect->ctx = ctx;
 vect->data_size = data_size;

 vect->data = allocate(ctx, data_size * start_size);
 vect->size = start_size;

 return vect;

}

static void int_vector_resize(vector* vect){

 size_t i;
 byte* new_data = allocate(vect->ctx, vect->data_size * vect->size * 2);

 for(i = 0; i < (vect->used * vect->data_size); i++)
  new_data[i] = vect->data[i];

 vect->size *= 2;
 destroy(vect->ctx, vect->data);

 vect->data = new_data;

}

void _vector_add(vector* vect, void* data){

 size_t i = 0;

 if(!vect)
  return;

 if(vect->used == vect->size)
  int_vector_resize(vect);

 for(i = 0; i < vect->data_size; i++)
  vect->data[(vect->used * vect->data_size) + i] = ((byte*)data)[i];

 vect->used++;

}

void* _vector_get(vector* vect, size_t pos){

 if(!vect)
  return 0;

 if(pos < vect->used)
  return (void*)(vect->data + (pos * vect->data_size));

 return 0;

}

_Bool _vector_set(vector* vect, size_t pos, void* data){

 size_t i, end;

 if(!vect)
  return 0;

 if(pos >= vect->used)
  return 0;

 pos *= vect->data_size;
 end = pos + vect->data_size;

 for(i = pos; i < end; i++)
  vect->data[i] = *((byte*)(data + i - pos));

 return 1;
}

void _vector_remove(vector* vect, size_t pos){

 size_t i, b_size;

 if(!vect)
  return;

 vect->iterator = 0;

 if(pos >= vect->used)
  return;

 b_size = (--vect->used * vect->data_size);
 pos *= vect->data_size;

 for(i = pos; i < b_size; i++)
  vect->data[i] = vect->data[i + vect->data_size];

}

void _vector_reset_iterator(vector* vect){

 vect->iterator = 0;

}

_Bool _vector_has_next(vector* vect){

 if(vect->iterator < vect->used)
  return 1;

 return 0;

}

void* _vector_get_next(vector* vect){

 if(vect->iterator < vect->used)
  return (void*)(vect->data + (vect->iterator++ * vect->data_size));

 return 0;

}

void _vector_delete(vector* vect){

 destroy(vect->ctx, vect->data);
 destroy(vect->ctx, vect);

}
# 61 "../lib/containers/list/vector.h" 2
# 32 "../lib/vector.h" 2
# 32 "../lib/json.h" 2


# 1 "../lib/list.h" 1
# 32 "../lib/list.h"
# 1 "../lib/containers/list/list.h" 1
# 26 "../lib/containers/list/list.h"
typedef struct list list;




list* _list_new(standard_library_context*, size_t);


void _list_delete(list*);


void _list_add(list*, void*);


void* _list_get(list*, size_t);


_Bool _list_remove(list*, size_t);


void _list_reset_iterator(list*);


_Bool _list_has_next(list*);


void* _list_get_next(list*);


_Bool _list_set(list*, size_t, void*);


_Bool _list_merge(list*, list*);



# 1 "../lib/containers/list/list_structs.c" 1
# 24 "../lib/containers/list/list_structs.c"
struct list{


 standard_library_context* ctx;


 size_t size;


 size_t used;


 size_t iterator;


 byte** data;

};
# 63 "../lib/containers/list/list.h" 2
# 1 "../lib/containers/list/list.c" 1
# 24 "../lib/containers/list/list.c"
static void int_list_resize(list* lst, size_t new_size){

 byte** new_data;
 size_t i;

 if(!lst)
  return;

 if(new_size <= lst->size)
  return;

 new_data = allocate(lst->ctx, new_size * sizeof(size_t));

 for(i = 0; i < lst->used; i++)
  new_data[i] = lst->data[i];

 destroy(lst->ctx, lst->data);

 lst->data = new_data;
 lst->size = new_size;

}

list* _list_new(standard_library_context* ctx, size_t start_size){

 if(!ctx || !start_size)
  return 0;

 list* l = allocate(ctx, sizeof(list));
 l->ctx = ctx;
 l->data = allocate(ctx, sizeof(size_t) * start_size);
 l->size = start_size;

 return l;

}

void _list_delete(list* lst){

 if(!lst)
  return;

 destroy(lst->ctx, lst->data);
 destroy(lst->ctx, lst);

}

void _list_add(list* lst, void* data){

 int8_t i;

 if(!lst)
  return;

 if(lst->used == lst->size)
  int_list_resize(lst, lst->size * 2);

 lst->data[lst->used++] = (byte*)data;

}

void _list_reset_iterator(list* lst){

 if(!lst)
  return;

 lst->iterator = 0;

}

_Bool _list_has_next(list* lst){

 if(!lst)
  return 0;

 if(lst->iterator < lst->used)
  return 1;

 return 0;
}

void* _list_get_next(list* lst){

 size_t* l;

 if(!lst)
  return 0;

 if(lst->iterator >= lst->used)
  return 0;

 return (void*)lst->data[lst->iterator++];

}

_Bool _list_remove(list* lst, size_t pos){

 size_t i;
 _Bool removed;

 if(!lst)
  return 0;

 if(pos >= lst->used)
  return 0;

 for(i = pos; i < (lst->used - 1); i++)
  lst->data[i] = lst->data[i + 1];

 lst->used--;

 return 1;

}

void* _list_get(list* lst, size_t pos){

 size_t* l;

 if(!lst)
  return 0;

 if(pos >= lst->used)
  return 0;


 return (void*)lst->data[pos];

}

_Bool _list_merge(list* lst1, list* lst2){

 size_t i;

 if(!lst1 || !lst2)
  return 0;

 for(i = 0; i < lst2->used; i++)
  _list_add(lst1, lst2->data[i]);

 return 1;

}

_Bool _list_set(list* lst, size_t pos, void* new_ptr){

 if(!lst)
  return 0;

 if(pos >= lst->used)
  return 0;

 lst->data[pos] = new_ptr;

 return 1;

}
# 64 "../lib/containers/list/list.h" 2
# 33 "../lib/list.h" 2
# 35 "../lib/json.h" 2





# 1 "../lib/format/json/json.h" 1
# 24 "../lib/format/json/json.h"
# 1 "../lib/format/json/json_structs.c" 1
typedef struct json_object json_object;
typedef struct json_item json_item;
typedef struct json_array json_array;
typedef struct json_obj_parser json_obj_parser;
typedef struct json_parse_error json_parse_error;
typedef struct json_allocation json_allocation;

enum{JSON_UNDEFINED};
enum{JSON_TYPE_UNDEFINED, JSON_TYPE_SCALAR, JSON_TYPE_INT, JSON_TYPE_FLOAT, JSON_TYPE_BOOL, JSON_TYPE_STRING, JSON_TYPE_CHAR, JSON_TYPE_OBJECT, JSON_TYPE_ARRAY, JSON_TYPE_NULL};
enum{JSON_ERROR, JSON_OBJECT, JSON_ARRAY, JSON_ITEM, JSON_MORE_EXISTS, JSON_END_OBJECT, JSON_END_ARRAY};
enum{JSON_ERROR_STRING_TERMINATED, JSON_ERROR_INVALID_SYNTAX, JSON_ERROR_INVALID_NAME, JSON_ERROR_INVALID_SEPARATOR, JSON_ERROR_INVALID_TYPE};


struct json_object{


 standard_library_context* ctx;


 map* table;


 string* json_string;


 vector* allocations;

};


struct json_array{


 standard_library_context* ctx;


 vector* items;

};


struct json_item{


 standard_library_context* ctx;


 uint8_t type;


 size_t size;


 void* data;

};

struct json_obj_parser{


 standard_library_context* ctx;


 vector* allocations;


 string* json_string;


 size_t obj_parser_sf;


 size_t arr_parser_sf;

};

struct json_parse_error{


 uint8_t code;


 size_t line;

};

struct json_allocation{


 uint8_t type;


 void* ptr;

};
# 25 "../lib/format/json/json.h" 2
# 1 "../lib/format/json/json.c" 1
# 24 "../lib/format/json/json.c"
json_item* int_retrieve_item(map* table, string* var_name, uint8_t* error){

 json_item* item;

 if(!table || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 item = _hashmap_lookup(table, var_name);

 printf("Item: %p\n", item);

 return item;

}


uint8_t _json_get_type(json_object* obj, string* var_name){

 json_item* item;

 if(!obj)
  return 0;

 item = _hashmap_lookup(obj->table, var_name);

 if(!item)
  return 0;

 return item->type;

}

uint8_t _json_get_type_fbytes(json_object* obj, byte* input){

 string* input_str;
 json_item* item;

 if(!obj || !input)
  return 0;

 item = _hashmap_lookup_fbytes(obj->table, input);

 return item->type;

}


double _json_get_float(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_FLOAT){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return *((double*)item->data);

}

double _json_get_float_fbytes(json_object* obj, byte* var_name, uint8_t* error){

 string* str;
 double result;

 if(!obj){

  *error = JSON_UNDEFINED;
  return 0;

 }

 str = _string_new_fbytes(obj->ctx, var_name);
 result = _json_get_float(obj, str, error);
 _string_delete(str);

 return result;

}


long _json_get_int(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_INT){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return *((int*)item->data);

}

long _jsonn_get_int_fbytes(json_object* obj, byte* var_name, uint8_t* error){

 string* str;
 long result;

 if(!obj){

  *error = JSON_UNDEFINED;
  return 0;

 }

 str = _string_new_fbytes(obj->ctx, var_name);
 result = _json_get_int(obj, str, error);
 _string_delete(str);

 return result;

}


string* _json_get_string(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_STRING){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return item->data;

}


_Bool _json_get_bool(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_BOOL){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return (size_t)item->data;

}


json_array* _json_get_array(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_ARRAY){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return item->data;

}


json_object* _json_get_object(json_object* obj, string* var_name, uint8_t* error){

 json_item* item;

 if(!obj || !var_name || !error){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(!(item = int_retrieve_item(obj->table, var_name, error))){

  *error = JSON_UNDEFINED;
  return 0;

 }

 if(item->type != JSON_TYPE_OBJECT){

  *error = JSON_ERROR_INVALID_TYPE;
  return 0;

 }

 return item->data;

}
# 26 "../lib/format/json/json.h" 2
# 1 "../lib/format/json/json_parser.c" 1
# 26 "../lib/format/json/json_parser.c"
json_object* int_json_parse_object(json_obj_parser* parser, json_parse_error* error);



_Bool int_json_parse_var_beg_ws(json_obj_parser* parser, json_parse_error* error){

 utf8_char* current_char;

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value != 32)
   break;

 }

 if(!current_char){

  error->code = JSON_ERROR_STRING_TERMINATED;
  error->line = parser->json_string->iter_pos - 1;
  return 0;

 }

 else if(current_char->value != 34){

  error->code = JSON_ERROR_INVALID_SYNTAX;
  error->line = parser->json_string->iter_pos - 1;
  return 0;

 }

 _string_iterator_rewind(parser->json_string);

 return 1;

}


void int_json_parse_elim_ws(json_obj_parser* parser, json_parse_error* error){

 utf8_char* current_char;

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value != 32)
   break;

 }

 _string_iterator_rewind(parser->json_string);

}


string* int_json_parse_var_name(json_obj_parser* parser, json_parse_error* error){

 string* var_name;
 utf8_char* current_char;

 var_name = _string_new(parser->ctx);

 _string_get_next(parser->json_string);

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value == 92)
   _string_append_fchar(var_name, _string_get_next(parser->json_string));

  else if(current_char->value == 34)
   break;

  else
   _string_append_fchar(var_name, current_char);

 }


 if(!var_name->length){

  error->code = JSON_ERROR_INVALID_NAME;
  error->line = parser->json_string->iter_pos - 1;
  _string_delete(var_name);
  return 0;

 }

 else if(!current_char){

  error->code = JSON_ERROR_STRING_TERMINATED;
  error->line = parser->json_string->iter_pos - 1;
  _string_delete(var_name);
  return 0;

 }

 return var_name;

}


_Bool int_json_parse_check_sep(json_obj_parser* parser, json_parse_error* error){

 utf8_char* current_char;
 _Bool separator_found = 0;

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value == 58)
   separator_found = 1;

  else if(current_char->value != 32)
   break;

 }

 if(!separator_found){

  error->code = JSON_ERROR_INVALID_SEPARATOR;
  error->line = parser->json_string->iter_pos - 1;
  return 0;

 }

 else if(!current_char){

  error->code = JSON_ERROR_STRING_TERMINATED;
  error->line = parser->json_string->iter_pos - 1;
  return 0;

 }

 _string_iterator_rewind(parser->json_string);

 return 1;

}


uint8_t int_json_parse_var_type(json_obj_parser* parser, json_parse_error* error){

 utf8_char* current_char;

 current_char = _string_get_next(parser->json_string);
 _string_iterator_rewind(parser->json_string);


 if(current_char->value == 34)
  return JSON_TYPE_STRING;


 if((current_char->value > 47 && current_char->value < 58 ) || current_char->value == 46 || current_char->value == 45)
  return JSON_TYPE_SCALAR;


 if(current_char->value == 39)
  return JSON_TYPE_CHAR;


 if(current_char->value == 84 || current_char->value == 116 || current_char->value == 70 || current_char->value == 102)
  return JSON_TYPE_BOOL;


 if(current_char->value == 123)
  return JSON_TYPE_OBJECT;


 if(current_char->value == 91)
  return JSON_TYPE_ARRAY;


 if(current_char->value == 78 || current_char->value == 110)
  return JSON_TYPE_NULL;

 error->code = JSON_ERROR_INVALID_TYPE;
 error->line = parser->json_string->iter_pos - 1;

 return JSON_TYPE_UNDEFINED;

}

inline json_item* int_json_parse_var_type_string(json_obj_parser* parser, json_parse_error* error){

 json_item* item;
 utf8_char* current_char;
 string* value;
 json_allocation alloc;

 current_char = _string_get_next(parser->json_string);
 value = _string_new(parser->ctx);

 item = allocate(parser->ctx, sizeof(json_item));

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value == 92)
   _string_append_fchar(value, _string_get_next(parser->json_string));

  else if(current_char->value == 34)
   break;

  else
   _string_append_fchar(value, current_char);

 }

 if(!current_char){

  error->code = JSON_ERROR_STRING_TERMINATED;
  error->line = parser->json_string->iter_pos - 1;
  _string_delete(value);
  destroy(parser->ctx, item);

  return 0;

 }

 item->ctx = parser->ctx;
 item->type = JSON_TYPE_STRING;
 item->data = value;


 alloc.type = JSON_ITEM;
 alloc.ptr = item;
 _vector_add(parser->allocations, &alloc);

 return item;

}

inline json_item* int_json_parse_var_type_scalar(json_obj_parser* parser, json_parse_error* error){

 size_t s;
 char* temp;
 double* d_ptr;
 long* l_ptr;

 json_item* item;
 utf8_char* current_char;
 string* value;
 json_allocation alloc;

 _Bool is_float = 0;
 _Bool invalid_char = 0;

 value = _string_new(parser->ctx);
 item = allocate(parser->ctx, sizeof(json_item));

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value == 46 && !is_float)
   is_float = 1;

  else if(current_char->value == 46)
   break;

  if((current_char->value > 47 && current_char->value < 58) || current_char->value == 46)
   _string_append_fchar(value, current_char);

  else
   break;

 }

 temp = _string_pull(value, &s);


 if(is_float){

  d_ptr = allocate(parser->ctx, sizeof(double));
  *d_ptr = atof(temp);
  item->type = JSON_TYPE_FLOAT;
  item->data = d_ptr;

 }


 else{

  l_ptr = allocate(parser->ctx, sizeof(long));
  *l_ptr = atol(temp);
  item->type = JSON_TYPE_INT;
  item->data = l_ptr;

 }

 _string_iterator_rewind(parser->json_string);

 destroy(parser->ctx, temp);
 _string_delete(value);


 alloc.type = JSON_ITEM;
 alloc.ptr = item;
 _vector_add(parser->allocations, &alloc);

 return item;

}

inline json_item* int_json_parse_var_type_bool(json_obj_parser* parser, json_parse_error* error){

 json_item* item;
 json_allocation alloc;
 utf8_char* current_char;

 _Bool valid = 0;
 size_t tpos;
 size_t fpos;

 item = allocate(parser->ctx, sizeof(json_item));
 _string_set_ci(parser->json_string, 1);

 tpos = _string_position_fbytes(parser->json_string, "true", parser->json_string->iter_pos);

 if(tpos == parser->json_string->iter_pos){

  parser->json_string->iter_pos += 4;
  valid = 1;
  item->data = (void*)1;

 }

 fpos = _string_position_fbytes(parser->json_string, "false", parser->json_string->iter_pos);

 if(fpos == parser->json_string->iter_pos){

  parser->json_string->iter_pos += 5;
  valid = 1;
  item->data = (void*)0;

 }

 if(!valid){

  error->code = JSON_ERROR_INVALID_TYPE;
  error->line = parser->json_string->iter_pos;
  destroy(parser->ctx, item);
  return 0;

 }

 item->type = JSON_TYPE_BOOL;
 alloc.type = JSON_ITEM;
 alloc.ptr = item;
 _vector_add(parser->allocations, &alloc);

 return item;

}

inline json_item* int_json_parse_var_type_object(json_obj_parser* parser, json_parse_error* error){

 json_item* item;
 json_allocation alloc;

 item = allocate(parser->ctx, sizeof(json_item));
 item->type = JSON_TYPE_OBJECT;


 alloc.type = JSON_ITEM;
 alloc.ptr = item;
 _vector_add(parser->allocations, &alloc);

 return item;

}

inline json_item* _int_json_parse_var_type_array(json_obj_parser* parser, json_parse_error* error){

 json_item* item;
 json_allocation alloc;

 item = allocate(parser->ctx, sizeof(json_item));
 item->type = JSON_TYPE_ARRAY;


 alloc.type = JSON_ITEM;
 alloc.ptr = item;
 _vector_add(parser->allocations, &alloc);

 return item;

}


json_item* int_json_create_item(json_obj_parser* parser, json_parse_error* error, uint8_t var_type){

 json_item* item;


 if(var_type == JSON_TYPE_STRING){

  if(!(item = int_json_parse_var_type_string(parser, error)))
   return 0;

  return item;

 }

 if(var_type == JSON_TYPE_SCALAR){

  if(!(item = int_json_parse_var_type_scalar(parser, error)))
   return 0;

  return item;

 }

 if(var_type == JSON_TYPE_OBJECT){

  if(!(item = int_json_parse_var_type_object(parser, error)))
   return 0;

  return item;
 }

 if(var_type == JSON_TYPE_BOOL){

  if(!(item = int_json_parse_var_type_bool(parser, error)))
   return 0;

  return item;
 }

 if(var_type == JSON_TYPE_ARRAY){

  if(!(item = _int_json_parse_var_type_array(parser, error)))
   return 0;

  return item;

 }
}



json_item* int_json_parse_variable(json_obj_parser* parser, string** var_name, json_parse_error* error){

 uint8_t var_type;


 if(!int_json_parse_var_beg_ws(parser, error))
  return 0;


 if(!(*var_name = int_json_parse_var_name(parser, error)))
  return 0;


 if(!int_json_parse_check_sep(parser, error))
  return 0;


 if(!(var_type = int_json_parse_var_type(parser, error)))
  return 0;

 return int_json_create_item(parser, error, var_type);


}

uint8_t int_json_parse_check_more(json_obj_parser* parser, json_parse_error* error){

 utf8_char* current_char;

 while((current_char = _string_get_next(parser->json_string))){

  if(current_char->value == 44)
   return JSON_MORE_EXISTS;

  if(current_char->value == 125)
   return JSON_END_OBJECT;

  if(current_char->value == 93)
   return JSON_END_ARRAY;

  if(current_char->value != 32){

   error->code = JSON_ERROR_INVALID_SYNTAX;
   error->line = parser->json_string->iter_pos - 1;

   return JSON_ERROR;

  }

 }
}


json_array* int_json_parse_array(json_obj_parser* parser, json_parse_error* error){

 standard_library_context* ctx;
 json_array* current_array;
 json_array* new_array;
 json_object* new_object;
 json_allocation alloc;
 _Bool cont = 1;


 json_item* item;
 uint8_t type;
 uint8_t more_exists;


 if(_string_get_next(parser->json_string)->value != 91)
  return 0;

 ctx = parser->ctx;


 current_array = allocate(ctx, sizeof(json_array));
 current_array->ctx = ctx;
 current_array->items = _vector_new(ctx, sizeof(json_item), 2);


 alloc.type = JSON_ARRAY;
 alloc.ptr = current_array;


 _vector_add(parser->allocations, &alloc);


 while(1){


  int_json_parse_elim_ws(parser, error);


  if((type = int_json_parse_var_type(parser, error)) == JSON_TYPE_UNDEFINED)
   return 0;


  if(!(item = int_json_create_item(parser, error, type)))
   return 0;

  if(item->type == JSON_TYPE_OBJECT){


   new_object = int_json_parse_object(parser, error);

   item->data = new_object;

  }

  else if(item->type == JSON_TYPE_ARRAY){

   new_array = int_json_parse_array(parser, error);

   item->data = new_array;

  }

  _vector_add(current_array->items, item);


  more_exists = int_json_parse_check_more(parser, error);

  if(more_exists == JSON_END_ARRAY)
   break;

  else if(more_exists != JSON_MORE_EXISTS){

   error->code = JSON_ERROR_INVALID_SYNTAX;
   error->line = parser->json_string->iter_pos - 1;
   return 0;

  }


 }

 return current_array;

}


json_object* int_json_parse_object(json_obj_parser* parser, json_parse_error* error){

 standard_library_context* ctx;
 json_object* current_object;
 json_object* new_object;
 json_array* new_array;
 json_allocation alloc;


 string* var_name;
 json_item* item;
 uint8_t more_exists;


 if(_string_get_next(parser->json_string)->value != 123){

  error->code = JSON_ERROR_INVALID_SYNTAX;
  error->line = 0;
  return 0;

 }

 ctx = parser->ctx;


 current_object = allocate(ctx, sizeof(json_object));
 current_object->ctx = ctx;
 current_object->table = _hashmap_new(ctx, 10);

 alloc.type = JSON_OBJECT;
 alloc.ptr = current_object;


 _vector_add(parser->allocations, &alloc);


 while((item = int_json_parse_variable(parser, &var_name, error))){

  if(item->type == JSON_TYPE_OBJECT){


   if(!(new_object = int_json_parse_object(parser, error))){

    _string_delete(var_name);
    return 0;

   }

   item->data = new_object;

  }

  else if(item->type == JSON_TYPE_ARRAY){

   if(!(new_array = int_json_parse_array(parser, error))){

    _string_delete(var_name);
    return 0;

   }

   item->data = new_array;

  }

   _hashmap_insert(current_object->table, var_name, item);

  _string_delete(var_name);


  more_exists = int_json_parse_check_more(parser, error);

  if(more_exists == JSON_END_OBJECT)
   break;


  else if(more_exists != JSON_MORE_EXISTS){

   error->code = JSON_ERROR_INVALID_SYNTAX;
   error->line = parser->json_string->iter_pos - 1;
   return 0;

  }

 }

 if(!item)
  return 0;

 current_object->allocations = parser->allocations;

 return current_object;

}


json_object* _json_parse(standard_library_context* ctx, string* input, json_parse_error* error){

 json_object* json_obj;
 json_obj_parser* parser;

 if(!ctx || !input)
  return 0;


 _string_trim(input);


 if(_string_position_fbytes(input, "{", 0))
  return 0;


 _string_reset_iterator(input);


 parser = allocate(ctx, sizeof(json_obj_parser));
 parser->ctx = ctx;
 parser->json_string = input;
 parser->allocations = _vector_new(ctx, sizeof(json_allocation), 10);


 json_obj = int_json_parse_object(parser, error);


 destroy(ctx, parser);

 return json_obj;

}


json_object* _json_parse_fbytes(standard_library_context* ctx, byte* input, json_parse_error* error){

 string* new_string;
 json_object* json_obj;

 if(!ctx || !input)
  return 0;

 new_string = _string_new_fbytes(ctx, input);
 json_obj = _json_parse(ctx, new_string, error);
 _string_delete(new_string);

 return json_obj;

}
# 26 "../lib/format/json/json.h" 2
# 41 "../lib/json.h" 2
# 2 "json_test.c" 2

char* js = "{\"var0\" : [1, 2, \"Array String Test!\", 4, [{\"intVar1\" : 123},202.3,4.5]], \"var1\" : 12, \"var2\" : \"Hello World!\", \"var3\" : {\"v1\" : 1234, \"v2\" : {\"ve1\": 1.2}, \"v3\" : true}, \"v4\" : 3.141529, \"v5\" : 42}";


void main(){

 _lib_init();

 genlib_context* ctx = _ctx_init();

 string* json_string = _string_new(ctx);


 _string_append_fbytes(json_string, "{");

 size_t i, j;
 char buff[15];

 for(j = 0; j < 15; j++)
   buff[j] = 0;
# 50 "json_test.c"
 _string_append_fbytes(json_string, "}");

 printf("Finished with the string....\n");


 json_parse_error error;
 json_object* obj = _json_parse_fbytes(ctx, js, &error);

 string* name = _string_new_fbytes(ctx, "var0");

 uint8_t type = _json_get_type(obj, name);

 _string_clear(name);
 _string_append_fbytes(name, "v4");

 double double_val = _json_get_float(obj, name, &type);

 printf("Error: %d\n", type);


 printf("Double value: %lf\n", double_val);

 _string_clear(name);
 _string_append_fbytes(name, "v5");

 long long_val = _json_get_int(obj, name, &type);

 printf("Int value: %ld\n", long_val);

 _string_clear(name);
 _string_append_fbytes(name, "var2");

 string* str = _json_get_string(obj, name, &type);

 size_t sz;
 char* dat = _string_pull(str, &sz);

 printf("String value: %s\n", dat);

 destroy(ctx, dat);


 if(type == JSON_TYPE_ARRAY)
  printf("This is an array!\n");

 else if(type == JSON_TYPE_UNDEFINED)
  printf("Doesn't exist!");


 if(!obj){

  size_t s;

  printf("Error line: %ld\n", error.line);
  string* js_str = _string_new_fbytes(ctx, js);
  string* substr = _string_substr(js_str, error.line, js_str->length - 1);
  char* tmp = _string_pull(substr, &s);
  printf("Near: %s\n", tmp);
 }

 printf("Finished parsing!\n");
# 174 "json_test.c"
 if(obj){

  vector* allocations = obj->allocations;

  _vector_reset_iterator(allocations);

  while(_vector_has_next(allocations)){

   json_allocation* alloc = _vector_get_next(allocations);

   if(alloc->type == JSON_OBJECT){

    printf("Found object...\n");
    json_object* obj = alloc->ptr;
    _hashmap_delete(obj->table);
    destroy(ctx, obj);

   }
   else if(alloc->type == JSON_ARRAY){

    printf("Found array...\n");
    json_array* arr = alloc->ptr;
    _vector_delete(arr->items);
    destroy(ctx, arr);


   }
   else if(alloc->type == JSON_ITEM){

    json_item* item = alloc->ptr;

    if(item->type == JSON_TYPE_STRING)
     _string_delete(item->data);
    else if(item->type == JSON_TYPE_FLOAT)
     destroy(ctx, item->data);
    else if(item->type == JSON_TYPE_INT)
     destroy(ctx, item->data);

    destroy(ctx, item);

   }

  }

  _vector_delete(allocations);

 }

 _string_delete(json_string);
 _ctx_delete(ctx);

}
