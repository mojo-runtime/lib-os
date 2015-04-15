#pragma once

#include "c/struct epoll_event.h"
#include "Result.hxx"

namespace system {

static inline
auto
epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) noexcept
{
#if defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EEXIST.h"
#  include "c/EINVAL.h"
#  include "c/ENOENT.h"
#  include "c/ENOMEM.h"
#  include "c/ENOSPC.h"
#  include "c/EPERM.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EBADF),
        _(EEXIST),
        _(EINVAL),
        _(ENOENT),
        _(ENOMEM),
        _(ENOSPC),
        _(EPERM),
    };

#  undef _
#  include "c/SYS_epoll_ctl.h"

    return Result<void, Error>(SYS_epoll_ctl, epfd, op, fd, event);

#else
#  error
#endif
}

}