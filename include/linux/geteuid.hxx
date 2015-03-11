#ifndef linux_geteuid_hxx_
#define linux_geteuid_hxx_

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"

#include "__call-0.hxx"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__call(SYS_geteuid));
}

} // namespace linux

#endif
