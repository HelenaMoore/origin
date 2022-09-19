#include <iostream>

enum Months
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Months num = Months::january;
    int number = static_cast<int>(num);

    do
    {
        std::cout << "Введите номер месяца или 0, чтобы выйти: ";
        std::cin >> number;

        switch (number)
        {
        case 0:
            std::cout << "До свидания!" << std::endl;
            break;
        case(january):
            std::cout << "Январь" << std::endl;
            break;
        case (february):
            std::cout << "Февраль" << std::endl;
            break;
        case (march):
            std::cout << "Март" << std::endl;
            break;
        case (april):
            std::cout << "Апрель" << std::endl;
            break;
        case (may):
            std::cout << "Май" << std::endl;
            break;
        case (june):
            std::cout << "Июнь" << std::endl;
            break;
        case (july):
            std::cout << "Июль" << std::endl;
            break;
        case (august):
            std::cout << "Август" << std::endl;
            break;
        case (september):
            std::cout << "Сентябрь" << std::endl;
            break;
        case (october):
            std::cout << "Октябрь" << std::endl;
            break;
        case (november):
            std::cout << "Ноябрь" << std::endl;
            break;
        case (december):
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        } 
    } while (number != 0);
      
    return 0;
}