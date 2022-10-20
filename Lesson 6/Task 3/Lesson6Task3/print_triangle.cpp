#include "print_triangle.h"
#include <iostream>

void print_triangle(Triangle& triangle)
{
    std::cout << triangle.get_name() << ": " << std::endl
        << "�������: "
        << "a=" << triangle.get_side_a() << " b=" << triangle.get_side_b() << " c=" << triangle.get_side_c() << std::endl
        << "����: "
        << "A=" << triangle.get_angle_A() << " B=" << triangle.get_angle_B() << " C=" << triangle.get_angle_C() << std::endl << std::endl;
}