#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon()
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->weapon = &club;
}

void	HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->weapon->getType() << std::endl;
}