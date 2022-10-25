#pragma once
#include "Figure.h"
#include <string>

class Triangle : public Figure
{
protected:
    int sides_count = 0;
    int side_a = 0; int side_b = 0; int side_c = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0;
public:
    Triangle(int sides_count, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
    Triangle();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
};
