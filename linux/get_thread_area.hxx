#ifndef linux_get_thread_area_hxx_
#define linux_get_thread_area_hxx_

#include "linux/c/_c_syscall1.h"
#include "linux/c/EFAULT.h"
#include "linux/c/EINVAL.h"
#include "linux/c/SYS_get_thread_area.h"
#include "linux/c/struct-user_desc.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
get_thread_area(struct user_desc* u_info) noexcept
{
    enum Error
    {
        // `u_info` is an invalid pointer.
        EFAULT_ = EFAULT,

        // `u_info->entry_number` is out of bounds.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(_c_syscall1(SYS_get_thread_area, u_info));
}

static inline
auto
get_thread_area(struct user_desc& u_info) noexcept
{
    enum Error
    {
        // EFAULT
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(_c_syscall1(SYS_get_thread_area, &u_info));
}

} // namespace linux

#endif
