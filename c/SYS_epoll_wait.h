#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_epoll_wait 232
#  else
#    error
#  endif
#else
#  error
#endif
