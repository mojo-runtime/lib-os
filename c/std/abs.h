#ifndef _c_abs_h_
#define _c_abs_h_

static inline
int
abs(int x)
{
    return x < 0 ? -x : x;
}

#endif
