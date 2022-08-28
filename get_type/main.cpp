#include "get_type.hpp"

#include <iostream>
#include <string_view>
#include <type_traits>

template <typename EXPECTED, std::size_t N, typename... Ts>
void checkType()
{
    using type = typename get_type<N, Ts...>::type;

    if( std::is_same_v<EXPECTED, type> ) { std::cout << "Same!\n"; }
    else                                 { std::cout << "Not same!\n"; }
}

int main()
{
    checkType<void, 0, int>();
    checkType<int, 0, int>();
    // checkType<int, 1, int>(); // Fail, bigger than list!
    checkType<int, 0, int, char, float>();
    checkType<char, 1, int, char, float>();
    checkType<float, 2, int, char, float>();


    return 0;
}