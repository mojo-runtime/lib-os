#ifndef linux_pipe2_hxx_
#define linux_pipe2_hxx_

#include "linux/c/_linux_syscall2.h"
#include "linux/c/EFAULT.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EMFILE.h"
#include "linux/c/ENFILE.h"
#include "linux/c/SYS_pipe2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
        // `pipefd` is not valid.
        EFAULT_ = EFAULT,

        // Invalid value in `flags`.
        EINVAL_ = EINVAL,

        // Too many file descriptors are in use by the process.
        EMFILE_ = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,
    };

    return Result<void, Error>(_linux_syscall2(SYS_pipe2, pipefd, flags));
}

static inline
auto
pipe2(int pipefd[2]) noexcept
{
    enum Error
    {
        EFAULT_ = EFAULT,
        // EINVAL
        EMFILE_ = EMFILE,
        ENFILE_ = ENFILE,
    };

    return pipe2(pipefd, 0)._with_error<Error>();
}

} // namespace linux

#endif