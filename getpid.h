#ifndef c_getpid_h_
#define c_getpid_h_

#include "c/noexcept.h"
#include "c/pid_t.h"
#include "c/SYS_getpid.h"

__c_namespace_open

static
pid_t
getpid() noexcept
{
    pid_t result;

#if defined(__linux__) && defined(__x86_64__)
    __asm__("syscall" // NOT volatile
            : "=a" (result)
            : "0" (SYS_getpid)
            : "rcx", "r11");
#else
#  error
#endif

    return result;
}

__c_namespace_close

#endif
