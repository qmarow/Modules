#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
	private:
			AMateria **materies;
	public:
			MateriaSource();
			// MateriaSource(MateriaSource const &MateriaSource);
			
			~MateriaSource();
			void learnMateria(AMateria *m);
			AMateria	*createMateria(std::string const &type);
};

#endif
