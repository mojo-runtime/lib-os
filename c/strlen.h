#pragma once

#include "compat/__has_builtin.h"
#include "compat/__noexcept.h"
#include "size_t.h"

static inline
size_t
strlen(const char* s) __noexcept
{
#if __has_builtin(__builtin_strlen)
    return __builtin_strlen(s);
#else
#  error
#endif
}