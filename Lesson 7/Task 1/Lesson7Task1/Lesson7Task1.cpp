#include <iostream>

#define MODE 1
#if !defined MODE
#error MODE is not defined
#endif

#if defined MODE == 1 
int add(int &num1, int &num2)
{
    return num1 + num2;
}
#endif

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    
    int num1 = 0, num2 = 0;

#if MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2);
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 0;
}

