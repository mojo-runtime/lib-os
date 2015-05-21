#pragma once

#if defined(__has_attribute)
#  define __has_attribute_deprecated __has_attribute(deprecated)
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_deprecated __has_gnuc(3, 2)
#else
#  error
#endif
