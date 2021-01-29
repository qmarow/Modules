#include <iostream>

int		main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string &reference = str;
	std::cout << "Ввывод по ссылке: " << reference << std::endl;

	std::string	*pointer;
	pointer = &str;
	std::cout << "Ввывод по указателю: " << *pointer << std::endl;

	return (0);
}