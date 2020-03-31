#pragma PRQA_MESSAGES_OFF 3410,3429,3453
#ifndef _STDDEF_H
#define _STDDEF_H

typedef PRQA_PTRDIFF_T ptrdiff_t;

#ifndef _SIZE_T
#define _SIZE_T
typedef PRQA_SIZE_T size_t;
#endif

#ifndef _WCHAR_T
#define _WCHAR_T
typedef PRQA_WCHAR_T wchar_t;
#endif

#ifndef _MAX_ALIGN_T
#define _MAX_ALIGN_T
typedef double max_align_t;
#endif

#ifndef NULL
#define NULL ((void *) 0)
#endif

#pragma PRQA_MACRO_MESSAGES_OFF "offsetof"

#define offsetof(type, member) ((size_t) ((char *) &((type *) NULL)->member ))

#endif
