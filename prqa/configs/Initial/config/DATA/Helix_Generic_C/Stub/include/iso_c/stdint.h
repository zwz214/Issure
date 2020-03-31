#pragma PRQA_MESSAGES_OFF 1027,3410,3429,3602
#ifndef _STDINT_H
#define _STDINT_H

/* literal macros */

#define INT8_C(c)  c
#define INT16_C(c) c
#define INT32_C(c) c
#define INT64_C(c) c ## LL

#define UINT8_C(c)  c
#define UINT16_C(c) c
#define UINT32_C(c) c ## U
#define UINT64_C(c) c ## ULL

#define INTMAX_C(c)	c ## LL
#define UINTMAX_C(c)	c ## ULL

/* Small Types */

typedef signed char        int_least8_t;
typedef signed short       int_least16_t;
typedef signed int         int_least32_t;
typedef signed long long   int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

#define INT_LEAST8_MIN  (-128)
#define INT_LEAST16_MIN (-32767-1)
#define INT_LEAST32_MIN (-2147483647-1)
#define INT_LEAST64_MIN (-INT64_C(9223372036854775807)-1)

#define INT_LEAST8_MAX  (127)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST32_MAX (2147483647)
#define INT_LEAST64_MAX (INT64_C(9223372036854775807))

#define UINT_LEAST8_MAX  (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295U)
#define UINT_LEAST64_MAX (UINT64_C(18446744073709551615))

/* Fast Types */

typedef signed char        int_fast8_t;
typedef signed int         int_fast16_t;
typedef signed int         int_fast32_t;
typedef signed long long   int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

#define INT_FAST8_MIN  (-128)
#define INT_FAST16_MIN (-2147483647-1)
#define INT_FAST32_MIN (-2147483647-1)
#define INT_FAST64_MIN (-INT64_C(9223372036854775807)-1)

#define INT_FAST8_MAX  (127)
#define INT_FAST16_MAX (2147483647)
#define INT_FAST32_MAX (2147483647)
#define INT_FAST64_MAX (INT64_C(9223372036854775807))

#define UINT_FAST8_MAX  (255)
#define UINT_FAST16_MAX (4294967295U)
#define UINT_FAST32_MAX (4294967295U)
#define UINT_FAST64_MAX (UINT64_C(18446744073709551615))

/* Exact Types */

typedef signed char        int8_t;
typedef signed short       int16_t;
typedef signed int         int32_t;
typedef signed long long   int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

#define INT8_MIN  (-128)
#define INT16_MIN (-32767-1)
#define INT32_MIN (-2147483647-1)
#define INT64_MIN (-INT64_C(9223372036854775807)-1)

#define INT8_MAX  (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (INT64_C(9223372036854775807))

#define UINT8_MAX  (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295U)
#define UINT64_MAX (UINT64_C(18446744073709551615))

/* Largest Types */

#ifndef _INTMAX_T
#define _INTMAX_T
typedef long long          intmax_t;
#endif
#ifndef _UINTMAX_T
#define _UINTMAX_T
typedef unsigned long long uintmax_t;
#endif

#define INTMAX_MIN   (-INT64_C(9223372036854775807)-1)
#define INTMAX_MAX   (INT64_C(9223372036854775807))
#define UINTMAX_MAX  (UINT64_C(18446744073709551615))

/* Atomic */

#define SIG_ATOMIC_MIN (-2147483647-1)
#define SIG_ATOMIC_MAX (2147483647)

/* Wide Char */

#ifndef WCHAR_MIN
#define WCHAR_MIN (0)
#endif

#ifndef WCHAR_MAX
#define WCHAR_MAX (0xfeu)
#endif

#define WINT_MIN (0)
#define WINT_MAX (4294967295U)

/* Types To Handle "void*" */

typedef int             intptr_t;
typedef unsigned int    uintptr_t;

#define INTPTR_MIN   (-2147483647-1)
#define INTPTR_MAX   (2147483647)
#define UINTPTR_MAX  (4294967295U)

#define PTRDIFF_MIN (-2147483647-1)
#define PTRDIFF_MAX (2147483647)

#define SIZE_MAX    (4294967295U)

#endif
