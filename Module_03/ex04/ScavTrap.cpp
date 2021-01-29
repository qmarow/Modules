#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Zombie " << name << " came to life!\n";
    this->hitPoints = 100;
    this->maxHP = 100;
    this->energyPoints = 50;
    this->maxEP = 50;
    this->level = 1;
    this->name = name;
    this->meleeDamage = 20;
    this->rangedDamage = 15;
    this->armorDamageRediction = 3;
    randomChallenge[0] = "Find me a braiiinnnsssssss!";
    randomChallenge[1] = "I want coffeeeee. Take me to a Coffeelike";
    randomChallenge[2] = "Brain or liiffee? Give your BRAIINNN!!!";
    randomChallenge[3] = "Please make coffee and put two spoons, no, five spoons of brain.";
    randomChallenge[4] = "ehh... I lack brains...";
}

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Zombie " << this->name << " ranged attacked " << target << \
    " , dealing " << this->rangedDamage << " points of damage!" \
    << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Zombie " << this->name << " melee attacked " << target << \
    " , dealing " << this->meleeDamage << " points of damage!" \
    << std::endl;
}


void    ScavTrap::challengeNewcomer(void)
{
    
    std::cout << this->name << ": " << this->randomChallenge[rand() % 5] << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << " found peace...\n";
}
