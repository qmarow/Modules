#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    this->xp_ = 0;
}

AMateria    *Cure::clone() const
{
    Cure *copy = new Cure();
    *copy = *this;
    return (copy);
}

void        Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << \
    target.getName() << "’s wounds *\n";
}

Cure::~Cure()
{

}