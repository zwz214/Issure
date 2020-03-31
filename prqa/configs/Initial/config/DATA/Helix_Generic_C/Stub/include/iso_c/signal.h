#pragma PRQA_MESSAGES_OFF 1336,3672
#ifndef _SIGNAL_H
#define _SIGNAL_H
typedef int sig_atomic_t;

#define SIG_DFL (&__sigDefault)
#define SIG_ERR (&__sigError)
#define SIG_IGN (&__sigIgnore)
#define SIGABRT 1
#define SIGFPE  2
#define SIGILL  3
#define SIGINT  4
#define SIGSEGV 5
#define SIGTERM 6

extern void     (*signal(int sig,void (*func)(int)))(int);
extern int      raise(int sig);

#endif
