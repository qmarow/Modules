#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iomanip>
#include <stdlib.h>
#include <iostream>

class ClapTrap{
    protected:
            int hitPoints;
			int maxHP;
			int energyPoints;
			int maxEP;
			int level;
			std::string name;
			int	meleeDamage;
			int	rangedDamage;
			int armorDamageRediction;
    public:
			ClapTrap();
            void	takeDamage(unsigned int amount);
			void    beRepaired(unsigned int amount);
			virtual void	rangedAttack(std::string const & target);
			virtual void	meleeAttack(std::string const & target);
			virtual ~ClapTrap();
};

#endif
