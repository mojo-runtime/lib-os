#ifndef SYS_clone

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clone 56
#  else
#    error
#  endif
#else
#  error
#endif

#endif
