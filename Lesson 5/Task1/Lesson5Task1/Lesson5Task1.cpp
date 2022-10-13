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

    void print_description(Figure &figure)
    {
        std::cout << "Название: "<< figure.get_name() << std::endl 
                  << "Количество сторон: " << figure.get_sides_count() << std::endl;
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

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    figure.print_description(figure);
    triangle.print_description(triangle);
    quadrangle.print_description(quadrangle);

    return 0;
}