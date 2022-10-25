#include "print_triangle.h"
#include <iostream>

void print_triangle(Triangle& triangle)
{
    std::cout << triangle.get_name()
        << " (�������: " << triangle.get_side_a() << ", " << triangle.get_side_b() << ", " << triangle.get_side_c()
        << "; ����: " << triangle.get_angle_A() << ", " << triangle.get_angle_B() << ", " << triangle.get_angle_C() << ") ������" << std::endl;
}