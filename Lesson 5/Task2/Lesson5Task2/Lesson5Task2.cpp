#include <iostream>
#include <string>

class Figure
{
protected:

    std::string name = "Фигура";

    Figure(std::string name)
    {
        this->name = name;
    }

public:

    Figure() {}

    std::string get_name() { return name; }
};

class Triangle : public Figure
{
protected:

    int side_a = 0; int side_b = 0; int side_c = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0;

    Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure()
    {
        name = "Треугольник";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C;
    }

public:
    
    Triangle() : Triangle (10, 20, 30, 50, 60, 70) {}

    int get_side_a() { return side_a; }

    int get_side_b() { return side_b; }

    int get_side_c() { return side_c; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }
};

class Quadrangle : public Figure
{
protected:

    int side_a = 0; int side_b = 0; int side_c = 0; int side_d = 0;
    int angle_A = 0; int angle_B = 0; int angle_C = 0; int angle_D = 0;
    
    Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure()
    {
  
        name = "Четырёхугольник";
        this->side_a = side_a; this->side_b = side_b; this->side_c = side_c; this->side_d = side_d;
        this->angle_A = angle_A; this->angle_B = angle_B; this->angle_C = angle_C; this->angle_D = angle_D;
    }

public:

    Quadrangle() : Quadrangle (10, 20, 30, 40, 50, 60, 70, 80) {}

    int get_side_a() { return side_a; }

    int get_side_b() { return side_b; }

    int get_side_c() { return side_c; }

    int get_side_d() { return side_d; }

    int get_angle_A() { return angle_A; }

    int get_angle_B() { return angle_B; }

    int get_angle_C() { return angle_C; }

    int get_angle_D() { return angle_D; }
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

    RightTriangle() : RightTriangle (10, 20, 30, 50, 60) {}
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

    Quadrate() : Quadrate (20) {}
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
};

void print_description(Triangle triangle, RightTriangle right_triangle, IsoTriangle iso_triangle,
                        EqualTriangle equal_triangle, Quadrangle quadrangle, Rectangle rectangle,
                        Quadrate quadrate, Parallelogram parallelogram, Rhombus rhombus)
{
    std::cout << triangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << triangle.get_side_a() << " b=" << triangle.get_side_b() << " c=" << triangle.get_side_c() << std::endl
        << "Углы: "
        << "A=" << triangle.get_angle_A() << " B=" << triangle.get_angle_B() << " C=" << triangle.get_angle_C() << std::endl << std::endl;

    std::cout << right_triangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << right_triangle.get_side_a() << " b=" << right_triangle.get_side_b() << " c=" << right_triangle.get_side_c() << std::endl
        << "Углы: "
        << "A=" << right_triangle.get_angle_A() << " B=" << right_triangle.get_angle_B() << " C=" << right_triangle.get_angle_C() << std::endl << std::endl;

    std::cout << iso_triangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << iso_triangle.get_side_a() << " b=" << iso_triangle.get_side_b() << " c=" << iso_triangle.get_side_c() << std::endl
        << "Углы: "
        << "A=" << iso_triangle.get_angle_A() << " B=" << iso_triangle.get_angle_B() << " C=" << iso_triangle.get_angle_C() << std::endl << std::endl;

    std::cout << equal_triangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << equal_triangle.get_side_a() << " b=" << equal_triangle.get_side_b() << " c=" << equal_triangle.get_side_c() << std::endl
        << "Углы: "
        << "A=" << equal_triangle.get_angle_A() << " B=" << equal_triangle.get_angle_B() << " C=" << equal_triangle.get_angle_C() << std::endl << std::endl;

    std::cout << quadrangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << quadrangle.get_side_a() << " b=" << quadrangle.get_side_b() << " c=" << quadrangle.get_side_c() << " d=" << quadrangle.get_side_d() << std::endl
        << "Углы: "
        << "A=" << quadrangle.get_angle_A() << " B=" << quadrangle.get_angle_B() << " C=" << quadrangle.get_angle_C() << " D=" << quadrangle.get_angle_D() << std::endl << std::endl;

    std::cout << rectangle.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << rectangle.get_side_a() << " b=" << rectangle.get_side_b() << " c=" << rectangle.get_side_c() << " d=" << rectangle.get_side_d() << std::endl
        << "Углы: "
        << "A=" << rectangle.get_angle_A() << " B=" << rectangle.get_angle_B() << " C=" << rectangle.get_angle_C() << " D=" << rectangle.get_angle_D() << std::endl << std::endl;

    std::cout << quadrate.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << quadrate.get_side_a() << " b=" << quadrate.get_side_b() << " c=" << quadrate.get_side_c() << " d=" << quadrate.get_side_d() << std::endl
        << "Углы: "
        << "A=" << quadrate.get_angle_A() << " B=" << quadrate.get_angle_B() << " C=" << quadrate.get_angle_C() << " D=" << quadrate.get_angle_D() << std::endl << std::endl;

    std::cout << parallelogram.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << parallelogram.get_side_a() << " b=" << parallelogram.get_side_b() << " c=" << parallelogram.get_side_c() << " d=" << parallelogram.get_side_d() << std::endl
        << "Углы: "
        << "A=" << parallelogram.get_angle_A() << " B=" << parallelogram.get_angle_B() << " C=" << parallelogram.get_angle_C() << " D=" << parallelogram.get_angle_D() << std::endl << std::endl;

    std::cout << rhombus.get_name() << ": " << std::endl
        << "Стороны: "
        << "a=" << rhombus.get_side_a() << " b=" << rhombus.get_side_b() << " c=" << rhombus.get_side_c() << " d=" << rhombus.get_side_d() << std::endl
        << "Углы: "
        << "A=" << rhombus.get_angle_A() << " B=" << rhombus.get_angle_B() << " C=" << rhombus.get_angle_C() << " D=" << rhombus.get_angle_D() << std::endl << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    RightTriangle right_triangle;
    IsoTriangle iso_triangle;
    EqualTriangle equal_triangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Quadrate quadrate;
    Parallelogram parallelogram;
    Rhombus rhombus;

    print_description(triangle, right_triangle, iso_triangle, equal_triangle, quadrangle, rectangle, quadrate, parallelogram, rhombus);
    
    return 0;
}