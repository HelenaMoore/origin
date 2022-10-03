#include <iostream>

class Calculator
{
private:
    double num1;
    double num2;

public:
    double add()
    {
        double sum = num1 + num2;
        return sum;
    }

    double multiply()
    {
        double mult = num1 * num2;
        return mult;
    }

    double substruct_1_2()
    {
        double diff_1_2 = num1 - num2;
        return diff_1_2;
    }

    double substruct_2_1()
    {
        double diff_2_1 = num2 - num1;
        return diff_2_1;
    }

    double divide_1_2()
    {
        double division_1_2 = num1 / num2;
        return division_1_2;
    }

    double divide_2_1()
    {
        double division_2_1 = num2 / num1;
        return division_2_1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

void printCalculator(Calculator &calc, double num1, double num2)
{
    std::cout << "num1 + num2 = " << calc.add() << std::endl;
    std::cout << "num1 - num2 = " << calc.substruct_1_2() << std::endl;
    std::cout << "num2 - num1 = " << calc.substruct_2_1() << std::endl;
    std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
    std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
}

void askNumber1(Calculator &calc, double num1)
{
    std::cout << "Введите num1: ";
    std::cin >> num1;

    if (calc.set_num1(num1) == false)
    {
        while (!calc.set_num1(num1))
        {
            std::cout << "Неверный ввод!" << std::endl << "Введите num1: ";
            std::cin >> num1;
        }
    }
}

void askNumber2(Calculator &calc, double num2)
{
    std::cout << "Введите num2: ";
    std::cin >> num2;

    if (calc.set_num2(num2) == false)
    {
        while (!calc.set_num2(num2))
        {
            std::cout << "Неверный ввод!" << std::endl << "Введите num2: ";
            std::cin >> num2;
        }
    }
}

int main(int argc, char** argv)
{
    Calculator calc;
    
    double num1 = 0, num2 = 0;

    setlocale(LC_ALL, "Russian");

    do
    {

        askNumber1(calc, num1);

        askNumber2(calc, num2);

        printCalculator(calc, num1, num2);

    } while (true);

    return 0;
}