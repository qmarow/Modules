#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->damage = damage;
    this->apcost = apcost;
}

AWeapon::AWeapon(AWeapon & copy)
{
	*this = copy;
}

AWeapon		&AWeapon::operator=(AWeapon & copy)
{
	this->name = copy.name;
	this->damage = copy.damage;
	this->apcost = copy.apcost;
	return (*this);
}

int			AWeapon::getAPCost() const
{
	return (this->apcost);
}

int			AWeapon::getDamage() const
{
    return (this->damage);
}

std::string	AWeapon::getName() const
{
	return (this->name);
}

AWeapon::~AWeapon()
{

}
