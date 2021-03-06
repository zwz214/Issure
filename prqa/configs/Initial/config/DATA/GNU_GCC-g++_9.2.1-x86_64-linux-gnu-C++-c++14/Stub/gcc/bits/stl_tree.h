// stl_tree.h
//

#ifndef INCLUDED_PRLGCC_STL_TREE_H
#define INCLUDED_PRLGCC_STL_TREE_H

#include <bits/prlgcc_c++config.h>

#if defined (__PRL_GLIBCXX__)

#  if (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 3)

#    include <bits/4.3/stl_tree.h>

#  elif (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 4)

#    include <bits/4.4/stl_tree.h>

#  elif (__PRL_GLIBCXX__ == 4) && (__PRL_GLIBCXX_MINOR__ == 9)

#    include <bits/4.9/stl_tree.h>

#  else

#    include_next <bits/stl_tree.h>

#  endif

#else

#  include_next <bits/stl_tree.h>

#endif

#endif
