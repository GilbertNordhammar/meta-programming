#pragma once

#include <iostream>

template <typename T>
class MyBase
{
public:
    MyBase(T value)
        : m_Value(value)
    {
    }

    void PrintValue()
    {
        std::cout << m_Value << "\n";
    }

    template <typename T2>
    T2 GetValueAs()
    {
        return static_cast<T2>(m_Value);
    }

    T Get()
    {
        return GetValueAs<T>();
    }

    T m_Value;
};