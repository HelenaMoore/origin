#pragma once
#include <string>
#include "BadFormException.h"

class Figure
{
protected:
    int sides_count = 0;
    std::string name;
public:
    Figure(int sides_count);
    std::string get_name();
    int get_sides_count();
};