#include "IsoTriangle.h"

IsoTriangle::IsoTriangle(int sides_count, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(sides_count, side_a, side_b, side_c, angle_A, angle_B, angle_C)
    {
        name = "�������������� �����������";

        if (sides_count != 3)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + "; ���� " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                + std::to_string(angle_C) + ") �� ��� ������. �������: ���������� ������ �� ����� 3");
        }

        if ((angle_A + angle_B + angle_C) != 180)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + "; ���� " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                + std::to_string(angle_C) + ") �� ��� ������. �������: ����� ����� �� ����� 180");
        }

        if (side_c != side_a)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + "; ���� " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                + std::to_string(angle_C) + ") �� ��� ������. �������: ������� a � c �� �����");
        }

        if (angle_C != angle_A)
        {
            throw BadFormException(name + " (������� " + std::to_string(side_a) + ", " + std::to_string(side_b) + ", "
                + std::to_string(side_c) + "; ���� " + std::to_string(angle_A) + ", " + std::to_string(angle_B) + ", "
                + std::to_string(angle_C) + ") �� ��� ������. �������: ���� A � C �� �����");
        }
    }