#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "The " << name << " ninja is ready!\n";
    this->hitPoints = 60;
	this->maxHP = 60;
	this->energyPoints = 120;
	this->maxEP = 120;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 60;
	this->rangedDamage = 5;
	this->armorDamageRediction = 0;
}

void    NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << this->name << " attacks " << target << \
    " with shuriken dealing " << this->rangedDamage << " points of damage!" \
    << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
   std::cout << this->name << " attacks " << target << \
    " with katana dealing " << this->meleeDamage << " points of damage!" \
    << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & trap)
{
    int r = rand() % 2;

    std::cout << "NinjaTrap:   ";
    if (r == 1)
        trap.rangedAttack(this->name);
    else
        trap.meleeAttack(this->name);    
}

void    NinjaTrap::ninjaShoebox(FragTrap & trap)
{
    std::cout << "FragTrap:   ";
    trap.vaulthunter_dot_exe("Mostr");
}

void    NinjaTrap::ninjaShoebox(ScavTrap & trap)
{
    std::cout << "ScavTrap:   ";
    trap.challengeNewcomer();
}

void    NinjaTrap::ninjaShoebox(ClapTrap & trap)
{
    std::cout << "ClapTrap:   ";
    trap.~ClapTrap();   
}

NinjaTrap::~NinjaTrap()
{
    std::cout << this->name << " made hara-kiri...\n";
}
