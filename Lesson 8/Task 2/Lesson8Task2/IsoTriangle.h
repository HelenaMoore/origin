#pragma once
#include "Triangle.h"

class IsoTriangle : public Triangle
{
public:
	IsoTriangle(int sides_count, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
};