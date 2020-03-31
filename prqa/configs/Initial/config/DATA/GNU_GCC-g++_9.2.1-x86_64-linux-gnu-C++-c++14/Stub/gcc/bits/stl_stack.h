// stl_stack.h
//

#ifndef INCLUDED_PRLGCC_STL_STACK_H
#define INCLUDED_PRLGCC_STL_STACK_H

#include <bits/prlgcc_c++config.h>

#if defined (__PRL_GLIBCXX__)

#  if (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 3)

#    include <bits/4.3/stl_stack.h>

#  elif (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 4)

#    include <bits/4.4/stl_stack.h>

#  elif (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 7)

#    include <bits/4.7/stl_stack.h>

#  elif ( ( (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 8) )   \
    ||    ( (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 9) ) )

#    include <bits/4.8/stl_stack.h>

#  elif (__PRL_GLIBCXX__ == 5)

#    include <bits/5.1/stl_stack.h>

#  else

#    include_next <bits/stl_stack.h>

#  endif

#else

#  include_next <bits/stl_stack.h>

#endif

#endif
