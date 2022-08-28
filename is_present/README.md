[Twitter](https://twitter.com/conPdePABLO)

[LinkedIn](https://www.linkedin.com/in/parequena/)

[GitHub](https://github.com/parequena)

## Introduction

Check if type T is present in the next list. This can be used, for example, if you have a parameter pack in a class, and you have a templatized method.

## Functions / classes
``` cpp
// If T is present on next types.
template <typename T, typename... Ts>
constexpr bool is_present();
```
 
## Installation and compilation
1. Compile this example with any compiler.
2. In my case, clang++, execute: `clang++ -std=c++20 main.cpp -o is_simple`
3. Execute code: `./is_simple`

All in one:

`clang++ -std=c++20 main.cpp -o is_simple && ./is_simple`
