#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/write.hxx>
namespace os { using ::freebsd::write; }
#elif defined(__linux__)
#  include <linux/write.hxx>
namespace os { using ::linux::write; }
#else
#  error
#endif
