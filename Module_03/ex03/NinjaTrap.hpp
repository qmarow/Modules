#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap{
	public:
			NinjaTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	ninjaShoebox(NinjaTrap & trap);
            void    ninjaShoebox(FragTrap & trap);
            void    ninjaShoebox(ScavTrap & trap);
            void    ninjaShoebox(ClapTrap & trap);
			~NinjaTrap();
};

#endif