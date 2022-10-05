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

    std::string get_city()
    {
        return city;
    }
};

Address* createArr(int size)
{
    Address* addresses = new Address[size];
    return addresses;
}

void sort(Address* addresses, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (addresses[j].get_city() > addresses[j + 1].get_city())
            {
                Address temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
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

        sort(addresses, size);

        write_file << size << std::endl;
        for (int i = 0; i < size; ++i)
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