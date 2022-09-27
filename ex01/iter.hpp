#pragma once
#include <iostream>
#include <string>
#include <iomanip>

template <typename T, typename U>
void    print_elem(T & tab, U size_tab)
{
    int i = -1;
    while (++i < size_tab)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    return ;
}
template <typename T, typename U>
void    iter(T & tab, U size_tab, void (*funct)(T & tab, U size_tab))
{
    funct(tab, size_tab);
    return ;
}