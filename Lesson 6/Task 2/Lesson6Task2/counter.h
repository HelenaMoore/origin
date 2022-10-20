#pragma once
class Counter 
{
private:
	int num = 1;
public:
	Counter();
	Counter(int num);
	void increase_counter();
	void decrease_counter();
	void print_number();
};