#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "sighandler_t.h"
#  define SIG_DFL ((sighandler_t)0)
#else
#  error
#endif
