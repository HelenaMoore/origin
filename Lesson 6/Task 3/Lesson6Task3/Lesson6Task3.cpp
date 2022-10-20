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

#include "print_triangle.h"
#include "print_quadrangle.h"

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    IsoTriangle iso_triangle(10, 20, 50, 60);
    EqualTriangle equal_triangle(30, 60);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Quadrate quadrate(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_triangle(triangle);
    print_triangle(right_triangle);
    print_triangle(iso_triangle);
    print_triangle(equal_triangle);
    print_quadrangle(quadrangle);
    print_quadrangle(rectangle);
    print_quadrangle(quadrate);
    print_quadrangle(parallelogram);
    print_quadrangle(rhombus);

    return 0;
}