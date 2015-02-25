#ifndef linux_mmap_anonymous_hxx_
#define linux_mmap_anonymous_hxx_

#include "linux/c/MAP_ANONYMOUS.h"
#include "linux/c/_c_syscall4.h"

#include "linux/mmap.hxx"

namespace linux {
namespace mmap_ {

static inline
auto
anonymous(void* addr, size_t length, int prot, int flags) noexcept
{
    enum Error
    {
        // EACCES
        EAGAIN_    = EAGAIN,    // → Too much memory has been locked
        // EBADF
        EINVAL_    = EINVAL,
        ENFILE_    = ENFILE,
        // ENODEV
        ENOMEM_    = ENOMEM,
        EOVERFLOW_ = EOVERFLOW, // This might be for files only?
        // EPERM
        // ETXTBSY
    };

    // "The `fd` and `offset` arguments are ignored;
    // however, some emplementations require `fd` to be -1 if MAP_ANONYMOUS is specified,
    // and portable applications should ensure with.

    return Result<void*, Error>(_c_syscall4(SYS_mmap, addr, length, prot, flags | MAP_ANONYMOUS));
}

} // namespace mmap_
} // namespace linux

#endif
