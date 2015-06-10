#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/fork.hxx>
namespace os { using ::freebsd::fork; }
#elif defined(__linux__)
#  include <linux/fork.hxx>
namespace os { using ::linux::fork; }
#else
#  error
#endif
