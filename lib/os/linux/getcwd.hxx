#pragma once

#if defined(__arm__)
#  define __NR_getcwd 183
#elif defined(__x86_64__)
#  define __NR_getcwd 79
#else
#  error
#endif

#error
