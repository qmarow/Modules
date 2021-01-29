#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "iostream"
class AMateria;
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;
		unsigned int xp_;
    public:
		AMateria(std::string const &type);
		AMateria(AMateria const &amateria);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &ex);
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia s XP
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter& );
};

#endif 
