#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "What color will the pony have? ";
	std::cin >> this->color;
	std::cout << "How old is the pony? ";
	std::cin >> this->age;
	std::cout << this->color << " pony ";
	std::cout << "who is ";
	std::cout << this->age << " years old";
}

Pony::~Pony()
{
	std::cout << std::endl << "Pony is die" << std::endl;
}
