#ifndef _c__timespec_h
#define _c__timespec_h

#include "c/time_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct timespec
{
#ifdef __linux__
    time_t
    tv_sec;

    long
    tv_nsec;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
