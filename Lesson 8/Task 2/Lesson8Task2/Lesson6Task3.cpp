#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoTriangle.h"
#include "EqualTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Quadrate.h"
#include "Rhombus.h"

#include "BadFormException.h"

#include "print_figure.h"
#include "print_triangle.h"
#include "print_quadrangle.h"

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    try
    {
        Figure figure(0);
        print_figure(figure);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        Triangle triangle(4, 0, 20, 30, 50, 60, 70);
        print_triangle(triangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        RightTriangle right_triangle(3, 10, 20, 30, 30, 60, 90);
        print_triangle(right_triangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        IsoTriangle iso_triangle(3, 20, 10, 20, 60, 80, 40);
        print_triangle(iso_triangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        EqualTriangle equal_triangle(3, 20, 30, 30, 60, 60, 60);
        print_triangle(equal_triangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        Quadrangle quadrangle(4, 10, 20, 30, 40, 70, 80, 100, 120);
        print_quadrangle(quadrangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << std::endl; }

    try
    {
        Rectangle rectangle(4, 10, 20, 10, 20, 90, 90, 90, 90);
        print_quadrangle(rectangle);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        Quadrate quadrate(4, 20, 20, 20, 20, 90, 90, 100, 80);
        print_quadrangle(quadrate);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        Parallelogram parallelogram(4, 20, 30, 20, 30, 80, 100, 80, 100);
        print_quadrangle(parallelogram);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    try
    {
        Rhombus rhombus(4, 30, 40, 30, 40, 90, 90, 90, 90);
        print_quadrangle(rhombus);
    }
    catch (const BadFormException& ex) { std::cout << ex.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

    return 0;
}