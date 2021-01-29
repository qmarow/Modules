#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include "iostream"

class Sorcerer{
    private:
            std::string name;
            std::string title;
    public:
            Sorcerer(std::string name, std::string title);
            Sorcerer(Sorcerer & copy);
            std::string getName(void);
            std::string getTitle(void);
            void polymorph(Victim const &) const;
            Sorcerer &operator=(Sorcerer & copy);
            ~Sorcerer();
};

std::ostream &operator<<(std::ostream &out, Sorcerer &ex);

#endif
