#include "math_functions.h"

double sum(double num1, double num2)
	{
		return num1 + num2;
	}

double sub(double num1, double num2)
{
	return num1 - num2;
}

double mult(double num1, double num2)
{
	return num1 * num2;
}

double division(double num1, double num2)
{
	return num1 / num2;
}

long double power(double num1, double num2)
{
	long long result = 1;
	for (int i = 1; i <= num2; ++i)
	{
		result = result * num1;
	}
	return result;
}