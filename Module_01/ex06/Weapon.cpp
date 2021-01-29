#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	const std::string &weapon = this->weapon;
	
	return (weapon);
}

void	Weapon::setType(std::string club)
{
	this->weapon = club;
}

Weapon::Weapon(std::string club)
{
	this->weapon = club;
}