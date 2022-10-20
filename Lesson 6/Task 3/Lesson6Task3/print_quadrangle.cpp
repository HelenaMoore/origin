#include "print_quadrangle.h"
#include <iostream>

void print_quadrangle(Quadrangle& quadrangle)
{
    std::cout << quadrangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << quadrangle.get_side_a() << " b=" << quadrangle.get_side_b() << " c=" << quadrangle.get_side_c() << " d=" << quadrangle.get_side_d() << std::endl
        << "Углы: "
        << "A=" << quadrangle.get_angle_A() << " B=" << quadrangle.get_angle_B() << " C=" << quadrangle.get_angle_C() << " D=" << quadrangle.get_angle_D() << std::endl << std::endl;
}