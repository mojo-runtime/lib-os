#pragma once

#include "pid_t.h"

#include "__call.hxx"

namespace linux {

static inline
pid_t
gettid() noexcept
{
#if defined(__x86_64__)
    return __call<186>().ok<pid_t>();
#else
#  error
#endif
}

}