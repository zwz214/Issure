// list.tcc
//

#ifndef INCLUDED_PRLGCC_LIST_TCC
#define INCLUDED_PRLGCC_LIST_TCC

#include <bits/prlgcc_c++config.h>

#if defined (__PRL_GLIBCXX__)

#  if defined (PRL_GCC_05) \
  && (   (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 3)  \
      || (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 4) )

#  else

#    include_next <bits/list.tcc>

#  endif

#else

#  include_next <bits/list.tcc>

#endif

#endif
