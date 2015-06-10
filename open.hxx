#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/open.hxx>
namespace os { using ::freebsd::open; }
#elif defined(__linux__)
#  include <linux/open.hxx>
namespace os { using ::linux::open; }
#else
#  error
#endif
