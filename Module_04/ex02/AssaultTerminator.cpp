#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *\n";
}

ISpaceMarine *AssaultTerminator::clone() const
{
    AssaultTerminator *clone = new AssaultTerminator();
    *clone = *this;
    return (clone);
}

void        AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !\n";
}

void        AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void        AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ...\n";
}