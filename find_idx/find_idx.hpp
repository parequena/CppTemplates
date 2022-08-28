#ifndef FIND_IDX_HPP
#define FIND_IDX_HPP

#include <type_traits>

// ------------------------------------------------------------------------------------------------------------------------------------
// Get N'th type from the list.
//
template<typename... Ts>
struct find_idx { };

template<typename T, typename... Ts>
struct find_idx<T, T, Ts...> { constexpr static std::size_t value{ 0 }; };

template<typename T, typename U, typename... Ts>
struct find_idx<T, U, Ts...>
{
  static_assert( (false || ... || std::is_same_v<T, Ts>) , "");
  constexpr static std::size_t value{ 1 + find_idx<T, Ts...>::value };
};

#endif // FIND_IDX_HPP