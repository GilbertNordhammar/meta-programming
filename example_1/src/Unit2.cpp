
#include <iostream>

#include "Math.h"

void main2()
{
    std::cout << Add(1, 2) << "\n"; // Add(1, 2) == Add<int>(1, 2)
    std::cout << Add(1.2f, 2.3f) << "\n";
    // Add(1, 2.2f);  // ERROR
    std::cout << Mul(2.5f, 3) << "\n";
    std::cout << AddInt(1, 2) << "\n";
    std::cout << Sub(3, 2) << "\n";
}