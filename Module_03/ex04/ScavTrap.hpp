#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	private:
			std::string randomChallenge[5];
	public:
			ScavTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	challengeNewcomer(void);
			~ScavTrap();
};

#endif
