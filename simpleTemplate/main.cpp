#include "simple.hpp"

int main()
{
    print<int>(2); // Will print 2 in console.

    print( std::string{ "Hello!" } ); // Will print Hello, deducing std::string as template parameter.

    printNtimes<4>(); // This will print 4 times.

    Foo<std::string> f{ "VALUE" }; // This will create an string foo class.
    f.print();

    getSize(3, "hello", 14.7F); // This will print how many parameters you parsed.

    // CTAD Example!
    int i = justACast<int>( float{3.3f} );
    print(i);

    return 0;
}