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

void    ScavTrap::takeDamage(unsigned int amount)
{
    int getDamage = amount - this->armorDamageRediction;

    getDamage = (getDamage < 0) ? 0 : getDamage;
    if (this->hitPoints - getDamage < 0)
        getDamage = getDamage - (getDamage - this->hitPoints);
    this->hitPoints -= getDamage;
    std::cout << this->name << " received " << getDamage << " damage. ";
    std::cout << this->name << " has " << this->hitPoints << " hit points!\n";
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
   this->hitPoints = (this->hitPoints > this->maxHP) ? this->maxHP : this->hitPoints;
   std::cout << this->name << " was repaired. Now he has " << this->hitPoints << " hp\n"; 
}

void    ScavTrap::challengeNewcomer(void)
{
    
    std::cout << this->name << ": " << this->randomChallenge[rand() % 5] << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << " found peace...\n";
}
