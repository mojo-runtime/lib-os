#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INT32_MAX.h"
#  define INT32_MIN (-INT32_MAX - 1)
#else
#  error
#endif