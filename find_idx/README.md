[Twitter](https://twitter.com/conPdePABLO)

[LinkedIn](https://www.linkedin.com/in/parequena/)

[GitHub](https://github.com/parequena)

## Introduction

Will get type on the typelist.

## Functions / classes
``` cpp
// Find type on the list of types.
template<typename... Ts>
struct find_idx;

template<typename T, typename... Ts>
struct find_idx<T, T, Ts...>;

template<typename T, typename U, typename... Ts>
struct find_idx<T, U, Ts...>;
```
 
## Installation and compilation
1. Compile this example with any compiler.
2. In my case, clang++, execute: `clang++ -std=c++20 main.cpp -o find_idx`
3. Execute code: `./find_idx`

All in one:

`clang++ -std=c++20 main.cpp -o find_idx && ./find_idx`
