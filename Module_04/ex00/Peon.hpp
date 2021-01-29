#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {
    public:
            Peon(std::string name);
            Peon(Peon & copy);
            Peon &operator=(Peon & copy);
            void getPolymorphed() const;
            ~Peon();
};

#endif
