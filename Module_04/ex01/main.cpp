#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "----------------------------------" << std::endl;
	Enemy *mutant = new SuperMutant();
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << "------Не атакует-----" << std::endl;
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	std::cout << "      ----------" << std::endl;
	me->recoverAP();
	std::cout << *me;
	std::cout << "-----Убиваем мутанта-----" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	return 0;
}