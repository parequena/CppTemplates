#ifndef FIND_IDX_HPP
#define FIND_IDX_HPP

#include <type_traits>

// ------------------------------------------------------------------------------------------------------------------------------------
// Check if all are unique types.
//
template<typename...>
struct are_unique { static constexpr bool value { true }; };

template<typename T, typename... Ts>
struct are_unique<T, Ts...>
{
    static constexpr bool value { (!(false || ... || std::is_same_v<T, Ts> )) && are_unique<Ts...>::value };
};

#endif // FIND_IDX_HPP