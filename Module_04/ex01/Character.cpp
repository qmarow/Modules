#include "Character.hpp"

Character::Character(void)
{
	this->name = "noName";
	this->weapon = NULL;
	this->actionPoints = 40;
}

Character::Character(Character & copy)
{
	*this = copy;
}

Character::Character(std::string const & name)
{
    this->name = name;
	this->weapon = NULL;
	this->actionPoints = 40;
}

void		Character::recoverAP()
{
	if (this->actionPoints > 30)
		this->actionPoints = 40;
	else
		this->actionPoints += 10;
}

void		Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (this->weapon && this->actionPoints - weapon->getAPCost() >= 0 && enemy != nullptr)
	{
		std::cout << this->name << " attacks " << \
		enemy->getType() << " with a " << weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		this->actionPoints -= weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete(enemy);
	}
}

int			Character::haveWeapon()
{
	if (this->weapon)
		return (1);
	return (0);
}

int			Character::getAP()
{
	return (this->actionPoints);
}

std::string	Character::getWeapon()
{
	return (this->weapon->getName());
}

std::string Character::getName() const
{
	return (this->name);
}

Character	&Character::operator=(Character const &ex)
{
	this->name = ex.name;
	this->weapon = ex.weapon;
	this->actionPoints = ex.actionPoints;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Character &ex)
{
	if (ex.haveWeapon())
		out << ex.getName() << " has " << \
		ex.getAP() << " AP and wields a " << \
		ex.getWeapon() << std::endl;
	else
		out << ex.getName() << " has " << \
		ex.getAP() << " AP and  is unarmed\n";
	return (out);
}

Character::~Character()
{}
