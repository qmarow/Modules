#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "outcast";
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;

	zombie = new Zombie;
	zombie->init(name, this->type);
	return (zombie);
}