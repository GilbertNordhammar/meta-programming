#pragma once

#include "MyBase.h"

class MyChildInt : public MyBase<int>
{
public:
    MyChildInt(int value)
        : MyBase(value)
    {
    }
};

template <typename T>
class MyChild : public MyBase<T>
{
public:
    MyChild(T value)
        : MyBase(value)
    {
    }
};