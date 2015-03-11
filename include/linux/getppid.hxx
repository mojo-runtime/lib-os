#ifndef linux_getppid_hxx_
#define linux_getppid_hxx_

#include "c/SYS_getppid.h"
#include "c/pid_t.h"

#include "__call-0.hxx"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(__call(SYS_getppid));
}

} // namespace linux

#endif
