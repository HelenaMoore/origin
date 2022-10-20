#include "Rhombus.h"

Rhombus::Rhombus(int side_a, int angle_A, int angle_B) : Parallelogram(side_a, side_b, angle_A, angle_B)
    {
        side_b = side_c = side_d = side_a;
        angle_C = angle_A;
        angle_D = angle_B;
        name = "Ромб";
    }