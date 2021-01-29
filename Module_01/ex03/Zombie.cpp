#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "<" << this->name;
    std::cout << " (" << this->type << ")> ";
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::randomChump(std::string type)
{
    std::string names[5] = {"Morty", "Rick", "Darvin", "Picachu", "Putin"};
    int     r = rand() % 5;
    this->init(names[r], type);
}

void    Zombie::init(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}