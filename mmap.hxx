#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/mmap.hxx>
namespace os { using ::freebsd::mmap; }
#elif defined(__linux__)
#  include <linux/mmap.hxx>
namespace os { using ::linux::mmap; }
#else
#  error
#endif
