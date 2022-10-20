#include "Rectangle.h"

Rectangle::Rectangle(int side_a, int side_b) : Parallelogram(side_a, side_b, 90, angle_B)
    {
        angle_B = angle_C = angle_D = angle_A;
        side_c = side_a;
        side_d = side_b;
        name = "Прямоугольник";
    }