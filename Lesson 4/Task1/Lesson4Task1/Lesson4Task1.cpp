#include <iostream>
#include <fstream>
#include <string>

class Address 
{
private:
    std::string city;
    std::string street;
    int building;
    int apartment;

public:
    Address(std::string city, std::string street, int building, int apartment)
    {
        this->city = city;
        this->street = street;
        this->building = building;
        this->apartment = apartment;
    }

    Address()
    {
        std::string city;
        std::string street;
        int building = 0;
        int apartment = 0;
    }

    std::string get_output_address()
    {
        std::string full_address = city + ", " + street + ", " + std::to_string(building) + ", " + std::to_string(apartment);
        return full_address;
    }
};

Address* createArr(int size)
{
    Address* addresses = new Address[size];
    return addresses;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    std::ifstream read_file("in.txt");
    std::ofstream write_file("out.txt");

    if (read_file.is_open())
    {
        std::string city, street;
        int building = 0, apartment = 0, size = 0;

        read_file >> size;

        Address* addresses = createArr(size);
        for (int i = 0; i < size; ++i)
        {
            read_file >> city;
            read_file >> street;
            read_file >> building;
            read_file >> apartment;
            addresses[i] = Address(city, street, building, apartment);
        }
        
        read_file.close();

        write_file << size << std::endl;
        for (int i = size - 1; i >= 0; --i)
        {
            write_file << addresses[i].get_output_address() << std::endl;
        }

        write_file.close();

        delete[] addresses;

        return 0;
    }
    else
    {
        std::cout << "Ошибка открытия файла!";
    }
}