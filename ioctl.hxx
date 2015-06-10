#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/ioctl.hxx>
namespace os { using ::freebsd::ioctl; }
#elif defined(__linux__)
#  include <linux/ioctl.hxx>
namespace os { using ::linux::ioctl; }
#else
#  error
#endif
