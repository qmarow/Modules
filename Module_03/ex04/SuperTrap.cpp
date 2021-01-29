#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name)
{
    std::cout << "The " << name << " SuperTrap is ready!\n";
    this->hitPoints = FragTrap::hitPoints;
	this->maxHP = FragTrap::maxHP;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEP = NinjaTrap::maxEP;
	this->level = 1;
	this->name = name;
	this->meleeDamage = NinjaTrap::meleeDamage;
	this->rangedDamage = FragTrap::rangedDamage;
	this->armorDamageRediction = FragTrap::armorDamageRediction;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    std::cout << "Super rangedAttack:  ";
    FragTrap::rangedAttack(target);    
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    std::cout << "Super meleeAttack:  ";
    NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
    std::cout << this->name << " lost to batman...\n";
}
