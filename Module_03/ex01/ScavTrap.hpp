#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iomanip>
#include <stdlib.h>
#include <iostream>

class ScavTrap{
	private:
			int hitPoints;
			int maxHP;
			int energyPoints;
			int maxEP;
			int level;
			std::string name;
			int	meleeDamage;
			int	rangedDamage;
			int armorDamageRediction;
			std::string randomChallenge[5];
	public:
			ScavTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			void	challengeNewcomer(void);
			~ScavTrap();
};

#endif
