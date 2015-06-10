#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/stat.hxx>
namespace os { using ::freebsd::stat; }
#elif defined(__linux__)
#  include <linux/stat.hxx>
namespace os { using ::linux::stat; }
#else
#  error
#endif
