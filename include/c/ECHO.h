#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ECHO 0x8
#else
#  error
#endif
