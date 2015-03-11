#ifndef linux_close_hxx_
#define linux_close_hxx_

#include "c/EBADF.h"
#include "c/EINTR.h"
#include "c/EIO.h"
#include "c/SYS_close.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace linux {

static inline
auto
close(int fd) noexcept
{
    enum Error
    {
        // `fd` isn't a valid open file descriptor.
        EBADF_ = EBADF,

        // The close() call was interrupted by a signal; see signal(7).
        EINTR_ = EINTR,

        // An I/O error occurred.
        EIO_ = EIO,
    };

    return Result<void, Error>(__call(SYS_close, fd));
}

} // namespace linux

#endif
