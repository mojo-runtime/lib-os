#pragma once

#if defined(__unix__)
#  include "compat/__noexcept.h"
#  include "SYS_geteuid.h"
#  include "uid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

static inline
uid_t
geteuid() __noexcept
{
    return __Result_ok(uid_t, __syscall0(SYS_geteuid));
}

#else
#  error
#endif