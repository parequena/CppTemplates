[Twitter](https://twitter.com/conPdePABLO)

[LinkedIn](https://www.linkedin.com/in/parequena/)

[GitHub](https://github.com/parequena)

## Introduction

Will get N'th element of the list.

## Functions / classes
``` cpp
// Get N'th type from the list.
template <std::size_t N, typename... Ts>
struct get_type { };

template <typename T, typename... Ts>
struct get_type<0, T, Ts...>;

template <std::size_t N, typename T, typename... Ts>
struct get_type<N, T, Ts...>;
```
 
## Installation and compilation
1. Compile this example with any compiler.
2. In my case, clang++, execute: `clang++ -std=c++20 main.cpp -o get_type`
3. Execute code: `./get_type`

All in one:

`clang++ -std=c++20 main.cpp -o get_type && ./get_type`
