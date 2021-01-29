#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    this->xp_ = 0;
}

AMateria    *Ice::clone() const
{
    Ice *copy = new Ice();
    *copy = *this;
    return (copy);
}

void        Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << \
    target.getName() << "*\n";
}

Ice::~Ice()
{

}