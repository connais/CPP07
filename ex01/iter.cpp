#include "iter.hpp"

template <typename T, typename U>
void    iter(T & tab, U size_tab, void funct(T & tab, U size_tab))
{
    funct(tab, size_tab);
    return ;
}