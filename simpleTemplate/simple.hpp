#ifndef SIMPLE_HPP
#define SIMPLE_HPP

#include <iostream>

// ------------------------------------------------------------------------------------------------------------------------------------
// Simple template parameter
//
template <typename T>
void print(T param)
{
    std::cout << "Param: " << param << '\n';
}

// ------------------------------------------------------------------------------------------------------------------------------------
// Simple non typename tempalte parameter
//
template <std::size_t N>
void printNtimes()
{
    for(std::size_t i{}; i < N; ++i)
    {
        std::cout << "Print: " << i << '\n';
    }
}

// ------------------------------------------------------------------------------------------------------------------------------------
// Simple template struct/class.
//
template <typename T>
struct Foo
{
    constexpr explicit Foo(T val) noexcept
        : val_{val}
    { }

    void print() const noexcept
    {
        std::cout << "Printing Foo::val_ :" << val_ << '\n';
    }

private:
    T val_{};
};

#endif // SIMPLE_HPP