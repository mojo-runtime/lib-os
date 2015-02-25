#ifndef linux_exit_hxx_
#define linux_exit_hxx_

#include "abi/_abi_syscall_1.h"
#include "c/SYS_exit.h"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    _abi_syscall_1(SYS_exit, status);
    __builtin_unreachable();
}

} // namespace linux

#endif
