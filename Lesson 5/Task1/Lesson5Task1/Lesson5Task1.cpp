#include <iostream>
#include <string>

class Figure
{
protected:

    int sides_count = 0;
    std::string name = "Фигура";

    Figure(int sides_count) 
    {
        this->sides_count = sides_count;
    }

public:

    Figure() {}

    int get_sides_count()
    {
        return sides_count;
    }

    std::string get_name()
    {
        return name;
    }
};

class Triangle : public Figure
{
public:

    Triangle(): Figure(3)
    {
        name = "Треугольник";
    }
};

class Quadrangle: public Figure
{
public:

    Quadrangle() : Figure(4)
    {
        name = "Четырёхугольник";
    }
};

void print_description(Figure figure, Triangle triangle, Quadrangle quadrangle)
{
    std::cout << "Количество сторон: " << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    print_description(figure, triangle, quadrangle);

    return 0;
}