#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpon): weapon(wpon)
{
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->weapon.getType() << std::endl;
}