#ifndef _std_is_same_hxx_
#define _std_is_same_hxx_

namespace std {

template <typename X, typename Y>
struct is_same
{
    static
    const bool
    value = false;
};

template <typename X>
struct is_same<X, X>
{
    static
    const bool
    value = true;
};

} // namespace std

#endif
