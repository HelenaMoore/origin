#include "print_figure.h"
#include <iostream>

void print_figure(Figure& figure)
{
    std::cout << figure.get_name() << " (c������: " << figure.get_sides_count() << ") ������" << std::endl;
}