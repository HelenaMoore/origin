#include <iostream>
#include <string>

class BadLength : public std::exception
{
public:
	const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string &str, int &forbidden_length)
{
	if (str.length() == forbidden_length) throw BadLength();
	return str.length();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	int forbidden_length = 0;
	std::string str;

	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	try
	{
		do
		{
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова " + str + " равна " << function(str, forbidden_length) << std::endl;
		} while (str.length() == function(str, forbidden_length));
	}
	catch (const BadLength& ex) { std::cout << ex.what() << std::endl; }
	catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }

	return 0;
}