#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::Peon(Peon & copy): Victim(copy)
{
    *this = copy;
}

Peon    &Peon::operator=(Peon & copy)
{
    this->name = copy.name;
    return (*this);
}

void    Peon::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a pink pony !\n";
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}