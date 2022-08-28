#include "are_unique.hpp"

#include <iostream>
#include <string_view>

template <typename... Ts>
void areUniqueAndPrint(std::string_view str)
{
    std::cout << "are_unique" << str << ": " << are_unique<Ts...>::value << '\n';
}

int main()
{
                 areUniqueAndPrint<int>("<int>             ");
           areUniqueAndPrint<int, char>("<int, char>       ");
     areUniqueAndPrint<int, int, float>("<int, int, float> ");
    areUniqueAndPrint<int, char, float>("<int, char, float>");
    return 0;
}