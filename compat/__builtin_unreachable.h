#pragma once

#include "__has_builtin.h"

#if !__has_builtin(__builtin_unreachable)
#  error
#endif
