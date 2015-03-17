#pragma once

#include "compat/__has_builtin.h"
#include "compat/__noexcept.h"
#include "size_t.h"

static inline
void*
memcpy(void* dest, const void* src, size_t n) __noexcept
{
#if __has_builtin(__builtin_memcpy)
    return __builtin_memcpy(dest, src, n);
#else
#  error
#endif
}