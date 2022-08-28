[Twitter](https://twitter.com/conPdePABLO)

[LinkedIn](https://www.linkedin.com/in/parequena/)

[GitHub](https://github.com/parequena)

## Introduction

Check if all are unique types.

## Functions / classes
``` cpp
// Check if all are unique types.
template<typename...>
struct are_unique;

template<typename T, typename... Ts>
struct are_unique<T, Ts...>;
```
 
## Installation and compilation
1. Compile this example with any compiler.
2. In my case, clang++, execute: `clang++ -std=c++20 main.cpp -o are_unique`
3. Execute code: `./are_unique`

All in one:

`clang++ -std=c++20 main.cpp -o are_unique && ./are_unique`
