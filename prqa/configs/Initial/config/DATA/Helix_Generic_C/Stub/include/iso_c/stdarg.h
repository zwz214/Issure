#pragma PRQA_MESSAGES_OFF 3410,3429,3453
#ifndef included_STDARG_H
#define included_STDARG_H
#ifndef _VA_LIST
#define _VA_LIST
typedef void * va_list;
#endif
#define va_start(ap, parmN)  ((void)((ap)= &(parmN)))
/*
 * NOTE: va_arg doesn't actually *do* anything, but that doesn't matter for
 * static analysis!
 */
#define va_arg(ap, type)  (*(type*)(ap))
#define va_copy(ap, src)  ((void)((ap)=(src)))
#define va_end(ap)        ((void)((ap)=(void *)0))

#endif
