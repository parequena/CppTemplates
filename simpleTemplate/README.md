[Twitter](https://twitter.com/conPdePABLO)

[LinkedIn](https://www.linkedin.com/in/parequena/)

[GitHub](https://github.com/parequena)

## Introduction

This are simple examples

You have a simple [CTAD](https://en.cppreference.com/w/cpp/language/class_template_argument_deduction) example :D

## Functions / classes
``` cpp
// Print typename T parameter.
template <typename T>
void print(T param);

// Print N times as a template.
template <std::size_t N>
void printNtimes();

// Template struct.
template <typename T>
struct Foo;

// Simple CTAD
template <typename T, typename U>
T justACast(U u);
```
 
## Installation and compilation
1. Compile this example with any compiler.
2. In my case, clang++, execute: `clang++ -std=c++20 main.cpp -o simple`
3. Execute code: `./simple`

All in one:

`clang++ -std=c++20 main.cpp -o simple && ./simple`
