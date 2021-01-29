#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
    protected:
            std::string name;
    public:
            Victim(std::string name);
            Victim(Victim & copy);
            Victim      &operator=(Victim & copy);
            std::string getName(void);
            virtual void        getPolymorphed() const;
            virtual ~Victim();
};

std::ostream    &operator<<(std::ostream &out, Victim &ex);

#endif
