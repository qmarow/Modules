#include "Squad.hpp"

Squad::Squad()
{
    this->countU = 0;
    this->squad = NULL;
}

Squad::Squad(Squad const &squad)
{
	this->countU = 0;
	*this = squad;
}

Squad	&Squad::operator=(Squad const &squad)
{
	if (this->countU)
	{
		for (int i = 0; i < this->countU; i++)
			delete (this->squad[i]);
		delete (this->squad);
	}
	this->countU = 0;
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i));
	return (*this);
}

int             Squad::getCount() const
{
    return (this->countU);
}

ISpaceMarine    *Squad::getUnit(int i) const
{
    if ((i + 1 > this->countU || i < 0))
        return (NULL);
    return (this->squad[i]);
}

int             Squad::push(ISpaceMarine *mps)
{
	if (mps)
	{
		if (this->countU)
		{
			int		i = 0;
			ISpaceMarine **nSquad = new ISpaceMarine*[this->countU + 1];
			for (; i < this->countU; i++)
				nSquad[i] = this->squad[i];
			nSquad[i] = mps;
			this->countU++;
			delete(this->squad);
			this->squad = nSquad;
		}
		else
		{
			this->squad = new ISpaceMarine*[1];
			this->squad[0] = mps;
			this->countU++;
		}
		
	}
	return (this->countU);
}

Squad::~Squad()
{
	if (this->countU)
	{
		delete [] (this->squad);
	}
}