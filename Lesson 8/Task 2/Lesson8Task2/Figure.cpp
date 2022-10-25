#include "Figure.h"
#include <string>

Figure::Figure(int sides_count) 
{
    sides_count = 0;
    name = "������";
    this->sides_count = sides_count;
    this->name = name;

    if (sides_count != 0)
    {
        throw BadFormException(name + " (c������: " + std::to_string(sides_count) + 
              ") �� ��� ������. �������: ���������� ������ �� ����� 0");
    }
}

std::string Figure::get_name() 
{ 
    return name; 
}

int Figure::get_sides_count()
{
    return sides_count;
}