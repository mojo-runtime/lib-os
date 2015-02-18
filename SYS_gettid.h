#ifndef c_SYS_gettid_h_
#define c_SYS_gettid_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_gettid =
#if defined(__linux__) && defined(__x86_64__)
 186
#else
#  error
#endif
 ;

__c_namespace_close

#endif
