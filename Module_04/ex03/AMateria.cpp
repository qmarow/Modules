#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(AMateria const &amateria)
{
    *this = amateria;
}

AMateria    &AMateria::operator=(AMateria const &ex)
{
    this->type = ex.type;
    this->xp_ = ex.xp_;
    return (*this);
}

std::string const	&AMateria::getType() const
{
    return (this->type);
}

unsigned int		AMateria::getXP() const
{
    return (this->xp_);
}

void				AMateria::use(ICharacter& )
{
	this->xp_+= 10;
}

AMateria::~AMateria()
{

}