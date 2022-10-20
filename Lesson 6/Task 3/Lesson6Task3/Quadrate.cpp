#include "Quadrate.h"

Quadrate::Quadrate(int side_a) : Rectangle(side_a, side_b)
    {
        side_b = side_c = side_d = side_a;
        angle_A = 90;
        angle_B = angle_C = angle_D = angle_A;
        name = " вадрат";
    }