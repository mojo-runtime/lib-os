#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/fstat.hxx>
namespace os { using ::freebsd::fstat; }
#elif defined(__linux__)
#  include <linux/fstat.hxx>
namespace os { using ::linux::fstat; }
#else
#  error
#endif
