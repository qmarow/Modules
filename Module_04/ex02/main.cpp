#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "---------------------------" << std::endl;
	
	
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(bob);
	// vlc->push(bob);
	// vlc->push(jim);
	// vlc->push(jim);
	// vlc->push(jim);
	// vlc->push(jim);
	// vlc->push(jim);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;

	// std::cout << "-----------------------" << std::endl;

	// ISquad* vlc = new Squad;
	// delete vlc;
	return 0;
}