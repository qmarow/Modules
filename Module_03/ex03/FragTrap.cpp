#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "The " << name << " robot is ready!\n";
    this->hitPoints = 100;
	this->maxHP = 100;
	this->energyPoints = 100;
	this->maxEP = 100;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->armorDamageRediction = 5;
    randomAttacks[0] = "Chicken bazooka attack";
    randomAttacks[1] = "Slingshot shot";
    randomAttacks[2] = "Punch the glove";
    randomAttacks[3] = "Tizhi shelling";
    randomAttacks[4] = "Click";
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << this->name << " attacks " << target << \
    " at range, causing " << this->rangedDamage << " points of damage!" \
    << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
   std::cout << this->name << " attacks " << target << \
    " at mellee, causing " << this->meleeDamage << " points of damage!" \
    << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int damage = rand() % 99;
    if (this->energyPoints < 25)
        std::cout << this->name << " has little energy to attack!\n";
    else
    {
        this->energyPoints = (this->energyPoints - 25 <= 0) ? 0 : this->energyPoints - 25;
        std::cout << this->name << " attacks the " << target << " using " << this->randomAttacks[rand() % 5] << \
        " , dealing " << damage << " damage!\n";
    } 
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " is die...\n";
}
