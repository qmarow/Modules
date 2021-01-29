#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->zombiehorde = new Zombie[n];
	this->count = n;
	std::string		type;

	std::cout << "Введите тип зомби: ";
	std::cin >> type;

	while (--n >= 0)
		zombiehorde[n].randomChump(type);
}

void 	ZombieHorde::announce()
{
	int  i = -1;

	while (++i < this->count)
		this->zombiehorde[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete [] (this->zombiehorde);
}
