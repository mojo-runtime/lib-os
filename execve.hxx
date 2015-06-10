#pragma once

#if defined(__FreeBSD__)
#  include <freebsd/execve.hxx>
namespace os { using ::freebsd::execve; }
#elif defined(__linux__)
#  include <linux/execve.hxx>
namespace os { using ::linux::execve; }
#else
#  error
#endif
