#include "Quadrangle.h"

Quadrangle::Quadrangle(int sides_count, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(sides_count)
    {
        name = "Четырёхугольник";
        this->sides_count = sides_count;
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c; this->side_d = side_d;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C; this->angle_D = angle_D;

        if (sides_count != 4)
        {
            throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; углы " + std::to_string(angle_A) + ", " 
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D) 
                + ") не был создан. Причина: Количество сторон не равно 4");
        }

        if ((angle_A + angle_B + angle_C +angle_D) != 360)
        {
            throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; углы " + std::to_string(angle_A) + ", "
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D)
                + ") не был создан. Причина: Сумма углов не равна 360");
        }
    }

int Quadrangle::get_side_a() { return side_a; }
int Quadrangle::get_side_b() { return side_b; }
int Quadrangle::get_side_c() { return side_c; }
int Quadrangle::get_side_d() { return side_d; }
int Quadrangle::get_angle_A() { return angle_A; }
int Quadrangle::get_angle_B() { return angle_B; }
int Quadrangle::get_angle_C() { return angle_C; }
int Quadrangle::get_angle_D() { return angle_D; }