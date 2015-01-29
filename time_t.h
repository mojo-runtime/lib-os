#ifndef _c__time_t_h
#define _c__time_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int64_t
#  else
#    error
#  endif
#else
#  error
#endif
time_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
