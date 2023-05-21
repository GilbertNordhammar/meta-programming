
#include <iostream>

#include "Foo.h"

void main()
{
    std::cout << "Hello Worlds!" << std::endl;
    Foo();

#ifdef DEBUG_BUILD
    std::cout << "Debug" << std::endl;
#elif RELEASE_BUILD
    std::cout << "Release" << std::endl;
#endif
}