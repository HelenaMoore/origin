#include "counter.h"
#include <iostream> 

Counter::Counter() {}

Counter::Counter (int num)
{
	this->num = num;
}

void Counter::increase_counter()
{
   ++num;
}

void Counter::decrease_counter()
{
	--num;
}

void Counter::print_number()
{
	std::cout << num << std::endl;
}