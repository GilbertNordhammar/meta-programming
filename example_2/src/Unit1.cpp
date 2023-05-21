
#include <iostream>

#include "MyBase.h"
#include "MyChild.h"

void main()
{
    MyBase f1(13.37);
    std::cout << f1.m_Value << "\n";
    std::cout << f1.GetValueAs<int>() << "\n";
    f1.PrintValue();
    f1.Get();

    MyBase f2(13.37f);
    std::cout << f2.m_Value << "\n";
    std::cout << f2.GetValueAs<int>() << "\n";
    f2.PrintValue();
    f2.Get();
}