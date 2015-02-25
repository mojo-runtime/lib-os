#ifndef linux_mkdir_hxx_
#define linux_mkdir_hxx_

#include "EACCES.h"
#include "EDQUOT.h"
#include "EEXIST.h"
#include "EFAULT.h"
#include "ELOOP.h"
#include "EMLINK.h"
#include "ENAMETOOLONG.h"
#include "ENOENT.h"
#include "ENOMEM.h"
#include "ENOSPC.h"
#include "ENOTDIR.h"
#include "EPERM.h"
#include "EROFS.h"
#include "SYS_mkdir.h"
#include "mode_t.h"

#include "linux/Result.hxx"
#include "abi/_abi_syscall_2.h"

namespace linux {

static inline
auto
mkdir(const char* pathname, mode_t mode) noexcept
{
    enum Error
    {
        // The parent directory does not allow write permission to the process.
        //
        // One of the directories in `pathname` did not allow search permission.
        EACCES_ = EACCES,

        // The user's quota of disk blocks or inodes on the filesystem has been exhausted.
        EDQUOT_ = EDQUOT,

        // `pathname` already exists (not necessarily as a directory).
        // This includes the case where `pathname` is a symbolic link, dangling or not.
        EEXIST_ = EEXIST,

        // `pathname` points outside your accessible address space.
        EFAULT_ = EFAULT,

        // Too many symbolic links were encountered in resolving `pathname`.
        ELOOP_ = ELOOP,

        // The number of links to the parent directory would exceed LINK_MAX.
        EMLINK_ = EMLINK,

        // `pathname` was too long.
        ENAMETOOLONG_ = ENAMETOOLONG,

        // A directory component in `pathname` does not exist or is a dangling symbolic link.
        ENOENT_ = ENOENT,

        // Insufficient kernel memory was available.
        ENOMEM_ = ENOMEM,

        // The device containing `pathname` has no room for the new directory.
        //
        // The new directory cannot be created because the user's disk quota is exhausted.
        ENOSPC_ = ENOSPC,

        // A component used as a directory in `pathname` is not, in fact, a directory.
        ENOTDIR_ = ENOTDIR,

        // The filesystem containing `pathname` does not support the creation of directories.
        EPERM_ = EPERM,

        // `pathname` refers to a file on a read-only filesystem.
        EROFS_ = EROFS,
    };

    return Result<void, Error>(_abi_syscall_2(SYS_mkdir, pathname, mode));
}

} // namespace linux

#endif
