// regex.tcc
//

#ifndef INCLUDED_PRLGCC_REGEX_TCC
#define INCLUDED_PRLGCC_REGEX_TCC

#include <bits/prlgcc_c++config.h>

#if defined (__PRL_GLIBCXX__)

#  if (defined (PRL_GCC_01) || defined (PRL_GCC_09)) && (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 9)

#  else

#    include_next <bits/regex.tcc>

#  endif

#else

#  include_next <bits/regex.tcc>

#endif

#endif
