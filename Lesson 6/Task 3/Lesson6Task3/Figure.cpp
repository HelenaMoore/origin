#include "Figure.h"
#include <string>

Figure::Figure() 
{
    name = "������";
}

Figure::Figure(std::string name) 
{
    this->name = name;
}

std::string Figure::get_name() 
{ 
    return name; 
}