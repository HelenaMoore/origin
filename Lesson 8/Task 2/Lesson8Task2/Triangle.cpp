#include "Triangle.h"

Triangle::Triangle(int sides_count, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure(sides_count)
    {
        name = "Треугольник";
        this->sides_count = sides_count;
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C;

        if (sides_count != 3)
        {
            throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                  + std::to_string(side_c) + "; углы " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                  + std::to_string(angle_C) + ") не был создан. Причина: Количество сторон не равно 3");
        }

        if ((angle_A + angle_B + angle_C) != 180)
        {
            throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + "; углы " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                + std::to_string(angle_C) + ") не был создан. Причина: Сумма углов не равна 180");
        }
    }

int Triangle::get_side_a() { return side_a; }
int Triangle::get_side_b() { return side_b; }
int Triangle::get_side_c() { return side_c; }
int Triangle::get_angle_A() { return angle_A; }
int Triangle::get_angle_B() { return angle_B; }
int Triangle::get_angle_C() { return angle_C; }