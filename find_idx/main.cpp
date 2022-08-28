#include "find_idx.hpp"

#include <iostream>

template <typename EXPECTED, typename... LIST>
void findAndPrint(std::size_t expected_idx)
{
    std::cout << "Find: " << find_idx<EXPECTED, LIST...>::value << " - " << expected_idx << '\n';
}

int main()
{
    findAndPrint<int, int>(0);
    findAndPrint<int, char, int>(1);
    findAndPrint<int, float, char, int>(2);
    // findAndPrint<int>(0); // This will fail, because we need a list to search on.

    return 0;
}