#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/read.hxx>
namespace os { using ::freebsd::read; }
#elif defined(__linux__)
#  include <linux/read.hxx>
namespace os { using ::linux::read; }
#else
#  error
#endif
