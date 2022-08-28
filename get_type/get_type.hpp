#ifndef GET_TYPE_HPP
#define GET_TYPE_HPP

#include <type_traits>

// ------------------------------------------------------------------------------------------------------------------------------------
// Get N'th type from the list.
//
template <std::size_t N, typename... Ts>
struct get_type { };

template <typename T, typename... Ts>
struct get_type<0, T, Ts...> { using type = T; };

template <std::size_t N, typename T, typename... Ts>
struct get_type<N, T, Ts...>
{
    static_assert(N < sizeof...(Ts) + 1, "You cannot ask for an out of bounds index!");
    using type = typename get_type< N - 1, Ts...>::type;
};

#endif // GET_TYPE_HPP