#ifndef unix_getpid_h_
#define unix_getpid_h_

#include "compat/_Nothrow.h"

#include "SYS_getpid.h"
#include "pid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
pid_t
getpid()
{
    return _syscall_Result_ok(pid_t, _syscall_0(SYS_getpid));
}

#endif