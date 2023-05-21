#pragma once

template <typename T>
T Add(T a, T b)
{
    return a + b;
}

int AddInt(int a, int b);

template <typename T1, typename T2>
auto Mul(T1 a, T2 b)
{
    return a * b;
}

template <typename T>
T Sub(T a, T b)
{
    return a - b;
}

extern template int Sub<int>(int, int);