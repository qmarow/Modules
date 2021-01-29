#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public FragTrap, NinjaTrap{
    public:
            SuperTrap(std::string name);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
            ~SuperTrap();
};

#endif
