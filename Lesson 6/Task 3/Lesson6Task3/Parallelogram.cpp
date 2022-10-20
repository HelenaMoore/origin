#include "Parallelogram.h"

Parallelogram::Parallelogram(int side_a, int side_b, int angle_A, int angle_B) : Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D)
    {
        side_c = side_a;
        side_d = side_b;
        angle_C = angle_A;
        angle_D = angle_B;
        name = "ֿאנאככוכמדנאלל";
    }