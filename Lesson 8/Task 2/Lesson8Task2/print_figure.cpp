#include "print_figure.h"
#include <iostream>

void print_figure(Figure& figure)
{
    std::cout << figure.get_name() << " (cтороны: " << figure.get_sides_count() << ") создан" << std::endl;
}