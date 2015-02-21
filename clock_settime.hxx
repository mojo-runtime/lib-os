#ifndef linux_clock_settime_hxx_
#define linux_clock_settime_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EPERM.h"
#include "c/SYS_clock_settime.h"
#include "c/clockid_t.h"
#include "c/struct-timespec.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
clock_settime(clockid_t clk_id, const struct timespec* tp) noexcept
{
    enum Error
    {
        // `tp` points outside the accessible address space.
        EFAULT = EFAULT,

        // The `clk_id` specified is not supported on this system.
        EINVAL = EINVAL,

        // `clock_settime()` does not have permission to set the clock indicated.
        EPERM = EPERM,
    };

    return Result<void, Error>(_c_syscall2(SYS_clock_settime, clk_id, tp));
}

} // namespace linux

#endif
