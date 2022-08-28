#include "is_present.hpp"

#include <iostream>
#include <string_view>

template <typename... Ts>
void checkAndPrint(std::string_view str, std::string_view expected)
{
    bool b = is_present<Ts...>();
    std::cout << "is_present" << str << ": " << b << " - " << expected << '\n';
}

int main()
{
                 checkAndPrint<int>("<int>             ", "false");
            checkAndPrint<int, int>("<int, int>        ", "true");
           checkAndPrint<int, char>("<int, char>       ", "false");
      checkAndPrint<int, char, int>("<int, char, int>  ", "true");
    checkAndPrint<int, char, float>("<int, char, float>", "false");

    return 0;
}