#include "EqualTriangle.h"

EqualTriangle::EqualTriangle(int sides_count, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(sides_count, side_a, side_b, side_c, angle_A, angle_B, angle_C)
{
    name = "Равносторонний треугольник";

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

    if (side_b != side_c || side_b != side_a || side_c != side_a)
    {
        throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
            + std::to_string(side_c) + "; углы " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
            + std::to_string(angle_C) + ") не был создан. Причина: Стороны не равны");
    }

    if (angle_A != 60 || angle_B != 60 || angle_C != 60) 
    {
        throw BadFormException(name + " (стороны " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
            + std::to_string(side_c) + "; углы " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
            + std::to_string(angle_C) + ") не был создан. Причина: Углы не равны 60");
    }
}