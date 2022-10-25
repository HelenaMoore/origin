#include "Quadrate.h"

Quadrate::Quadrate(int sides_count, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(sides_count, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D)
    {
        name = "�������";

        if (sides_count != 4)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; ���� " + std::to_string(angle_A) + ", "
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D)
                + ") �� ��� ������. �������: ���������� ������ �� ����� 4");
        }

        if ((angle_A + angle_B + angle_C + angle_D) != 360)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; ���� " + std::to_string(angle_A) + ", "
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D)
                + ") �� ��� ������. �������: ����� ����� �� ����� 360");
        }

        if (side_b != side_c || side_b != side_d || side_b != side_a || side_c != side_d || side_c != side_a || side_d != side_a)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; ���� " + std::to_string(angle_A) + ", "
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D)
                + ") �� ��� ������. �������: ������� �� �����");
        }

        if (angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + ", " + std::to_string(side_d) + "; ���� " + std::to_string(angle_A) + ", "
                + std::to_string(angle_B) + ", " + std::to_string(angle_C) + ", " + std::to_string(angle_D)
                + ") �� ��� ������. �������: ���� �� ����� 90");
        }
    }