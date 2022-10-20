#include <iostream>
#include "math_functions.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    double num1 = 0, num2 = 0; 
    int operation = 0;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    bool check_operation = false;
    
    do
    {
        std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умноженине, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operation;
        check_operation = false;
        switch (operation)
        {
        case 1:
            std::cout << num1 << " + " << num2 << " = " << sum(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " = " << sub(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << num1 << " * " << num2 << " = " << mult(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << num1 << " / " << num2 << " = " << division(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Неверный номер команды!" << std::endl;
            check_operation = true;
            break;
        }
    } while (check_operation);

    return 0;
}