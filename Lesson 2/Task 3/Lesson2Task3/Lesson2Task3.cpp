#include <iostream>
#include <string>

struct Adress
{
    std::string m_country;
    std::string m_city;
    std::string m_street;
    int m_building;
    int m_apartment;
    int m_postcode;
};

void printAdress(const Adress &a)
{
    std::cout << "Город: " << a.m_city << std::endl;
    std::cout << "Улица: " << a.m_street << std::endl;
    std::cout << "Номер дома: " << a.m_building << std::endl;
    std::cout << "Номер квартиры: " << a.m_apartment << std::endl;
    std::cout << "Индекс: " << a.m_postcode << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Adress a{ "Россия", "Зеленоградск", "Балтийская", 8, 15, 238530 };

    printAdress(a);

    return 0;
}