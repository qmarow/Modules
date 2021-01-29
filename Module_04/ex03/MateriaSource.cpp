#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->materies = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->materies[i] = NULL;
}

void        MateriaSource::learnMateria(AMateria *m)
{
    if (m)
		for (int i = 0; i < 4; ++i)
			if (!this->materies[i])
			{
				this->materies[i] = m;
				return ;
			}
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
		if (this->materies[i]->getType() == type)
			return (this->materies[i]->clone());
    return (NULL);
}

MateriaSource::~MateriaSource()
{}
