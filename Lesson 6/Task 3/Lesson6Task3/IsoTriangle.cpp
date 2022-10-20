#include "IsoTriangle.h"

IsoTriangle::IsoTriangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C)
    {
        side_c = side_a;
        angle_C = angle_A;
        name = "Равнобедренный треугольник";
    }