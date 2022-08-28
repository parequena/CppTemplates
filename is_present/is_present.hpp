#ifndef IS_PRESENT_HPP
#define IS_PRESENT_HPP

#include <type_traits>

// ------------------------------------------------------------------------------------------------------------------------------------
// If T is present on next types.
//
template <typename T, typename... Ts>
constexpr bool is_present()
{
    return (false || ... || std::is_same_v<T, Ts>);
}

#endif // IS_PRESENT_HPP