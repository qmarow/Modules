#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	private:
			AWeapon		*weapon;
			std::string name;
			int			actionPoints;
	public:
			Character(void);
			Character(Character & copy);
			Character(std::string const & name);
			~Character();

			Character	&operator=(Character const &ex);

			int			haveWeapon();
			void		recoverAP();
			void		equip(AWeapon *weapon);
			void		attack(Enemy *enemy);
			int			getAP();
			std::string	getWeapon();
			std::string virtual getName() const;
};

std::ostream	&operator<<(std::ostream &out, Character &ex);

#endif
