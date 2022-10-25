#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int sides_count, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
};