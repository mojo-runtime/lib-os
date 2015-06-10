#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/close.hxx>
namespace os { using ::freebsd::close; }
#elif defined(__linux__)
#  include <linux/close.hxx>
namespace os { using ::linux::close; }
#else
#  error
#endif
