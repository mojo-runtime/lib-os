#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "SCHAR_MAX.h"
#  define SCHAR_MIN (-SCHAR_MAX - 1)
#else
#  error
#endif