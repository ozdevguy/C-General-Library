# 1 "bst_test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "bst_test.c"
# 1 "../lib/genlib.h" 1
# 1 "../lib/foundation.h" 1







# 1 "../lib/sys_include.h" 1
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

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
# 36 "/usr/include/stdio.h" 2 3 4
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
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







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

# 2 "../lib/sys_include.h" 2
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




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





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

# 3 "../lib/sys_include.h" 2
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

# 4 "../lib/sys_include.h" 2
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
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 2 3 4
# 5 "../lib/sys_include.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdbool.h" 1 3 4
# 5 "../lib/sys_include.h" 2
# 9 "../lib/foundation.h" 2
# 1 "../lib/posix_thread_wrapper.h" 1
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

# 1 "../lib/posix_thread_wrapper.h" 2
# 10 "../lib/foundation.h" 2
# 48 "../lib/foundation.h"
# 1 "../lib/types/std_types.h" 1
enum{TYPE_INT, TYPE_UINT, TYPE_LONG, TYPE_ULONG, TYPE_FLOAT, TYPE_DOUBLE, TYPE_CHAR, TYPE_BOOL, TYPE_BYTE, TYPE_UTF8, TYPE_STRING};

typedef unsigned char byte;
# 49 "../lib/foundation.h" 2







# 1 "../lib/global/environment.h" 1
# 1 "../lib/global/std_lib_global.c" 1

typedef struct standard_library_context standard_library_context;
# 2 "../lib/global/environment.h" 2
# 1 "../lib/global/std_lib_env.c" 1
struct standard_library_context{


 uint32_t instance_id;


 void* data;


 void* (*memory_allocator)(size_t, uint32_t);


 _Bool (*memory_dealloc)(void*, uint32_t);


 void* (*logger)(byte*, size_t, uint8_t, uint32_t);




};



void* int_std_calloc_bridge(size_t size, uint32_t instance_id){

 return calloc(size, 1);

}

_Bool int_std_free_bridge(void* ptr, uint32_t instance_id){

 free(ptr);
 return 1;

}

void* int_std_logger(byte* data, size_t length, uint8_t type, uint32_t instance_id){

 printf("[LOG] %s\n", (char*)data);

 return 0;

}

void _std_lib_environment_min_setup(standard_library_context* ctx, uint32_t instance_id){

 ctx->instance_id = instance_id;
 ctx->memory_allocator = 0;
 ctx->memory_dealloc = 0;
 ctx->logger = 0;

}

void _std_lib_default(standard_library_context* ctx){

 ctx->instance_id = 0;
 ctx->memory_allocator = int_std_calloc_bridge;
 ctx->memory_dealloc = int_std_free_bridge;
 ctx->logger = int_std_logger;

}

void _std_lib_environment_set_memory_allocator(standard_library_context* ctx, void* (*memory_allocator)(size_t, uint32_t)){

 ctx->memory_allocator = memory_allocator;

}

void _std_lib_environment_set_memory_deallocator(standard_library_context* ctx, _Bool (*memory_dealloc)(void*, uint32_t)){

 ctx->memory_dealloc = memory_dealloc;

}

void _std_lib_environment_set_logger(standard_library_context* ctx, void* (*logger)(byte*, size_t, uint8_t, uint32_t)){

 ctx->logger = logger;

}
# 2 "../lib/global/environment.h" 2
# 57 "../lib/foundation.h" 2







# 1 "../lib/mem/memory.c" 1
void* allocate(standard_library_context* ctx, size_t size){

 return ctx->memory_allocator(size, ctx->instance_id);

}

_Bool destroy(standard_library_context* ctx, void* ptr){

 return ctx->memory_dealloc(ptr, ctx->instance_id);

}
# 65 "../lib/foundation.h" 2







# 1 "../lib/log/log.h" 1
# 1 "../lib/log/log.c" 1

enum {LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_FATAL, LOG_PANIC};

void _log_warning(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_WARNING, ctx->instance_id);

}

void _log_error(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_ERROR, ctx->instance_id);

}

void _log_fatal(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_FATAL, ctx->instance_id);

}

void _log_panic(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_PANIC, ctx->instance_id);

}

void _log_info(standard_library_context* ctx, byte* data, size_t length){

 ctx->logger(data, length, LOG_INFO, ctx->instance_id);

}
# 1 "../lib/log/log.h" 2
# 73 "../lib/foundation.h" 2
# 2 "../lib/genlib.h" 2
# 1 "../lib/hashmap.h" 1
# 1 "../lib/string.h" 1




# 1 "../lib/utf8.h" 1





# 1 "../lib/foundation.h" 1
# 7 "../lib/utf8.h" 2







# 1 "../lib/types/utf8/utf8.h" 1
# 1 "../lib/types/utf8/utf8_structs.c" 1


typedef struct utf8_char utf8_char;

struct utf8_char{

 byte data[5];

 uint8_t size;

 uint32_t value;

};
# 2 "../lib/types/utf8/utf8.h" 2
# 1 "../lib/types/utf8/utf8.c" 1


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
    modifier = ((data[i] & (255 >> (size + 1))) << (6 * (size - 1)));

   else
    modifier = (data[i] & 63) << (6 * (size - i - 1));


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
    modifier = ((data[i] & (255 >> (size + 1))) << (6 * (size - 1)));

   else
    modifier = (data[i] & 63) << (6 * (size - i - 1));


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



}
# 2 "../lib/types/utf8/utf8.h" 2
# 15 "../lib/utf8.h" 2
# 6 "../lib/string.h" 2







# 1 "../lib/types/string/string.h" 1
# 1 "../lib/types/string/string_structs.c" 1
typedef struct string string;
typedef struct string_list string_list;

struct string{


 standard_library_context* ctx;


 utf8_char* data;


 _Bool case_insensitive;


 size_t length;


 size_t size;

};

struct string_list{


 string* s;


 string_list* next;

};
# 2 "../lib/types/string/string.h" 2
# 1 "../lib/types/string/string.c" 1


string* _string_new(standard_library_context*);
string* _string_new_fbytes(standard_library_context*, byte*);
void _string_delete(string*);
void _string_delete_ll(string_list*);
void _string_set_ci(string*, _Bool);


void _string_append_fbytes(string*, byte*);
void _string_append_fstring(string*, string*);
void _string_append_fchar(string*, utf8_char*);


void _string_insert(string*, string*, size_t);


long _string_position_fbytes(string*, byte*, size_t);
long _string_position_fstring(string*, string*, size_t);


byte* _string_pull(string*, size_t*);


utf8_char* _string_pull_carr(string*, size_t*);


_Bool _string_replace_all_fbytes(string*, byte*, byte*);
_Bool _string_replace_all_fstring(string*, string*, string*);

_Bool _string_replace_fbytes(string*, byte*, byte*, size_t);
_Bool _string_replace_fstring(string*, string*, string*, size_t);


_Bool _string_char_at(string*, size_t, utf8_char*);


string* _string_substr(string*, size_t, size_t);


string_list* _string_split(string*, size_t);

string_list* _string_split_delim(string*, utf8_char, size_t);


void _string_trim(string* str);


string_list* _string_split_fbytes(string*, byte*, size_t);
string_list* _string_split_fstring(string*, string*, size_t);


void _string_lowercase(string*);


void _string_uppercase(string*);


long _string_index_of(string*, utf8_char*, size_t);


_Bool _string_compare(string*, string*);





string* _string_new(standard_library_context* ctx){

 size_t total_bytes = 0;

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

 size_t i = 0, j = 0, length = 0, size = 0;
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

 size_t i, j = 0, k = 0, total = 0;
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

 size_t i, combined_size, new_size, new_byte_size;
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


void _string_insert(string* str, string* insert, size_t pos){

 size_t i, new_size, new_byte_size;
 utf8_char* data;

 if(!str || !insert)
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


long _string_position_fbytes(string* str, byte* find, size_t s_pos){

 long result;

 if(!str || !find)
  return -1;

 string* new_string = _string_new_fbytes(str->ctx, find);

 result = _string_position_fstring(str, new_string, s_pos);

 _string_delete(new_string);

 return result;

}


long _string_position_fstring(string* str, string* find, size_t s_pos){

 size_t i, j;

 if(!str || !find)
  return 0;

 if(s_pos < 0 || s_pos >= str->length)
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



_Bool _string_replace_fbytes(string* str, byte* pattern, byte* replace, size_t s_pos){

 _Bool result;

 if(!str || !pattern || !replace)
  return 0;

 string* pattern_string = _string_new_fbytes(str->ctx, pattern);
 string* replacement_string = _string_new_fbytes(str->ctx, replace);

 result = _string_replace_fstring(str, pattern_string, replacement_string, s_pos);

 _string_delete(pattern_string);
 _string_delete(replacement_string);

 return result;

}

_Bool _string_replace_fstring(string* str, string* pattern, string* replace, size_t s_pos){

 size_t i;
 long find_pos;
 string *s1 = 0, *s2 = 0;

 if(!str || !pattern || !replace)
  return 0;

 if(s_pos < 0 || s_pos >= str->length)
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

 string* pattern_string = _string_new_fbytes(str->ctx, pattern);
 string* replacement_string = _string_new_fbytes(str->ctx, replace);

 _string_replace_all_fstring(str, pattern_string, replacement_string);

 _string_delete(pattern_string);
 _string_delete(replacement_string);

}


_Bool _string_replace_all_fstring(string* str, string* pattern, string* replace){

 size_t i;
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


long _string_index_of(string* str, utf8_char* unichar, size_t pos){

 size_t i;
 utf8_char* data;

 if(!str || !unichar)
  return -1;

 if(pos < 0 || pos >= str->length)
  return 1;

 for(i = pos; i < str->length; i++){

  if(_utf8_compare(unichar, str->data + i, str->case_insensitive))
   return i;

 }

 return -1;

}


_Bool _string_char_at(string* str, size_t pos, utf8_char* unichar){

 if(!str || !unichar || pos < 0)
  return 0;

 if(pos >= str->length)
  return 0;

 *unichar = str->data[pos];

 return 1;
}


string* _string_substr(string* str, size_t s_pos, size_t e_pos){

 size_t i, new_byte_size, new_size;
 utf8_char* data;
 string* new_string;

 if(!str)
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


string_list* _string_split(string* str, size_t pos){

 size_t s1_size, s2_size;
 string_list* lst;
 byte* data;

 if(!str)
  return 0;

 if(pos <= 0 || pos >= str->length)
  return 0;

 lst = allocate(str->ctx, sizeof(string_list));
 lst->s = _string_substr(str, 0, pos);

 lst->next = allocate(str->ctx, sizeof(string_list));
 lst->next->s = _string_substr(str, pos + 1, str->length - 1);

 return lst;

}



string_list* _string_split_delim(string* str, utf8_char delim, size_t s_pos){

 string_list* lst;
 long pos;

 if(!str)
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

 size_t i, s_pos = 0, e_pos = 0;
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


string_list* _string_split_fbytes(string* str, byte* delim, size_t s_pos){

 string* delim_string;
 string_list* lst;

 if(!str || !delim)
  return 0;

 delim_string = _string_new_fbytes(str->ctx, delim);

 lst = _string_split_fstring(str, delim_string, s_pos);

 _string_delete(delim_string);


 return lst;

}

string_list* _string_split_fstring(string* str, string* delim, size_t s_pos){

 string_list* lst;
 long pos;

 if(!str || !delim)
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

 size_t i;
 utf8_char* data;

 if(!str)
  return;

 for(i = 0; i < str->length; i++)
  _utf8_lower(str->data + i);


}


void _string_uppercase(string* str){

 size_t i;

 if(!str)
  return;

 for(i = 0; i < str->length; i++)
  _utf8_upper(str->data + i);

}


_Bool _string_compare(string* str1, string* str2){

 size_t i;

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
# 2 "../lib/types/string/string.h" 2
# 14 "../lib/string.h" 2
# 2 "../lib/hashmap.h" 2
# 1 "../lib/map.h" 1
# 13 "../lib/map.h"
# 1 "../lib/containers/map/map.h" 1
# 1 "../lib/containers/map/map_structs.c" 1
typedef struct map map;
typedef struct map_entry map_entry;
typedef struct hashmap_entry hashmap_entry;


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
# 2 "../lib/containers/map/map.h" 2
# 1 "../lib/containers/map/map.c" 1


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
# 2 "../lib/containers/map/map.h" 2
# 14 "../lib/map.h" 2
# 3 "../lib/hashmap.h" 2
# 1 "../lib/containers/map/hashmap.h" 1
# 1 "../lib/containers/map/hashmap.c" 1


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


size_t int_hashmap_hash(byte* input){

 size_t i = 0, res = 0;

 while(input[i] && i < 1000000)
  res += (input[i++] * i);

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
# 1 "../lib/containers/map/hashmap.h" 2
# 3 "../lib/hashmap.h" 2
# 3 "../lib/genlib.h" 2
# 1 "../lib/queue.h" 1
# 14 "../lib/queue.h"
# 1 "../lib/containers/queue/queue.h" 1
# 1 "../lib/containers/queue/queue_structs.c" 1
typedef struct queue queue;
typedef struct queue_entry queue_entry;
typedef struct priority_queue priority_queue;


struct queue{


 standard_library_context* ctx;


 byte** entries;


 size_t size;


 size_t used;


 size_t front;


 size_t back;

};


struct priority_queue{


 standard_library_context* ctx;


 size_t offset;


 void* heap;

};
# 2 "../lib/containers/queue/queue.h" 2
# 1 "../lib/containers/queue/queue.c" 1
# 10 "../lib/containers/queue/queue.c"
queue* _queue_new(standard_library_context*, size_t);


void _queue_reset(queue*);


void _queue_delete(queue*);


void _queue_enqueue(queue*, void*);


void* _queue_dequeue(queue*);


void* _queue_peek(queue*);


static void int_queue_resize(queue* q){


 size_t new_size = q->size * 2, i, j = 0;


 byte** entries = allocate(q->ctx, sizeof(size_t) * new_size);


 for(i = q->front; j < q->size; i = ((i + 1) % q->size)){

  entries[j] = q->entries[i];
  j++;

 }

 q->front = 0;
 q->back = q->size;
 q->size = new_size;


 destroy(q->ctx, q->entries);


 q->entries = entries;

}

void _queue_delete(queue* q){

 if(!q)
  return;

 destroy(q->ctx, q->entries);
 destroy(q->ctx, q);

}

queue* _queue_new(standard_library_context* ctx, size_t start_size){

 if(!ctx || !start_size)
  return 0;


 queue* q = allocate(ctx, sizeof(queue));


 q->entries = allocate(ctx, sizeof(size_t) * start_size);
 q->size = start_size;
 q->ctx = ctx;

 return q;

}

void _queue_reset(queue* q){


 destroy(q->ctx, q->entries);

 q->entries = allocate(q->ctx, q->size);
 q->used = 0;
 q->front = 0;
 q->back = 0;

}


void* _queue_dequeue(queue* q){

 void* entry;

 if(!q)
  return 0;

 size_t frontpos = q->front;

 if(!q->used)
  return 0;

 if(frontpos == q->size - 1)
  frontpos = 0;
 else
  frontpos++;

 entry = (void*)(q->entries[q->front]);
 q->front = frontpos;
 q->used--;

 return entry;

}

void* _queue_peek(queue* q){

 void* entry;

 if(!q)
  return 0;

 if(!q->used)
  return 0;

 entry = (void*)(q->entries[q->front]);

 return entry;

}

void _queue_enqueue(queue* q, void* data){

 if(!q)
  return;

 size_t backpos;

 if(q->used == q->size)
  int_queue_resize(q);

 if(q->back == q->size - 1)
  backpos = 0;

 else
  backpos = q->back + 1;

 q->entries[q->back] = data;

 q->back = backpos;
 q->used++;

}
# 2 "../lib/containers/queue/queue.h" 2
# 15 "../lib/queue.h" 2
# 4 "../lib/genlib.h" 2
# 1 "../lib/stack.h" 1
# 13 "../lib/stack.h"
# 1 "../lib/containers/stack/stack.h" 1
# 1 "../lib/containers/stack/stack_structs.c" 1
typedef struct stack stack;
typedef struct stack_item stack_item;


struct stack{


 standard_library_context* ctx;


 byte** entries;


 size_t size;


 size_t top;

};
# 2 "../lib/containers/stack/stack.h" 2
# 1 "../lib/containers/stack/stack.c" 1







stack* _stack_new(standard_library_context*, size_t);


void _stack_reset(stack*);


void _stack_delete(stack*);


void _stack_delete_all(stack*, void (void*));


void _stack_push(stack*, void*);


void* _stack_pop(stack*);


void* _stack_peek(stack*);




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
# 2 "../lib/containers/stack/stack.h" 2
# 14 "../lib/stack.h" 2
# 5 "../lib/genlib.h" 2
# 1 "../lib/string.h" 1
# 6 "../lib/genlib.h" 2
# 1 "../lib/vector.h" 1
# 13 "../lib/vector.h"
# 1 "../lib/containers/list/vector.h" 1
# 1 "../lib/containers/list/vector_structs.c" 1
typedef struct vector vector;

struct vector{


 standard_library_context* ctx;


 size_t size;


 size_t used;


 size_t data_size;


 size_t iterator;


 byte* data;


 void* ext;

};
# 2 "../lib/containers/list/vector.h" 2
# 1 "../lib/containers/list/vector.c" 1


vector* _vector_new(standard_library_context*, size_t, size_t);


void _vector_delete(vector*);


void _vector_add(vector*, void*);


void* _vector_get(vector*, size_t);


void _vector_remove(vector*, size_t);


void _vector_reset_iterator(vector*);


_Bool _vector_has_next(vector*);


void* _vector_get_next(vector*);



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

 if(pos < vect->used)
  return (void*)(vect->data + (pos * vect->data_size));

 return 0;

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
# 2 "../lib/containers/list/vector.h" 2
# 14 "../lib/vector.h" 2
# 7 "../lib/genlib.h" 2
# 1 "../lib/list.h" 1
# 13 "../lib/list.h"
# 1 "../lib/containers/list/list.h" 1
# 1 "../lib/containers/list/list_structs.c" 1
typedef struct list list;

struct list{


 standard_library_context* ctx;


 size_t size;


 size_t used;


 size_t iterator;


 byte** data;

};
# 2 "../lib/containers/list/list.h" 2
# 1 "../lib/containers/list/list.c" 1


list* _list_new(standard_library_context*, size_t);


void _list_delete(list*);


void _list_add(list*, void*);


void* _list_get(list*, size_t);


_Bool _list_remove(list*, size_t);


void _list_reset_iterator(list*);


_Bool _list_has_next(list*);


void* _list_get_next(list*);


_Bool _list_merge(list*, list*);

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
# 2 "../lib/containers/list/list.h" 2
# 14 "../lib/list.h" 2
# 8 "../lib/genlib.h" 2
# 1 "../lib/utf8.h" 1
# 9 "../lib/genlib.h" 2
# 1 "../lib/binary_heap.h" 1
# 12 "../lib/binary_heap.h"
# 1 "../lib/containers/heap/binary_heap.h" 1
# 1 "../lib/containers/heap/binary_heap_structs.c" 1
typedef struct binary_heap binary_heap;
typedef struct binary_heap_entry binary_heap_entry;

enum{BINARY_HEAP_MAX, BINARY_HEAP_MIN};

struct binary_heap_entry{


 long key;


 void* data;

};

struct binary_heap{


 standard_library_context* ctx;


 binary_heap_entry* data;


 size_t iterator;


 uint8_t ordering;


 size_t size;


 size_t used;

};
# 2 "../lib/containers/heap/binary_heap.h" 2
# 1 "../lib/containers/heap/binary_heap.c" 1

binary_heap* _binary_heap_new(standard_library_context*, size_t);


_Bool _binary_heap_delete(binary_heap*);


void _binary_heap_insert(binary_heap*, long, void*);


_Bool _binary_heap_remove(binary_heap*, size_t, binary_heap_entry*);


void _binary_heap_ordering(binary_heap*, uint8_t);


void _binary_heap_reset_iterator(binary_heap*);


_Bool _binary_heap_has_next(binary_heap*);


binary_heap_entry* _binary_heap_get_next(binary_heap*);


binary_heap_entry* _binary_heap_get(binary_heap*, size_t);


_Bool _binary_heap_remove_root(binary_heap*, binary_heap_entry*);


_Bool _binary_heap_peek(binary_heap*, binary_heap_entry*);


void _binary_heap_build(binary_heap*);





static void int_binary_heap_swap(binary_heap_entry* e1, binary_heap_entry* e2){

 binary_heap_entry ent;

 ent = *e1;

 e1->key = e2->key;
 e1->data = e2->data;

 e2->key = ent.key;
 e2->data = ent.data;

}


static void int_binary_heap_resize(binary_heap* heap, size_t new_size){

 binary_heap_entry* tmp;
 size_t i;

 if(!heap)
  return;

 if(new_size < heap->used)
  return;

 tmp = heap->data;

 heap->data = allocate(heap->ctx, sizeof(binary_heap_entry) * new_size);

 for(i = 0; i < heap->used; i++)
  heap->data[i] = tmp[i];

 heap->size = new_size;
 destroy(heap->ctx, tmp);

}


static void int_binary_heap_max_heapify(binary_heap* heap, size_t pos){

 size_t parent;

 if(!heap)
  return;

 if(pos >= heap->used)
  return;

 while(pos){

  parent = ((pos - 1) / 2);

  if(heap->data[pos].key > heap->data[parent].key)
   int_binary_heap_swap(heap->data + pos, heap->data + parent);
  else
   return;

  pos = parent;

 }

}


static void int_binary_heap_min_heapify(binary_heap* heap, size_t pos){

 size_t parent;

 if(!heap)
  return;

 if(pos >= heap->used)
  return;

 while(pos){

  parent = ((pos - 1) / 2);

  if(heap->data[pos].key < heap->data[parent].key)
   int_binary_heap_swap(heap->data + pos, heap->data + parent);
  else
   return;

  pos = parent;

 }

}


static void int_binary_heap_max_reverse_heapify(binary_heap* heap, size_t pos){

 size_t left, right;

 if(!heap)
  return;

 while(pos < heap->used){

  left = (2 * pos) + 1;
  right = (2 * pos) + 2;


  if(left >= heap->used)
   return;


  else if(heap->data[left].key > heap->data[pos].key && right >= heap->used){

   int_binary_heap_swap(heap->data + left, heap->data + pos);
   return;

  }


  else if(heap->data[left].key > heap->data[pos].key && heap->data[left].key > heap->data[right].key){

   int_binary_heap_swap(heap->data + left, heap->data + pos);
   pos = left;

  }

  else if(right >= heap->used)
   return;


  else if(heap->data[right].key > heap->data[pos].key && heap->data[right].key > heap->data[left].key){

   int_binary_heap_swap(heap->data + right, heap->data + pos);
   pos = right;

  }
  else
   return;

 }

}


static void int_binary_heap_min_reverse_heapify(binary_heap* heap, size_t pos){

 size_t left, right;

 if(!heap)
  return;

 while(pos < heap->used){

  left = (2 * pos) + 1;
  right = (2 * pos) + 2;


  if(left >= heap->used)
   return;


  else if(heap->data[left].key < heap->data[pos].key && right >= heap->used){

   int_binary_heap_swap(heap->data + left, heap->data + pos);
   return;

  }


  else if(heap->data[left].key < heap->data[pos].key && heap->data[left].key < heap->data[right].key){

   int_binary_heap_swap(heap->data + left, heap->data + pos);
   pos = left;

  }


  else if(right >= heap->used)
   return;


  else if(heap->data[right].key < heap->data[pos].key && heap->data[right].key < heap->data[left].key){

   int_binary_heap_swap(heap->data + right, heap->data + pos);
   pos = right;

  }
  else
   return;

 }
}


binary_heap* _binary_heap_new(standard_library_context* ctx, size_t start_size){

 binary_heap* heap;

 if(!ctx || !start_size)
  return 0;

 heap = allocate(ctx, sizeof(binary_heap));
 heap->data = allocate(ctx, sizeof(binary_heap_entry) * start_size);
 heap->size = start_size;
 heap->ctx = ctx;
 heap->ordering = BINARY_HEAP_MAX;

 return heap;

}

void _binary_heap_ordering(binary_heap* heap, uint8_t ordering){

 size_t i;

 if(!heap)
  return;

 heap->ordering = ordering;

 if(ordering == BINARY_HEAP_MAX){

  for(i = heap->used / 2; i >= 0; i--)
   int_binary_heap_max_reverse_heapify(heap, i);

 }
 else{

  for(i = heap->used / 2; i >= 0; i--)
   int_binary_heap_min_reverse_heapify(heap, i);
 }


}

void _binary_heap_build(binary_heap* heap){

 size_t i;

 if(!heap)
  return;

 if(heap->ordering == BINARY_HEAP_MAX){

  for(i = heap->used / 2; i >= 0; i--)
   int_binary_heap_max_reverse_heapify(heap, i);

 }
 else{

  for(i = heap->used / 2; i >= 0; i--)
   int_binary_heap_min_reverse_heapify(heap, i);

 }

}

void _binary_heap_insert(binary_heap* heap, long key, void* data){

 if(!heap)
  return;

 if(heap->used == heap->size)
  int_binary_heap_resize(heap, heap->size * 2);

 heap->data[heap->used].key = key;
 heap->data[heap->used].data = data;

 if(heap->ordering == BINARY_HEAP_MAX)
  int_binary_heap_max_heapify(heap, heap->used++);
 else
  int_binary_heap_min_heapify(heap, heap->used++);

}

_Bool _binary_heap_remove(binary_heap* heap, size_t pos, binary_heap_entry* entry){

 if(!heap)
  return 0;

 if(pos > heap->used)
  return 0;

 *entry = heap->data[pos];
 heap->data[pos] = heap->data[heap->used-- - 1];
 _binary_heap_build(heap);

 return 1;

}

_Bool _binary_heap_delete(binary_heap* heap){

 if(!heap)
  return 0;

 destroy(heap->ctx, heap->data);
 destroy(heap->ctx, heap);
 return 1;

}

void _binary_heap_reset_iterator(binary_heap* heap){

 if(!heap)
  return;

 heap->iterator = 0;

}

_Bool _binary_heap_has_next(binary_heap* heap){

 if(!heap)
  return 0;

 if(heap->iterator < heap->used)
  return 1;

 return 0;

}

_Bool _binary_heap_remove_root(binary_heap* heap, binary_heap_entry* entry){

 if(!heap || !entry)
  return 0;

 if(!heap->used)
  return 0;

 *entry = heap->data[0];

 int_binary_heap_swap(heap->data, heap->data + (heap->used-- - 1));

 if(heap->ordering == BINARY_HEAP_MAX)
  int_binary_heap_max_reverse_heapify(heap, 0);
 else
  int_binary_heap_min_reverse_heapify(heap, 0);

 return 1;

}

_Bool _binary_heap_peek(binary_heap* heap, binary_heap_entry* entry){

 if(!heap || !entry)
  return 0;

 if(!heap->used)
  return 0;

 *entry = heap->data[0];

 return 1;

}

binary_heap_entry* _binary_heap_get_next(binary_heap* heap){

 if(!heap)
  return 0;

 if(heap->iterator < heap->used)
   return heap->data + heap->iterator++;

 return 0;

}

binary_heap_entry* _binary_heap_get(binary_heap* heap, size_t index){

 binary_heap_entry* entry = 0;

 if(!heap)
  return 0;

 if(index < heap->used)
  return heap->data + index;

 return 0;

}
# 2 "../lib/containers/heap/binary_heap.h" 2
# 13 "../lib/binary_heap.h" 2
# 10 "../lib/genlib.h" 2
# 1 "../lib/priority_queue.h" 1
# 20 "../lib/priority_queue.h"
# 1 "../lib/containers/queue/priority_queue.h" 1
# 1 "../lib/containers/queue/priority_queue.c" 1

priority_queue* _priority_queue_new(standard_library_context*, size_t);


void _priority_queue_delete(priority_queue*);


void _priority_queue_enqueue(priority_queue*, long, void*);


void* _priority_queue_dequeue(priority_queue*);


void* _priority_queue_peek(priority_queue*);


void _priority_queue_rebuild(priority_queue*);


void _priority_queue_type(priority_queue*, uint8_t);


binary_heap_entry* _priority_queue_get(priority_queue*, size_t);


priority_queue* _priority_queue_new(standard_library_context* ctx, size_t start_size){

 priority_queue* pq;

 if(!ctx || !start_size)
  return 0;

 pq = allocate(ctx, sizeof(priority_queue));
 pq->heap = _binary_heap_new(ctx, start_size);

 pq->ctx = ctx;

 return pq;

}

void _priority_queue_delete(priority_queue* queue){

 size_t i;

 if(!queue)
  return;

 _binary_heap_delete(queue->heap);

 destroy(queue->ctx, queue);

}

void _priority_queue_enqueue(priority_queue* queue, long priority, void* data){

 queue_entry* entry;

 if(!queue)
  return;

 _binary_heap_insert(queue->heap, priority, data);

}

void* _priority_queue_dequeue(priority_queue* queue){

 binary_heap_entry heap_entry;

 if(!queue)
  return 0;

 if(_binary_heap_remove_root(queue->heap, &heap_entry))
  return heap_entry.data;


 return 0;

}

void* _priority_queue_peek(priority_queue* queue){

 binary_heap_entry heap_entry;

 if(!queue)
  return 0;

 if(_binary_heap_peek(queue->heap, &heap_entry))
  return heap_entry.data;


 return 0;

}

binary_heap_entry* _priority_queue_get(priority_queue* queue, size_t pos){

 if(!queue)
  return 0;

 return _binary_heap_get(queue->heap, pos);

}

void _priority_queue_rebuild(priority_queue* queue){

 if(!queue)
  return;

 _binary_heap_build(queue->heap);

}

void _priority_queue_type(priority_queue* queue, uint8_t type){

 if(!queue)
  return;

 _binary_heap_ordering(queue->heap, type);

}
# 1 "../lib/containers/queue/priority_queue.h" 2
# 21 "../lib/priority_queue.h" 2
# 11 "../lib/genlib.h" 2
# 1 "../lib/graph.h" 1
# 29 "../lib/graph.h"
# 1 "../lib/containers/graph/graph.h" 1
# 1 "../lib/containers/graph/graph_structs.c" 1
typedef struct graph graph;
typedef struct graph_edge graph_edge;
typedef struct graph_node graph_node;
typedef struct graph_path graph_path;
typedef struct graph_walk_config graph_walk_config;

struct graph{


 standard_library_context* ctx;


 graph_node* nodes;


 size_t size;


 size_t used;


 graph_path* path;


 uint8_t type;


 size_t iterator;


 _Bool helper_map_enabled;


 map* helper_map;


 graph_walk_config* walk;

};

struct graph_node{


 long key;


 graph_edge* edges;


 graph_edge* last_edge;


 size_t edge_total;


 graph_node* parent;


 size_t level;


 void* data;

};

struct graph_edge{


 graph_node* to;


 size_t mask;


 void* data;


 long weight;


 graph_edge* next;

};

struct graph_walk_config{


 _Bool dfs_root_ret;


 queue* bfs_queue;


 stack* dfs_stack;

};

struct graph_path{


 standard_library_context* ctx;


 size_t hops;


 graph_node** list;


 graph_edge** edges;

};
# 2 "../lib/containers/graph/graph.h" 2
# 1 "../lib/containers/graph/graphmap.c" 1
# 3 "../lib/containers/graph/graph.h" 2
# 1 "../lib/containers/graph/graph.c" 1



graph* _graph_new(standard_library_context*, size_t);


_Bool _graph_delete(graph*);


graph_node* _graph_add_node(graph*, long, void*);


_Bool _graph_add_edge(graph*, long, long, graph_edge**);


graph_node* _graph_get_node(graph*, long);


graph_edge* _graph_get_edge(graph*, long, long);


_Bool _graph_add_double_edge(graph*, long, long, graph_edge**, graph_edge**);


_Bool _graph_delete_node(graph*, long);


_Bool _graph_delete_edge(graph*, long, long);


_Bool _graph_bfs(graph*, long, long, graph_path*);


_Bool _graph_dfs(graph*, long, long, graph_path*);


void _graph_clear_paths(graph*);


void _graph_delete_path(graph_path);


void _graph_reset_iterator(graph*);


_Bool _graph_has_next(graph*);


graph_node* _graph_get_next(graph*);




_Bool _graph_walk_init(graph*, long root);


void _graph_walk_bfs_queue_reset(graph*);


void _graph_walk_dfs_stack_reset(graph*);


graph_node* _graph_walk_bfs_next(graph*);


graph_node* _graph_walk_dfs_next(graph*);


void _graph_walk_end(graph*);



void _graph_enable_helper_map(graph*);

void _graph_disable_helper_map(graph*);



static void int_graph_resize(graph* gr, size_t new_size){

 graph_node* new_nodes;
 size_t i, ns;

 if(!gr)
  return;

 if(new_size <= gr->size)
  return;

 ns = sizeof(graph_node) * new_size;
 new_nodes = allocate(gr->ctx, ns);

 for(i = 0; i < gr->used; i++)
  new_nodes[i] = gr->nodes[i];

 destroy(gr->ctx, gr->nodes);

 gr->nodes = new_nodes;
 gr->size = new_size;

}


static void int_graph_node_delete_edges(graph* gr, graph_node* node){

 graph_edge *current, *tmp;

 if(!gr || !node)
  return;

 current = node->edges;

 while(current){

  tmp = current;
  current = tmp->next;
  destroy(gr->ctx, tmp);

 }
}

static _Bool int_graph_node_remove_edge(graph* gr, graph_node* node, long key){

 graph_edge *next, *prev = 0, *tmp;
 _Bool success = 0;

 if(!gr || !node)
  return 0;

 next = node->edges;

 while(next){

  if(next->to->key == key){

   success = 1;

   tmp = next->next;

   if(tmp){

    *next = *tmp;
    destroy(gr->ctx, tmp);

   }
   else{

    node->last_edge = prev;
    prev->next = 0;
    destroy(gr->ctx, next);

   }

  }

  prev = next;
  next = next->next;

 }

 return success;

}


static void int_graph_build_path(graph* gr, graph_node* node, graph_path* path){

 graph_node* next;
 size_t hops = 0, data_size = 0, i;

 if(!gr || !node || !path)
  return;

 next = node;

 while(next){

  hops++;
  next = next->parent;

 }


 data_size = (hops + 1) * sizeof(size_t);

 path->hops = hops;
 path->list = allocate(gr->ctx, data_size);
 path->ctx = gr->ctx;

 next = node;

 for(i = hops - 1; i >= 0; i--){

  path->list[i] = next;

  if(!next->parent)
   break;

  next = next->parent;

 }

}

graph* _graph_new(standard_library_context* ctx, size_t start_size){

 graph* gr;

 if(!ctx)
  return 0;

 gr = allocate(ctx, sizeof(graph));
 gr->nodes = allocate(ctx, sizeof(graph_node) * start_size);
 gr->ctx = ctx;
 gr->size = start_size;

 return gr;

}

_Bool _graph_delete(graph* gr){

 size_t i, j;
 graph_edge *c, *ce;

 if(!gr)
  return 0;


 for(i = 0; i < gr->size; i++)
  int_graph_node_delete_edges(gr, gr->nodes + i);


 if(gr->walk){

  _queue_delete(gr->walk->bfs_queue);
  _stack_delete(gr->walk->dfs_stack);
  destroy(gr->ctx, gr->walk);

 }

 destroy(gr->ctx, gr->nodes);
 destroy(gr->ctx, gr);

 return 1;
}

void _graph_delete_path(graph_path path){

 if(path.list)
  destroy(path.ctx, path.list);

}

graph_node* _graph_get_node(graph* gr, long key){

 size_t i;

 if(!gr)
  return 0;

 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == key)
   return gr->nodes + i;

 }

 return 0;

}

graph_edge* _graph_get_edge(graph* gr, long from, long to){

 size_t i;
 graph_node *from_node = 0, *to_node = 0;
 graph_edge* e;

 if(!gr)
  return 0;


 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == from)
   from_node = gr->nodes + i;

  else if(gr->nodes[i].key == to)
   to_node = gr->nodes + i;

  if(to_node && from_node)
   break;

 }

 if(!to_node || !from_node)
  return 0;

 e = from_node->edges;

 while(e){

  if(e->to == to_node)
   return e;

  e = e->next;
 }

 return 0;
}

graph_node* _graph_add_node(graph* gr, long key, void* ptr){

 size_t i;
 graph_node *c_node;

 if(!gr)
  return 0;

 if(gr->size == gr->used)
  int_graph_resize(gr, gr->size * 2);

 c_node = gr->nodes + gr->used++;

 c_node->key = key;
 c_node->data = ptr;

 return c_node;

}

_Bool _graph_add_edge(graph* gr, long from, long to, graph_edge** to_edge){

 size_t i;
 graph_node *n1 = 0, *n2 = 0;
 graph_edge** e;

 if(!gr)
  return 0;

 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == from)
   n1 = gr->nodes + i;

  if(gr->nodes[i].key == to)
   n2 = gr->nodes + i;

  if(n1 && n2)
   break;

 }

 if(!n1 || !n2){

  _log_error(gr->ctx, "One of the nodes does not exist.", 32);
  return 0;

 }


 e = &n1->last_edge;

 if(!(*e))
  e = &n1->edges;

 else
  e = &((*e)->next);


 *e = allocate(gr->ctx, sizeof(graph_edge));
 (*e)->to = n2;
 *to_edge = *e;
 n1->last_edge = *e;

 return 1;

}

_Bool _graph_add_double_edge(graph* gr, long from, long to, graph_edge** edge_to, graph_edge** edge_back){

 size_t i;
 graph_node *n1 = 0, *n2 = 0;
 graph_edge** e;

 if(!gr)
  return 0;

 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == from)
   n1 = gr->nodes + i;

  if(gr->nodes[i].key == to)
   n2 = gr->nodes + i;

  if(n1 && n2)
   break;

 }

 if(!n1 || !n2){

  _log_error(gr->ctx, "One of the nodes does not exist.", 32);
  return 0;

 }


 e = &n1->last_edge;

 if(!(*e))
  e = &n1->edges;
 else
  e = &((*e)->next);

 *e = allocate(gr->ctx, sizeof(graph_edge));
 (*e)->to = n2;
 *edge_to = *e;
 n1->last_edge = *e;


 e = &n2->last_edge;

 if(!(*e))
  e = &n2->edges;
 else
  e = &((*e)->next);

 *e = allocate(gr->ctx, sizeof(graph_edge));
 (*e)->to = n1;
 *edge_back = *e;
 n2->last_edge = *e;

 return 1;

}

_Bool _graph_delete_node(graph* gr, long key){

 size_t i, j;
 graph_edge **c, *next, *tmp;
 graph_node* node;
 _Bool node_found = 0;

 if(!gr)
  return 0;

 for(i = 0; i < gr->used; i++){


  if(gr->nodes[i].key == key){

   node_found = 1;

   int_graph_node_delete_edges(gr, gr->nodes + i);

   for(j = (i + 1); j < gr->used; j++)
    gr->nodes[j - 1] = gr->nodes[j];

   node = gr->nodes + gr->used-- - 1;

   node->key = 0;
   node->edges = 0;
   node->parent = 0;
   node->level = 0;
   node->data = 0;

  }
  else
   int_graph_node_remove_edge(gr, gr->nodes + i, key);


 }

 return node_found;

}

_Bool _graph_delete_edge(graph* gr, long from, long to){

 size_t i;
 graph_node* n;

 if(!gr)
  return 0;

 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == from){

   return int_graph_node_remove_edge(gr, gr->nodes + i, to);

  }
 }

 return 0;

}

void _graph_clear_paths(graph* gr){

 size_t i;

 if(!gr)
  return;

 for(i = 0; i < gr->used; i++){

  gr->nodes[i].parent = 0;
  gr->nodes[i].level = 0;

 }
}

_Bool _graph_bfs(graph* gr, long start, long end, graph_path* path){

 size_t i;
 queue* bfs_queue;
 graph_node *root = 0, *current = 0, *discovery = 0;
 graph_edge* c_edge;

 if(!gr || !path)
  return 0;


 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == start)
   root = gr->nodes + i;

 }

 if(!root)
  return 0;


 root->level = 1;


 bfs_queue = _queue_new(gr->ctx, 10);


 _queue_enqueue(bfs_queue, root);

 while(bfs_queue->used){

  current = (graph_node*)_queue_dequeue(bfs_queue);
  c_edge = current->edges;

  while(c_edge){


   discovery = c_edge->to;


   if(!discovery->level){

    discovery->level = current->level + 1;
    discovery->parent = current;

    if(discovery->key == end){

     _queue_delete(bfs_queue);
     int_graph_build_path(gr, discovery, path);
     return 1;

    }

    _queue_enqueue(bfs_queue, discovery);

   }

   c_edge = c_edge->next;
  }

 }

 _queue_delete(bfs_queue);
 return 0;

}

_Bool _graph_dfs(graph* gr, long start, long end, graph_path* path){

 size_t i;
 stack* dfs_stack;
 graph_node *root = 0, *current = 0, *discovery = 0;
 graph_edge* c_edge;

 if(!gr | !path)
  return 0;


 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == start)
   root = gr->nodes + i;

 }

 if(!root)
  return 0;


 root->level = 1;


 dfs_stack = _stack_new(gr->ctx, 10);
 _stack_push(dfs_stack, root);

 while(dfs_stack->top){

  current = (graph_node*)_stack_peek(dfs_stack);
  c_edge = current->edges;

  while(c_edge){

   discovery = c_edge->to;


   if(!discovery->level){

    discovery->level = current->level + 1;
    discovery->parent = current;

    if(discovery->key == end){

     _stack_delete(dfs_stack);
     int_graph_build_path(gr, discovery, path);
     return 1;

    }

    _stack_push(dfs_stack, discovery);
    break;

   }

   c_edge = c_edge->next;

  }

  if(!c_edge)
   _stack_pop(dfs_stack);


 }

 _stack_delete(dfs_stack);
 return 1;

}

void _graph_reset_iterator(graph* gr){

 if(!gr)
  return;

 gr->iterator = 0;

}

_Bool _graph_has_next(graph* gr){

 if(!gr)
  return 0;

 if(gr->iterator < gr->used)
  return 1;

 return 0;

}

graph_node* _graph_get_next(graph* gr){

 if(!gr)
  return 0;

 if(gr->iterator >= gr->used)
  return 0;

 return gr->nodes + gr->iterator++;

}

_Bool _graph_walk_init(graph* gr, long root){

 graph_walk_config* config;
 size_t i;

 if(!gr)
  return 0;

 _graph_clear_paths(gr);

 if(gr->walk){

  _queue_reset(gr->walk->bfs_queue);
  _stack_reset(gr->walk->dfs_stack);
  return 0;

 }

 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == root){

   gr->nodes[i].level = 1;
   config = allocate(gr->ctx, sizeof(graph_walk_config));
   config->bfs_queue = _queue_new(gr->ctx, 10);
   config->dfs_stack = _stack_new(gr->ctx, 10);
   _queue_enqueue(config->bfs_queue, gr->nodes + i);
   _stack_push(config->dfs_stack, gr->nodes + i);
   gr->walk = config;

   return 1;

  }
 }

 return 0;

}

void _graph_walk_bfs_queue_reset(graph* gr){

 if(!gr)
  return;

 if(!gr->walk)
  return;

 _queue_reset(gr->walk->bfs_queue);

}

void _graph_walk_dfs_stack_reset(graph* gr){

 if(!gr)
  return;

 if(!gr->walk)
  return;

 gr->walk->dfs_root_ret = 0;
 _stack_reset(gr->walk->dfs_stack);

}

graph_node* _graph_walk_dfs_next(graph* gr){

 stack* dfs_stack;
 graph_node *c_node, *discovered;
 graph_edge* c_edge;

 if(!gr)
  return 0;

 if(!gr->walk)
  return 0;

 dfs_stack = gr->walk->dfs_stack;

 if(!gr->walk->dfs_root_ret){

  gr->walk->dfs_root_ret = 1;
  return (graph_node*)_stack_peek(dfs_stack);

 }

 while(dfs_stack->top){

  c_node = (graph_node*)_stack_peek(dfs_stack);
  c_edge = c_node->edges;

  while(c_edge){

   discovered = c_edge->to;


   if(!discovered->level){

    discovered->level = c_node->level + 1;
    discovered->parent = c_node;
    _stack_push(dfs_stack, discovered);

    return discovered;

   }

   c_edge = c_edge->next;

  }

  _stack_pop(dfs_stack);

 }

 return 0;

}

graph_node* _graph_walk_bfs_next(graph* gr){

 queue* bfs_queue;
 graph_node *c_node, *discovered;
 graph_edge* c_edge;

 if(!gr)
  return 0;

 if(!gr->walk)
  return 0;

 bfs_queue = gr->walk->bfs_queue;

 while(bfs_queue->used){

  c_node = (graph_node*)_queue_dequeue(bfs_queue);
  c_edge = c_node->edges;

  while(c_edge){

   discovered = c_edge->to;

   if(!discovered->level){

    discovered->level = c_node->level + 1;
    discovered->parent = c_node;
    _queue_enqueue(bfs_queue, discovered);

   }

   c_edge = c_edge->next;

  }

  return c_node;

 }

 return 0;
}

void _graph_walk_end(graph* gr){

 if(!gr)
  return;

 if(!gr->walk)
  return;

 _queue_delete(gr->walk->bfs_queue);
 _stack_delete(gr->walk->dfs_stack);
 destroy(gr->ctx, gr->walk);

}
# 3 "../lib/containers/graph/graph.h" 2
# 30 "../lib/graph.h" 2
# 12 "../lib/genlib.h" 2
# 1 "../lib/weighted_graph.h" 1

# 1 "../lib/graph.h" 1
# 3 "../lib/weighted_graph.h" 2
# 16 "../lib/weighted_graph.h"
# 1 "../lib/containers/graph/weighted_graph.h" 1
# 1 "../lib/containers/graph/weighted_graph.c" 1



graph* _weighted_graph_new(standard_library_context*, size_t);


_Bool _weighted_graph_delete(graph*);


graph_node* _weighted_graph_add_node(graph*, long, void*);


_Bool _weighted_graph_add_edge(graph*, long, long, long, graph_edge**);


_Bool _weighted_graph_add_masked_edge(graph*, long, long, long, size_t, graph_edge**);


_Bool _weighted_graph_delete_node(graph*, long);


_Bool _weighted_graph_delete_edge(graph*, long, long);


void _weighted_graph_clear_paths(graph*);


_Bool _weighted_graph_spath(graph*, long, long, graph_path*);


_Bool _weighted_graph_spath_amask(graph*, long, long, size_t, graph_path*);


_Bool _weighted_graph_edge_sort(graph*);







graph* _weighted_graph_new(standard_library_context* ctx, size_t start_size){

 graph* new_graph;

 new_graph = _graph_new(ctx, start_size);
 new_graph->type = 1;

 return new_graph;

}

_Bool _weighted_graph_delete(graph* gr){

 return _graph_delete(gr);

}

graph_node* _weighted_graph_add_node(graph* gr, long key, void* data){

 return _graph_add_node(gr, key, data);

}

_Bool _weighted_graph_add_edge(graph* gr, long from, long to, long weight, graph_edge** edge_to){

 _Bool success = 0;

 if(!gr || !edge_to)
  return 0;

 success = _graph_add_edge(gr, from, to, edge_to);

 if(success)
  (*edge_to)->weight = weight;

 return success;

}

_Bool _weighted_graph_add_double_edge(graph* gr, long from, long to, long weight, graph_edge** edge_to, graph_edge** edge_back){

 _Bool success = 0;

 if(!gr || !edge_to || !edge_back)
  return 0;

 success = _graph_add_double_edge(gr, from, to, edge_to, edge_back);

 if(success){

  (*edge_to)->weight = weight;
  (*edge_back)->weight = weight;

 }

 return success;

}

_Bool _weighted_graph_add_masked_edge(graph* gr, long from, long to, long weight, size_t mask, graph_edge** to_edge){

 _Bool success = 0;

 success = _graph_add_edge(gr, from, to, to_edge);

 if(!gr || !to_edge)
  return 0;

 if(success){

  (*to_edge)->weight = weight;
  (*to_edge)->mask = mask;

 }

 return success;

}

_Bool _weighed_graph_delete_node(graph* gr, long key){

 return _graph_delete_node(gr, key);

}

_Bool _weighted_graph_delete_edge(graph* gr, long from, long to){

 return _graph_delete_edge(gr, from, to);

}

void _weighted_graph_clear_paths(graph* gr){

 _graph_clear_paths(gr);

}


_Bool _weighted_graph_spath(graph* gr, long start, long end, graph_path* path){

 size_t i;
 long length;
 queue* bfs_queue;
 graph_node *root = 0, *destination = 0, *current = 0, *discovery = 0;
 graph_edge* c_edge;

 if(!gr || !path)
  return 0;


 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == start)
   root = gr->nodes + i;

  else if(gr->nodes[i].key == end)
   destination = gr->nodes + i;

  if(root && destination)
   break;

 }

 if(!root)
  return 0;


 root->level = 1;


 bfs_queue = _queue_new(gr->ctx, 10);


 _queue_enqueue(bfs_queue, root);

 while(bfs_queue->used){

  current = (graph_node*)_queue_dequeue(bfs_queue);
  c_edge = current->edges;

  while(c_edge){


   discovery = c_edge->to;


   length = current->level + c_edge->weight;


   if(!discovery->level || discovery->level > length){

    discovery->level = length;
    discovery->parent = current;

    _queue_enqueue(bfs_queue, discovery);

   }

   c_edge = c_edge->next;
  }

 }


 if(destination->parent){

  _queue_delete(bfs_queue);
  int_graph_build_path(gr, destination, path);
  return 1;

 }


 _queue_delete(bfs_queue);
 return 0;
}



_Bool _weighted_graph_spath_amask(graph* gr, long start, long end, size_t mask, graph_path* path){

 size_t i;
 long length;
 queue* bfs_queue;
 graph_node *root = 0, *destination = 0, *current = 0, *discovery = 0;
 graph_edge* c_edge;

 if(!gr || !path)
  return 0;


 for(i = 0; i < gr->used; i++){

  if(gr->nodes[i].key == start)
   root = gr->nodes + i;

  else if(gr->nodes[i].key == end)
   destination = gr->nodes + i;

  if(root && destination)
   break;

 }

 if(!root)
  return 0;


 root->level = 1;


 bfs_queue = _queue_new(gr->ctx, 10);


 _queue_enqueue(bfs_queue, root);

 while(bfs_queue->used){

  current = (graph_node*)_queue_dequeue(bfs_queue);
  c_edge = current->edges;

  while(c_edge){

   if(c_edge->mask != mask){


    discovery = c_edge->to;


    length = current->level + c_edge->weight;


    if(!discovery->level || discovery->level > length){

     discovery->level = length;
     discovery->parent = current;

     _queue_enqueue(bfs_queue, discovery);

    }

   }

   c_edge = c_edge->next;
  }

 }


 if(destination->parent){

  _queue_delete(bfs_queue);
  int_graph_build_path(gr, destination, path);
  return 1;

 }


 _queue_delete(bfs_queue);
 return 0;
}
# 1 "../lib/containers/graph/weighted_graph.h" 2
# 17 "../lib/weighted_graph.h" 2
# 13 "../lib/genlib.h" 2
# 1 "../lib/set.h" 1
# 29 "../lib/set.h"
# 1 "../lib/containers/set/set.h" 1
# 1 "../lib/containers/set/set_structs.c" 1
typedef struct vset_int vset_int;
typedef struct vset_config vset_config;

struct vset_int{


 void* obj;


 size_t val;

};

struct vset_config{


 size_t data_size;


 size_t v_size;


 size_t v_offset;

};
# 2 "../lib/containers/set/set.h" 2
# 1 "../lib/containers/set/vset.c" 1


vector* _vset_new(standard_library_context*, size_t, void*, void*, size_t, size_t);


void _vset_delete(vector*);


_Bool _vset_add(vector*, void*);


void* _vset_get(vector*, size_t);


void _vset_remove(vector*, size_t);


void _vset_reset_iterator(vector*);


_Bool _vset_has_next(vector*);


void* _vset_get_next(vector*);


_Bool _vset_contains(vector*, size_t);


vector* _vset_union(vector*, vector*);


vector* _vset_intersect(vector*, vector*);

static size_t int_vset_get_value(vset_config* config, void* obj){

 byte* dat;
 size_t value;

 if(!config || !obj)
  return 0;

 dat = (byte*)obj;

 if(config->v_size == sizeof(int8_t))
  value = *((int8_t*)(dat + config->v_offset));

 else if(config->v_size == sizeof(int16_t))
  value = *((int16_t*)(dat + config->v_offset));

 else if(config->v_size == sizeof(uint32_t))
  value = *((int32_t*)(dat + config->v_offset));

 else
  value = *((size_t*)(dat + config->v_offset));

 return value;

}


vector* _vset_new(standard_library_context* ctx, size_t data_size, void* obj_addr_start, void* obj_addr_value, size_t value_size, size_t start_size){

 vector* vect;
 vset_config* config;
 size_t i, offset;

 if(!ctx || !data_size || !start_size || !obj_addr_value)
  return 0;

 offset = (size_t)(obj_addr_value - obj_addr_start);

 if((offset + value_size) > data_size)
  return 0;

 vect = allocate(ctx, sizeof(vector));
 vect->ctx = ctx;
 vect->data = allocate(ctx, sizeof(vset_int) * start_size);
 vect->size = start_size;
 vect->data_size = sizeof(vset_int);


 config = allocate(ctx, sizeof(vset_config));
 config->data_size = data_size;
 config->v_size = value_size;
 config->v_offset = offset;
 vect->ext = config;

 return vect;

}

void _vset_delete(vector* vect){

 size_t i;
 vset_int* dat;

 if(!vect)
  return;

 dat = (vset_int*)vect->data;

 for(i = 0; i < vect->used; i++)
  destroy(vect->ctx, dat[i].obj);

 destroy(vect->ctx, vect->ext);
 _vector_delete(vect);

}

_Bool _vset_contains(vector* vect, size_t val){

 size_t i;
 vset_int* dat;

 if(!vect)
  return 0;

 dat = (vset_int*)vect->data;

 for(i = 0; i < vect->used; i++){

  if(dat[i].val == val)
   return 1;

 }

 return 0;

}

_Bool _vset_add(vector* vect, void* obj){

 vset_config* config;
 byte *dat, *odat;
 size_t i;

 if(!vect)
  return 0;

 config = (vset_config*)vect->ext;
 size_t val = int_vset_get_value(config, obj);

 if(!_vset_contains(vect, val)){

  dat = allocate(vect->ctx, config->data_size);
  odat = (byte*)obj;

  for(i = 0; i < config->data_size; i++)
   dat[i] = odat[i];

  vset_int data;
  data.val = val;
  data.obj = dat;

  _vector_add(vect, &data);
  return 1;

 }

 return 0;

}

void* _vset_get(vector* vect, size_t pos){

 vset_int* data;

 data = _vector_get(vect, pos);

 if(data)
  return data->obj;

 return 0;

}

void _vset_remove(vector* vect, size_t pos){

 vset_int* dat;

 if(!vect || !pos)
  return;

 if(pos >= vect->used)
  return;

 dat = (vset_int*)vect->data;

 destroy(vect->ctx, dat[pos].obj);

 _vector_remove(vect, pos);

}

void _vset_reset_iterator(vector* vect){

 _vector_reset_iterator(vect);

}

_Bool _vset_has_next(vector* vect){

 return _vector_has_next(vect);

}

void* _vset_get_next(vector* vect){

 vset_int* dat;

 dat = _vector_get_next(vect);

 if(dat)
  return dat->obj;

 return 0;

}


vector* _vset_union(vector* st1, vector* st2){

 vector* u_set;
 vset_config *config1, *config2;
 vset_int* dat;
 size_t i;

 if(!st1 || !st2)
  return 0;

 config1 = (vset_config*)st1->ext;
 config2 = (vset_config*)st2->ext;

 if(config1->data_size != config2->data_size || config1->v_offset != config2->v_offset)
  return 0;

 u_set = _vset_new(st1->ctx, config1->data_size, (void*)0, (void*)config1->v_offset, config1->v_size, st1->used);

 dat = (vset_int*)st1->data;

 for(i = 0; i < st1->used; i++)
  _vset_add(u_set, dat[i].obj);

 dat = (vset_int*)st2->data;

 for(i = 0; i < st2->used; i++)
  _vset_add(u_set, dat[i].obj);


 return u_set;

}

vector* _vset_intersect(vector* st1, vector* st2){

 vector* i_set;
 vset_config *config1, *config2;
 vset_int* dat;
 size_t i;

 if(!st1 || !st2)
  return 0;

 config1 = (vset_config*)st1->ext;
 config2 = (vset_config*)st2->ext;
 dat = (vset_int*)st1->data;

 if(config1->data_size != config2->data_size || config1->v_offset != config2->v_offset)
  return 0;

 i_set = _vset_new(st1->ctx, config1->data_size, (void*)0, (void*)config1->v_offset, config1->v_size, st1->used);

 for(i = 0; i < st1->used; i++){

  if(_vset_contains(st2, dat[i].val))
   _vset_add(i_set, dat[i].obj);

 }


 return i_set;

}
# 3 "../lib/containers/set/set.h" 2
# 1 "../lib/containers/set/set.c" 1

list* _set_new(standard_library_context*, size_t);


void _set_delete(list*);


_Bool _set_add(list*, void*);


void* _set_get(list*, size_t);


_Bool _set_remove(list*, size_t);


void _set_reset_iterator(list*);


_Bool _set_has_next(list*);


void* _set_get_next(list*);


_Bool _set_contains(list*, void*);


list* _set_union(list*, list*);


list* _set_intersect(list*, list*);


list* _set_new(standard_library_context* ctx, size_t start_size){

 return _list_new(ctx, start_size);

}

void _set_delete(list* st){

 _list_delete(st);

}

_Bool _set_add(list* st, void* ptr){

 size_t i;

 for(i = 0; i < st->used; i++){

  if(st->data[i] == ptr)
   return 0;

 }

 _list_add(st, ptr);
 return 1;

}

_Bool _set_contains(list* st, void* ptr){

 size_t i;

 if(!st)
  return 0;

 for(i = 0; i < st->used; i++){

  if(st->data[i] == ptr)
   return 1;

 }

 return 0;

}

void* _set_get(list* st, size_t pos){

 return _list_get(st, pos);

}

_Bool _set_remove(list* st, size_t pos){

 return _list_remove(st, pos);

}

void _set_reset_iterator(list* st){

 _list_reset_iterator(st);

}

_Bool _set_has_next(list* st){

 return _list_has_next(st);

}

void* _set_get_next(list* st){

 return _list_get_next(st);

}

list* _set_union(list* st1, list* st2){

 list* u_set;
 size_t i;

 if(!st1 || !st2)
  return 0;

 u_set = allocate(st1->ctx, sizeof(list));
 u_set->data = allocate(st1->ctx, (sizeof(size_t) * st1->used));
 u_set->size = st1->used;
 u_set->ctx = st1->ctx;

 for(i = 0; i < st1->used; i++)
  _list_add(u_set, st1->data[i]);

 for(i = 0; i < st2->used; i++)
  _set_add(u_set, st2->data[i]);

 return u_set;

}

list* _set_intersect(list* st1, list* st2){

 list* i_set;
 size_t i;

 if(!st1 || !st2)
  return 0;

 i_set = allocate(st1->ctx, sizeof(list));
 i_set->data = allocate(st1->ctx, (sizeof(size_t) * st1->used));
 i_set->size = st1->used;
 i_set->ctx = st1->ctx;

 for(i = 0; i < st1->used; i++){

  if(_set_contains(st2, st1->data[i]))
   _list_add(i_set, st1->data[i]);

 }

 return i_set;

}
# 3 "../lib/containers/set/set.h" 2
# 30 "../lib/set.h" 2
# 14 "../lib/genlib.h" 2
# 1 "../lib/avl_tree.h" 1
# 13 "../lib/avl_tree.h"
# 1 "../lib/containers/tree/bst.h" 1
# 1 "../lib/containers/tree/bst_structs.c" 1
typedef struct binary_search_tree binary_search_tree;
typedef struct binary_search_tree_node binary_search_tree_node;

struct binary_search_tree{


 standard_library_context* ctx;


 size_t total;


 binary_search_tree_node* root;

};

struct binary_search_tree_node{


 long key;


 void* data;


 size_t w;


 binary_search_tree_node* parent;


 binary_search_tree_node* left;


 binary_search_tree_node* right;

};
# 2 "../lib/containers/tree/bst.h" 2
# 1 "../lib/containers/tree/bst.c" 1

binary_search_tree* _binary_search_tree_new(standard_library_context*);


void _binary_search_tree_delete(binary_search_tree*);


void _binary_search_tree_insert(binary_search_tree*, long, void*);


binary_search_tree_node* _binary_search_tree_insert_e(binary_search_tree*, long, void*);


void* _binary_search_tree_remove(binary_search_tree*, long);


_Bool _binary_search_tree_remove_e(binary_search_tree*, long, binary_search_tree_node*);


void* _binary_search_tree_lookup(binary_search_tree*, long);


binary_search_tree_node* _binary_search_tree_greatest(binary_search_tree*);


binary_search_tree_node* _binary_search_tree_greatest_s(binary_search_tree_node*);


binary_search_tree_node* _binary_search_tree_lookup_e(binary_search_tree*, long);



static void int_binary_search_tree_delete(binary_search_tree* tree, binary_search_tree_node* root){

 if(root){

  int_binary_search_tree_delete(tree, root->left);
  int_binary_search_tree_delete(tree, root->right);
  destroy(tree->ctx, root);

 }

}


binary_search_tree* _binary_search_tree_new(standard_library_context* ctx){

 binary_search_tree* tree;

 if(!ctx)
  return 0;

 tree = allocate(ctx, sizeof(binary_search_tree));
 tree->ctx = ctx;

 return tree;

}

void _binary_search_tree_delete(binary_search_tree* tree){

 if(tree)
  int_binary_search_tree_delete(tree, tree->root);

 destroy(tree->ctx, tree);

}

binary_search_tree_node* _binary_search_tree_insert_e(binary_search_tree* tree, long key, void* data){

 binary_search_tree_node** current;
 binary_search_tree_node* parent = 0;

 if(!tree)
  return;

 current = &tree->root;
 tree->total++;

 while(*current){

  parent = *current;

  if(key >= (*current)->key)
   current = &((*current)->right);

  else
   current = &((*current)->left);

 }

 *current = allocate(tree->ctx, sizeof(binary_search_tree_node));
 (*current)->data = data;
 (*current)->key = key;
 (*current)->parent = parent;

 return *current;

}

void _binary_search_tree_insert(binary_search_tree* tree, long key, void* data){

 _binary_search_tree_insert_e(tree, key, data);

}


binary_search_tree_node* _binary_search_tree_greatest_s(binary_search_tree_node* root){


 if(!root)
  return 0;

 while(root->right)
  root = root->right;

 return root;

}

binary_search_tree_node* _binary_search_tree_greatest(binary_search_tree* tree){

 if(!tree)
  return 0;

 if(!tree->root)
  return 0;

 return _binary_search_tree_greatest_s(tree->root);

}

binary_search_tree_node* _binary_search_tree_lookup_e(binary_search_tree* tree, long key){

 binary_search_tree_node* node;

 if(!tree)
  return 0;

 node = tree->root;

 while(node){

  if(node->key == key)
   return node;

  else if(key < node->key){

   printf("Left at: %ld\n", node->key);
   node = node->left;
  }

  else{

   printf("Right at: %ld\n", node->key);
   node = node->right;

  }

 }

 return 0;

}

void* _binary_search_tree_lookup(binary_search_tree* tree, long key){

 binary_search_tree_node* node;

 if((node = _binary_search_tree_lookup_e(tree, key)))
  return node->data;

 return 0;

}

void* _binary_search_tree_remove(binary_search_tree* tree, long key){

 binary_search_tree_node *node, *replacement;
 void* data;

 if(!tree)
  return 0;

 node = tree->root;

 while(node){

  if(node->key == key)
   break;

  else if(key > node->key)
   node = node->right;

  else
   node = node->left;

 }

 if(!node)
  return 0;

 data = node->data;
 tree->total--;

 if(node->left && node->right){

  replacement = _binary_search_tree_greatest_s(node->left);


  node->key = replacement->key;
  node->data = replacement->data;
  node->w = replacement->w;


  replacement->parent->right = replacement->left;

  destroy(tree->ctx, replacement);

 }

 else{

  if(node->left)
   replacement = node->left;

  else if(node->right)
   replacement = node->right;

  else if(node->parent){

   if(node->parent->left == node)
    node->parent->left = 0;
   else
    node->parent->right = 0;

   destroy(tree->ctx, node);

   return data;

  }
  else{

   destroy(tree->ctx, node);
   tree->root = 0;

   return data;

  }

  node->key = replacement->key;
  node->data = replacement->data;
  node->w = replacement->w;
  node->left = replacement->left;
  node->right = replacement->right;

  destroy(tree->ctx, replacement);

 }

 return data;

}

_Bool _binary_search_tree_remove_e(binary_search_tree* tree, long key, binary_search_tree_node* ext){

 binary_search_tree_node *node, *replacement;
 void* data;

 if(!tree || !ext)
  return 0;

 node = tree->root;

 while(node){

  if(node->key == key)
   break;

  else if(key > node->key)
   node = node->right;

  else
   node = node->left;

 }

 if(!node)
  return 0;

 *ext = *node;
 tree->total--;

 if(node->left && node->right){

  replacement = _binary_search_tree_greatest_s(node->right);


  node->key = replacement->key;
  node->data = replacement->data;
  node->w = replacement->w;


  replacement->parent->right = replacement->left;

  destroy(tree->ctx, replacement);

 }

 else{

  if(node->left)
   replacement = node->left;

  else if(node->right)
   replacement = node->right;

  else if(node->parent){

   if(node->parent->left == node)
    node->parent->left = 0;
   else
    node->parent->right = 0;

   destroy(tree->ctx, node);

   return 1;

  }
  else{

   destroy(tree->ctx, node);
   tree->root = 0;

   return 1;

  }

  node->key = replacement->key;
  node->data = replacement->data;
  node->w = replacement->w;
  node->left = replacement->left;
  node->right = replacement->right;

  destroy(tree->ctx, replacement);

 }

 return 1;
}
# 2 "../lib/containers/tree/bst.h" 2
# 14 "../lib/avl_tree.h" 2







# 1 "../lib/containers/tree/avl_tree.h" 1
# 1 "../lib/containers/tree/avl_tree_structs.c" 1
# 2 "../lib/containers/tree/avl_tree.h" 2
# 1 "../lib/containers/tree/avl_tree.c" 1

binary_search_tree* _avl_tree_new(standard_library_context*);


void _avl_tree_delete(binary_search_tree*);


void _avl_tree_insert(binary_search_tree*, long, void*);


binary_search_tree_node* _avl_insert_e(binary_search_tree*, long, void*);


void* _avl_tree_remove(binary_search_tree*, long);


_Bool _avl_tree_remove_e(binary_search_tree*, long, binary_search_tree_node*);


void* _avl_tree_lookup(binary_search_tree*, long);


binary_search_tree_node* _avl_tree_greatest(binary_search_tree*);


binary_search_tree_node* _avl_tree_greatest_s(binary_search_tree_node*);


binary_search_tree_node* _avl_tree_lookup_e(binary_search_tree*, long);


binary_search_tree* _avl_tree_new(standard_library_context* ctx){

 return _binary_search_tree_new(ctx);

}

void _avl_tree_delete(binary_search_tree* tree){

 _binary_search_tree_delete(tree);

}
# 2 "../lib/containers/tree/avl_tree.h" 2
# 22 "../lib/avl_tree.h" 2
# 14 "../lib/genlib.h" 2
# 2 "bst_test.c" 2

void main(){

 standard_library_context ctx;

 _std_lib_default(&ctx);

 int t1 = 2345;
 int t2 = 4567;

 binary_search_tree* tree = _binary_search_tree_new(&ctx);
 binary_search_tree* avltree = _avl_tree_new(&ctx);

 _binary_search_tree_insert(tree, 23, &t1);
 _binary_search_tree_insert(tree, 10, &t1);
 _binary_search_tree_insert(tree, 26, &t1);
 _binary_search_tree_insert(tree, 25, &t2);
 _binary_search_tree_insert(tree, 45, &t2);
 _binary_search_tree_insert(tree, 71, &t2);
 _binary_search_tree_insert(tree, 12, &t1);
 _binary_search_tree_insert(tree, 1, &t1);

 _binary_search_tree_remove(tree, 23);
 _binary_search_tree_remove(tree, 45);


 _binary_search_tree_lookup(tree, 25);

 printf("\n\n");

 _binary_search_tree_lookup(tree, 71);

 printf("\n\n");

 _binary_search_tree_insert(tree, 56, &t2);

 _binary_search_tree_delete(tree);
 _binary_search_tree_delete(avltree);
}
