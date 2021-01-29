#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " \
    << this->name << " just appeared!\n";
}

Victim::Victim(Victim & copy)
{
    *this = copy;
}

Victim  &Victim::operator=(Victim & copy)
{
    this->name = copy.name;
    return (*this);
}

std::string     Victim::getName(void)
{
    return (this->name);
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep !\n";
}

std::ostream    &operator<<(std::ostream &out, Victim &ex)
{
    std::cout << "Im " << ex.getName() << " and I like otters !\n";
    return (out);
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << \
    " just died for no apparent reason !\n";
}