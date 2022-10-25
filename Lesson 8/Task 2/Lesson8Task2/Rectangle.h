#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle(int sides_count, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
};