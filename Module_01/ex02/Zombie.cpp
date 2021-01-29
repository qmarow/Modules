#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "<" << this->name;
    std::cout << " (" << this->type << ")> ";
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::randomChump(std::string type)
{
    Zombie  newzombie;
    std::string names[5] = {"Morty", "Rick", "Darvin", "Picachu", "Putin"};
    int     r = rand() % 5;
    newzombie.init(names[r], type);
    newzombie.announce();
}

void    Zombie::init(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}