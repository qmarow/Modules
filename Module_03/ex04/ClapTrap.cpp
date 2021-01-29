#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "New warrior prepare ...\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "This warrior fought with honor and courage ...\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int getDamage = amount - this->armorDamageRediction;

    getDamage = (getDamage < 0) ? 0 : getDamage;
    if (this->hitPoints - getDamage < 0)
        getDamage = getDamage - (getDamage - this->hitPoints);
    this->hitPoints -= getDamage;
    std::cout << this->name << " received " << getDamage << " damage. ";
    std::cout << this->name << " has " << this->hitPoints << " hit points!\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
   this->hitPoints += amount;
   this->hitPoints = (this->hitPoints > this->maxHP) ? this->maxHP : this->hitPoints;
   std::cout << this->name << " was repaired. Now he has " << this->hitPoints << " hp\n"; 
}

void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "ClapTrap: " << this->name << " attacks " << target << \
    " at range, causing " << this->rangedDamage << " points of damage!" \
    << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
   std::cout << "ClapTrap: " << this->name << " attacks " << target << \
    " at mellee, causing " << this->meleeDamage << " points of damage!" \
    << std::endl;
}