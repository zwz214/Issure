#pragma PRQA_MESSAGES_OFF 627,631,776,777,1027,1057,1309,1307,2017,3313,3602,3625,4608

#ifndef _WCHAR_H
#define _WCHAR_H

#ifndef _SIZE_T
#define _SIZE_T
typedef PRQA_SIZE_T size_t;
#endif

#ifndef _WCHAR_T
#define _WCHAR_T
typedef PRQA_WCHAR_T wchar_t;
#endif

typedef struct {int __content_is_opaque;} mbstate_t;
typedef unsigned int wint_t;
struct tm;

#ifndef NULL
#define NULL    ((void *) 0)
#endif

#ifndef WCHAR_MIN
#define WCHAR_MIN (0)
#endif

#ifndef WCHAR_MAX
#define WCHAR_MAX (0xfeu)
#endif

#ifndef WEOF
#define WEOF (0xffu)
#endif

/*
 * For some reason, Sun use a define instead of a typedef to define FILE
 */
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
#ifdef  sun
struct _iobuf { unsigned __the_contents_of_FILE_are_not_defined; };
#define FILE  struct _iobuf
#else
typedef struct { unsigned __the_contents_of_FILE_are_not_defined; } FILE;
#endif
#endif

#ifndef _VA_LIST
#define _VA_LIST
typedef void * va_list;
#endif

int                     fwprintf (FILE * restrict           stream,
                                  const wchar_t * restrict  format,
                                  ...);

int                     fwscanf (FILE * restrict            stream,
                                 const wchar_t * restrict   format,
                                 ...);

int                     swprintf (wchar_t * restrict        s,
                                  size_t                    n,
                                  const wchar_t * restrict  format,
                                  ...);

int                     swscanf (const wchar_t * restrict   s,
                                 const wchar_t * restrict   format,
                                 ...);

int                     vfwprintf (FILE * restrict            stream,
                                   const wchar_t * restrict   format,
                                   va_list                    arg);

int                     vfwscanf (FILE * restrict           stream,
                                  const wchar_t * restrict  format,
                                  va_list                   arg);

int                     vswprintf (wchar_t * restrict         s,
                                   size_t                     n,
                                   const wchar_t * restrict   format,
                                   va_list                    arg);

int                     vswscanf (const wchar_t * restrict  s,
                                  const wchar_t * restrict  format,
                                  va_list                   arg);

int                     vwprintf (const wchar_t * restrict  format,
                                  va_list                   arg);

int                     vwscanf (const wchar_t * restrict   format,
                                 va_list                    arg);

int                     wprintf (const wchar_t * restrict format,
                                 ...);

int                     wscanf (const wchar_t * restrict format,
                                ...);

wint_t                  fgetwc (FILE * stream);

wchar_t *               fgetws (wchar_t * restrict  s,
                                int                 n,
                                FILE * restrict     stream);

wint_t                  fputwc (wchar_t   c,
                                FILE *    stream);

int                     fputws (const wchar_t * restrict  s,
                                FILE * restrict           stream);

int                     fwide (FILE *   stream,
                               int      mode);

wint_t                  getwc (FILE * stream);

wint_t                  getwchar (void);

wint_t                  putwc (wchar_t  c,
                               FILE *   stream);

wint_t                  putwchar (wchar_t c);

wint_t                  ungetwc (wint_t   c,
                                 FILE *   stream);

double                  wcstod (const wchar_t * restrict  nptr,
                                wchar_t ** restrict       endptr);

float                   wcstof (const wchar_t * restrict  nptr,
                                wchar_t ** restrict       endptr);

long double             wcstold (const wchar_t * restrict   nptr,
                                 wchar_t ** restrict        endptr);

long int                wcstol (const wchar_t * restrict  nptr,
                                wchar_t ** restrict       endptr,
                                int                       base);

long long int           wcstoll (const wchar_t * restrict   nptr,
                                 wchar_t ** restrict        endptr,
                                 int                        base);

unsigned long int       wcstoul (const wchar_t * restrict   nptr,
                                 wchar_t ** restrict        endptr,
                                 int                        base);

unsigned long long int  wcstoull (const wchar_t * restrict  nptr,
                                  wchar_t ** restrict       endptr,
                                  int                       base);

wchar_t *               wcscpy (wchar_t * restrict        s1,
                                const wchar_t * restrict  s2);

wchar_t *               wcsncpy (wchar_t * restrict         s1,
                                 const wchar_t * restrict   s2,
                                 size_t                     n);

wchar_t *               wcscat (wchar_t * restrict        s1,
                                const wchar_t * restrict  s2);

wchar_t *               wcsncat (wchar_t * restrict         s1,
                                 const wchar_t * restrict   s2,
                                 size_t                     n);

int                     wcscmp (const wchar_t *   s1,
                                const wchar_t *   s2);

int                     wcscoll (const wchar_t *  s1,
                                 const wchar_t *  s2);

int                     wcsncmp (const wchar_t *  s1,
                                 const wchar_t *  s2,
                                 size_t           n);

size_t                  wcsxfrm (wchar_t * restrict         s1,
                                 const wchar_t * restrict   s2,
                                 size_t                     n);

wchar_t *               wcschr (const wchar_t *   s,
                                wchar_t           c);

size_t                  wcscspn (const wchar_t *  s1,
                                 const wchar_t *  s2);

size_t                  wcslen (const wchar_t *   s);

wchar_t *               wcspbrk (const wchar_t *  s1,
                                 const wchar_t *  s2);

wchar_t *               wcsrchr (const wchar_t *  s,
                                 wchar_t          c);

size_t                  wcsspn (const wchar_t *   s1,
                                const wchar_t *   s2);

wchar_t *               wcsstr (const wchar_t *   s1,
                                const wchar_t *   s2);

wchar_t *               wcstok (wchar_t * restrict        s1,
                                const wchar_t * restrict  s2,
                                wchar_t ** restrict       ptr);

wchar_t *               wmemchr (const wchar_t *  s,
                                 wchar_t          c,
                                 size_t           n);

int                     wmemcmp (wchar_t * restrict         s1,
                                 const wchar_t * restrict   s2,
                                 size_t                     n);

wchar_t *               wmemcpy (wchar_t * restrict         s1,
                                 const wchar_t * restrict   s2,
                                 size_t                     n);

wchar_t *               wmemmove (wchar_t *         s1,
                                  const wchar_t *   s2,
                                  size_t            n);

wchar_t *               wmemset (wchar_t *  s,
                                 wchar_t    c,
                                 size_t     n);

size_t                  wcsftime (wchar_t * restrict          s,
                                  size_t                      maxsize,
                                  const wchar_t * restrict    format,
                                  const struct tm * restrict  timeptr);

wint_t                  btowc (int c);

int                     wctob (wint_t c);

int                     mbsinit (const mbstate_t * ps);

size_t                  mbrlen (const char * restrict   s,
                                size_t                  n,
                                mbstate_t * restrict    ps);

size_t                  mbrtowc (wchar_t * restrict     pwc,
                                 const char * restrict  s,
                                 size_t                 n,
                                 mbstate_t * restrict   ps);

size_t                  wcrtomb (char * restrict        s,
                                 wchar_t                wc,
                                 mbstate_t * restrict   ps);

size_t                  mbsrtowcs (wchar_t * restrict       dst,
                                   const char ** restrict   src,
                                   size_t                   len,
                                   mbstate_t * restrict     ps);

size_t                  wcsrtombs (char * restrict            dst,
                                   const wchar_t ** restrict  src,
                                   size_t                     len,
                                   mbstate_t * restrict       ps);

#endif
