#ifndef __builtin_expect

#include "__has_builtin.h"

#if !__has_builtin(__builtin_expect)
#  define __builtin_expect(x, y)
#endif

#endif
