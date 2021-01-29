#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy{
    public:
			SuperMutant();
			void takeDamage(int damage);
			~SuperMutant();
};

#endif
