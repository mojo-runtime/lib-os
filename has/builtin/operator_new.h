#ifndef has_builtin_operator_new
#  ifdef __has_builtin
#    define has_builtin_operator_new __has_builtin(__builtin_operator_new)
#  elif defined __GNUC__
#    define has_builtin_operator_new 0 /* assuming */
#  else
#    error todo
#  endif
#endif