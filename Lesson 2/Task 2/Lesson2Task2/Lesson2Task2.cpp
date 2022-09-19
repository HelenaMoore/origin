#include <iostream>
#include <string>

struct BankAccount
{
    int m_accountNumber;
    std::string m_ownerName;
    double m_balance;
};

void change_balance (BankAccount &account1, double &newSum)
{
    account1.m_balance = newSum;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    
    BankAccount account1;
    double newSum = 0;
    
    std::cout << "Введите номер счёта: ";
    std::cin >> account1.m_accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> account1.m_ownerName;
    std::cout << "Введите баланс: ";
    std::cin >> account1.m_balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newSum;
    
    change_balance(account1, newSum);
    
    std::cout << "Ваш счёт: " << account1.m_ownerName << ", " << account1.m_accountNumber << ", " << account1.m_balance;

    return 0;
}

