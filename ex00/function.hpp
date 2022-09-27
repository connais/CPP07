#pragma once
#include <iostream>
#include <string>

template<typename T>
void swap(T & a, T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    return ;
}

template<typename T>
T const min(T const & a, T const & b)
{
    return( (b <= a) ? b : a);
}

template<typename T>
T const max(T const & a, T const & b)
{
    return( (b >= a) ? b : a);
}
