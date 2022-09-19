#include <iostream>
#include <fstream>

int* createArr(int size)
{
    int* arr = new int[size];
    return arr;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::ifstream read_file ("in.txt");
    std::ofstream write_file("out.txt");

    int size1= 0, size2 = 0;

    if (read_file.is_open())
    {
        read_file >> size1;
        int* arr1 = createArr(size1);
        for (int i = 0; i < size1; ++i)
        {
            read_file >> arr1[i];
        }

        read_file >> size2;
        int* arr2 = createArr(size2);
        for (int i = 0; i < size2; ++i)
        {
            read_file >> arr2[i];
        }

        read_file.close();

        write_file << size2 << std::endl;
        write_file << arr2[size2 - 1] << " ";
        for (int i = 0; i < size2 - 1; ++i)
        {
            write_file << arr2[i] << " ";
        }
        
        write_file << std::endl << size1 << std::endl;
        for (int i = 1; i < size1; ++i)
        {
            write_file << arr1[i] << " ";
        }
        write_file << arr1[0];

        write_file.close();

        delete[] arr1;
        delete[] arr2;

        return 0;
    }
    else 
    {
         std::cout << "Ошибка открытия файла";
    }
}
