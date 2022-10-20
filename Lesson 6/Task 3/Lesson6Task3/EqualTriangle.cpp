#include "EqualTriangle.h"

EqualTriangle::EqualTriangle(int side_a, int angle_A) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C)
    {
        side_b = side_c = side_a;
        angle_B = angle_C = angle_A;
        name = "Равносторонний треугольник";
    }