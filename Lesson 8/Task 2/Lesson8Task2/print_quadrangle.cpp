#include "print_quadrangle.h"
#include <iostream>

void print_quadrangle(Quadrangle& quadrangle)
{
    std::cout << quadrangle.get_name()
        << " (c������: " << quadrangle.get_side_a() << ", " << quadrangle.get_side_b() << ", " << quadrangle.get_side_c() << ", " << quadrangle.get_side_d()
        << "; ����: " << quadrangle.get_angle_A() << ", " << quadrangle.get_angle_B() << ", " << quadrangle.get_angle_C() << ", " << quadrangle.get_angle_D() << ") ������" << std::endl;
}