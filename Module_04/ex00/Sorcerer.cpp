#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ", " \
    << this->title << ", is born !\n";
}

Sorcerer::Sorcerer(Sorcerer & copy)
{
    *this = copy;
}

Sorcerer	&Sorcerer::operator=(Sorcerer & copy)
{
	this->name = copy.name;
    this->title = copy.title;
    return (*this);
}

std::string Sorcerer::getName(void)
{
    return (this->name);
}

std::string Sorcerer::getTitle(void)
{
    return (this->title);
}

std::ostream   &operator<<(std::ostream &out, Sorcerer &ex)
{
    out << "I am " << ex.getName() << ", " << ex.getTitle() \
    << ", and I like ponies !\n";
    return (out);
}

void Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << \
    ", is dead. Consequences will never be the same !\n";
}