#ifndef _c_static_assert_h_
#define _c_static_assert_h_

#if !defined(__cplusplus)
#  include "compat/has_c_static_assert.h"
#  if has_c_static_assert
#    define static_assert _Static_assert
#  else
#    error
#  endif
#else
#  include "compat/has_cxx_static_assert.h"
#  if !has_cxx_static_assert
#   error
#  endif
#endif

#endif
