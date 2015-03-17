#pragma once

#include "compat/__Word.h"

#pragma clang diagnostic ignored "-Wgnu-statement-expression" // FIXME

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__) && defined(__x86_64__)
#  define __syscall0(n)                                                 \
    ({                                                                  \
        __Word                                                          \
        result;                                                         \
                                                                        \
        __asm__ volatile (                                              \
            "syscall"                                                   \
            : "=a" (result)                                             \
            : "0" (n)                                                   \
            : "rcx", "r11"                                              \
        );                                                              \
                                                                        \
        result;                                                         \
    })
#else
#  error
#endif

#pragma clang diagnostic pop