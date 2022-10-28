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

// ------------------------------------------------------------------------------------------------------------------------------------
// Simple parameter pack use :D
//
template <typename... Ts>
void getSize(Ts... ts)
{
    constexpr std::size_t size { sizeof...(ts) }; // ... will expand the parameter pack!
    std::cout << "You parsed " << size << "arguments.\n";
}

// ------------------------------------------------------------------------------------------------------------------------------------
// Simple CTAD
//
template <typename T, typename U>
T justACast(U u)
{
    return static_cast<T>(u);
}


#endif // SIMPLE_HPP