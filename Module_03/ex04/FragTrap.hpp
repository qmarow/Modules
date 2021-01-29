#ifndef FragTRAP_HPP
# define FragTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	private:
			std::string randomAttacks[5];
	public:
			FragTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	vaulthunter_dot_exe(std::string const & target);
			~FragTrap();
};

#endif
