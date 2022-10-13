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

    std::string get_name() { return name; }

    int get_sides_count() { return sides_count; }

    virtual bool check()
    {
        if (sides_count == 0) 
        {
            return 1;
        } else 
        {
            return 0;
        }
    }

    virtual void print_info() 
    {
        std::cout << name << ": " << std::endl ;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        } else 
        {
            std::cout << "Неправильная" << std::endl;
        }

        std::cout << "Количество сторон: " << sides_count << std::endl;
    }
};

class Triangle : public Figure
{
protected:

    int side_a = 0; int side_b = 0; int side_c = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0;

    Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure(3)
    {
        name = "Треугольник";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C;
    }

public:

    Triangle() : Triangle(10, 20, 30, 50, 60, 70) {}

    int get_side_a() { return side_a; }

    int get_side_b() { return side_b; }

    int get_side_c() { return side_c; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    virtual bool check() override
    {
        if (sides_count == 3 && angle_A + angle_B + angle_C == 180)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны: "
            << "a=" << side_a << " b=" << side_b << " c=" << side_c << std::endl
            << "Углы: "
            << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << std::endl << std::endl;
    }
};

class Quadrangle : public Figure
{
protected:

    int side_a = 0; int side_b = 0; int side_c = 0; int side_d = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0; int angle_D = 0;

    Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(4)
    {

        name = "Четырёхугольник";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c; this->side_d = side_d;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C; this->angle_D = angle_D;
    }

public:

    Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80) {}

    int get_side_a() { return side_a; }

    int get_side_b() { return side_b; }

    int get_side_c() { return side_c; }

    int get_side_d() { return side_d; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    int get_angle_D() { return angle_D; }

    virtual bool check() override
    {
        if (sides_count == 4 && angle_A + angle_B + angle_C + angle_D == 360)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Figure::print_info();
        std::cout << "Стороны: "
            << "a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << std::endl
            << "Углы: "
            << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << " D=" << angle_D << std::endl << std::endl;
    }
};

class RightTriangle : public Triangle
{
protected:

    RightTriangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle()

    {
        angle_C = 90;
        name = "Прямоугольный треугольник";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c;
        this->angle_A = angle_A; this->angle_B = angle_B;
    }

public:

    RightTriangle() : RightTriangle(10, 20, 30, 50, 60) {}

    virtual bool check() override
    {
        if (Triangle::check() && angle_C == 90)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Triangle::print_info();
    }
};

class IsoTriangle : public Triangle
{
protected:

    IsoTriangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle()
    {
        side_c = side_a;
        angle_C = angle_A;
        name = "Равнобедренный треугольник";
        this->side_a = side_a; this->side_b = side_b;
        this->angle_A = angle_A; this->angle_B = angle_B;
    }

public:

    IsoTriangle() : IsoTriangle(10, 20, 50, 60) {}

    virtual bool check() override
    {
        if (Triangle::check() && side_c == side_a && angle_C == angle_A)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Triangle::print_info();
    }
};

class EqualTriangle : public Triangle
{
protected:

    EqualTriangle(int side_a, int angle_A) : Triangle()
    {
        side_b = side_c = side_a;
        angle_B = angle_C = angle_A;
        name = "Равносторонний треугольник";
        this->side_a = side_a;
        this->angle_A = angle_A;
    }

public:

    EqualTriangle() : EqualTriangle(30, 60) {}

    virtual bool check() override
    {
        if (Triangle::check() && side_b == side_c && side_c == side_a && angle_B == angle_C && angle_C == angle_A)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Triangle::print_info();
    }
};

class Parallelogram : public Quadrangle
{
protected:

    Parallelogram(int side_a, int side_b, int angle_A, int angle_B) : Quadrangle()
    {
        side_c = side_a;
        side_d = side_b;
        angle_C = angle_A;
        angle_D = angle_B;
        name = "Параллелограмм";
        this->side_a = side_a;
        this->side_b = side_b;
        this->angle_A = angle_A;
        this->angle_B = angle_B;
    }

public:

    Parallelogram() : Parallelogram(20, 30, 30, 40) {}

    virtual bool check() override
    {
        if (Quadrangle::check() && side_c == side_a && side_d == side_b && angle_C == angle_A && angle_D == angle_B)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Quadrangle::print_info();
    }
};

class Rectangle : public Parallelogram
{
protected:

    Rectangle(int side_a, int side_b) : Parallelogram()
    {
        angle_A = 90;
        angle_B = angle_C = angle_D = angle_A;
        side_c = side_a;
        side_d = side_b;
        name = "Прямоугольник";
        this->side_a = side_a;
        this->side_b = side_b;
    }

public:

    Rectangle() : Rectangle(10, 20) {}

    virtual bool check() override
    {
        if (Parallelogram::check() && angle_C == angle_A && angle_A == angle_D && angle_A == angle_B && angle_A == 90)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Quadrangle::print_info();
    }
};

class Quadrate : public Rectangle
{
protected:

    Quadrate(int side_a) : Rectangle()
    {
        side_b = side_c = side_d = side_a;
        name = "Квадрат";
        this->side_a = side_a;
    }

public:

    Quadrate() : Quadrate(20) {}

    virtual bool check() override
    {
        if (Rectangle::check() && side_b == side_c && side_b == side_d && side_b == side_a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Quadrangle::print_info();
    }
};

class Rhombus : public Parallelogram
{
protected:

    Rhombus(int side_a, int angle_A, int angle_B) : Parallelogram()
    {
        side_b = side_c = side_d = side_a;
        angle_C = angle_A;
        angle_D = angle_B;
        name = "Ромб";
        this->side_a = side_a;
        this->angle_A = angle_A;
        this->angle_B = angle_B;
    }

public:

    Rhombus() : Rhombus(30, 30, 40) {}

    virtual bool check() override
    {
        if (Parallelogram::check() && side_b == side_c && side_b == side_d && side_b == side_a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    virtual void print_info() override
    {
        Quadrangle::print_info();
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle triangle;
    RightTriangle right_triangle;
    IsoTriangle iso_triangle;
    EqualTriangle equal_triangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Quadrate quadrate;
    Parallelogram parallelogram;
    Rhombus rhombus;

    figure.print_info();
    std::cout << std::endl;
    triangle.print_info();
    right_triangle.print_info();
    iso_triangle.print_info();
    equal_triangle.print_info();
    quadrangle.print_info();
    rectangle.print_info();
    quadrate.print_info();
    parallelogram.print_info();
    rhombus.print_info();

    return 0;
}
