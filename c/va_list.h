#pragma once

#if defined(__GNUC__) // Assuming
#  define va_list __builtin_va_list
#else
#  error
#endif
