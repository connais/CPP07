#include "iter.hpp"

int main()
{
    std::string tab = "bonjour";
    int bat[5] = {34, 25, 14, 99, 55};
    iter(tab, 7, print_elem);
    iter(bat, 5, print_elem);

}