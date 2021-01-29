#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{
	private:
			AMateria	**inventory;
			std::string	name;
	public:
			Character(std::string _name);
			Character(Character const &ex);
			~Character();
			Character &operator=(Character const &ex);
			std::string const &getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};

#endif
