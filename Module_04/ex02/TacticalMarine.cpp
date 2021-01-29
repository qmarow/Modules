#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!\n";
}

ISpaceMarine *TacticalMarine::clone() const
{
    TacticalMarine *clone = new TacticalMarine();
    *clone = *this;
    return (clone);
}

void        TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !\n";
    return ;
}

void        TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *\n";
}

void        TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *\n";
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ...\n";
}
