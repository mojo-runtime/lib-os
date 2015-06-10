#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/munmap.hxx>
namespace os { using ::freebsd::munmap; }
#elif defined(__linux__)
#  include <linux/munmap.hxx>
namespace os { using ::linux::munmap; }
#else
#  error
#endif
