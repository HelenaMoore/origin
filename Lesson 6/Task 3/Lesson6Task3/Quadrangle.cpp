#include "Quadrangle.h"

Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure()
    {
        name = "��������������";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c; this->side_d = side_d;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C; this->angle_D = angle_D;
    }

Quadrangle::Quadrangle() {}

int Quadrangle::get_side_a() { return side_a; }
int Quadrangle::get_side_b() { return side_b; }
int Quadrangle::get_side_c() { return side_c; }
int Quadrangle::get_side_d() { return side_d; }
int Quadrangle::get_angle_A() { return angle_A; }
int Quadrangle::get_angle_B() { return angle_B; }
int Quadrangle::get_angle_C() { return angle_C; }
int Quadrangle::get_angle_D() { return angle_D; }