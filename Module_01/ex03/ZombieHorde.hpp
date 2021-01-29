#ifndef  ZOMBIEHORDE_CPP
#define ZOMBIEHORDE_CPP

#include "Zombie.hpp"

class ZombieHorde {
    private:
            std::string	type;
            Zombie      *zombiehorde;
            int         count;
    public:
            ZombieHorde(int n);
            void    announce();
            ~ZombieHorde();
};

#endif