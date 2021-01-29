#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !\n";
}

void	SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ...\n";
}