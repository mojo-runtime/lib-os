// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_unlink 87
#  elif defined(__arm__)
#    define SYS_unlink 10
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_unlink 10
#else
#  error
#endif
