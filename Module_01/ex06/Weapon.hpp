#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
			std::string weapon;
    public:
			Weapon(std::string club);
			void	setType(std::string club);
			const std::string &getType();
};

#endif