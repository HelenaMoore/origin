#include <iostream>

class Counter
{
private:
    int num = 1;
public:
    void increase_counter()
    {
        ++num;
    }

    void decrease_counter()
    {
        --num;
    }

    void print_number()
    {
        std::cout << num << std::endl;
    }

    Counter(int num)
    {
        this->num = num;
    }

    Counter() 
    {
        num = 1;
    }
};

void useCounter(Counter &counter)
{
    std::string command;
    bool check_exit = false;
    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+")
        {
            counter.increase_counter();
        }
        else if (command == "-")
        {
            counter.decrease_counter();
        }
        else if (command == "=")
        {
            counter.print_number();
        }
        else if (command == "x")
        {
            std::cout << "До свидания!" << std::endl;
            check_exit = true;
        }
        else
        {
            std::cout << "Неверно введена команда. ";
        }
    } while (check_exit == false);
}

std::string initialQuestion()
{
    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
    std::cin >> answer;
    return answer;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    
    int num = 0;
    std::string answer = initialQuestion();
    bool check_answer = false;

    do
    {
        if (answer == "да")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> num;
            Counter counter(num);
            useCounter(counter);
            check_answer = true;
        }
        else if (answer == "нет")
        {
            Counter counter;
            useCounter(counter);
            check_answer = true;
        }
        else
        {
            std::cout << "Неверно введена команда. Введите 'да' или 'нет': ";
            std::cin >> answer;       
        }
    } while (check_answer == false);

    return 0;
}