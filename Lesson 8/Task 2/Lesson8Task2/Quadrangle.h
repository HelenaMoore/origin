#pragma once
#include "Figure.h"
#include <string>

class Quadrangle : public Figure
{
protected:
    int sides_count = 0;
    int side_a = 0; int side_b = 0; int side_c = 0; int side_d = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0; int angle_D = 0;
public:
    Quadrangle(int sides_count, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
    Quadrangle();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    int get_angle_D();
};