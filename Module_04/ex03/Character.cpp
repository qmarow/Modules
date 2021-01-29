#include "Character.hpp"

Character::Character(std::string _name): name(_name)
{
	this->inventory = new AMateria*[4];

	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &ex)
{
	*this = ex;
}

Character	&Character::operator=(Character const &ex)
{
	this->name = ex.name;
	if (this->inventory)
	{
		delete [](this->inventory);
	}
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = ex.inventory[i];
	return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}

void			Character::equip(AMateria* m)
{
	if (m)
		for (int i = 0; i < 4; ++i)
			if (!this->inventory[i])
			{
				this->inventory[i] = m;
				return ;
			}
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
	{
		this->inventory[idx] = NULL;
	}
}

void			Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}

Character::~Character()
{
	delete [] (this->inventory);
}