#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* zaz = new Character("zaz");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// zaz->equip(tmp);
	// tmp = src->createMateria("cure");
	// zaz->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// zaz->use(0, *bob);
	// zaz->use(1, *bob);
	
	// delete bob;
	// delete zaz;
	// delete src;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);

	ICharacter* bob = new Character("bob");

	zaz->use(0, *bob);
	zaz->use(1, *bob);
	zaz->use(2, *bob);
	zaz->use(3, *bob);

	
	zaz->equip(tmp);
	zaz->equip(tmp);

	zaz->use(2, *bob);
	zaz->use(3, *bob);
	zaz->use(4, *bob);



	zaz->unequip(2);
	zaz->unequip(3);
	std::cout << "<><><>" << std::endl;
	zaz->use(2, *bob);
	zaz->use(3, *bob);
	std::cout << "<><><>" << std::endl;

	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	zaz->equip(tmp);
	zaz->use(2, *bob);
	zaz->use(3, *bob);

	delete bob;
	delete zaz;
	delete src;
}