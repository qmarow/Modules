#ifndef FragTRAP_HPP
# define FragTRAP_HPP

#include <iomanip>
#include <stdlib.h>
#include <iostream>

class FragTrap{
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
			std::string randomAttacks[5];
	public:
			FragTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			void	vaulthunter_dot_exe(std::string const & target);
			~FragTrap();
};

#endif
