#include "ZombieEvent.hpp"

int     main(void)
{
	srand(time(NULL));
    ZombieEvent	typezombie;
	Zombie		*zombie;

	std::cout << "1 - ";
	zombie = typezombie.newZombie("Zzick");
	zombie->announce();
	delete (zombie);

	std::cout << "2 - ";
	typezombie.setZombieType("Red Zomb");
	zombie = typezombie.newZombie("Zzack");
	zombie->announce();
	delete (zombie);

	std::cout << "3 - ";
	zombie = typezombie.newZombie("Zzrick");
	zombie->announce();
	delete (zombie);

	std::cout << "4 - ";
	typezombie.setZombieType("Pink Zomb");
	zombie = typezombie.newZombie("Zzack");
	zombie->announce();
	delete (zombie);

	std::cout << "             - 5 -\n";
	zombie->randomChump("Green Zomb");
	zombie->randomChump("Green Zomb");
	zombie->randomChump("Green Zomb");
	zombie->randomChump("Green Zomb");
	zombie->randomChump("Green Zomb");
	zombie->randomChump("Green Zomb");
}