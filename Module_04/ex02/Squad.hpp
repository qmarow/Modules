#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad {
	private:
			int				countU;
			ISpaceMarine	**squad;
	public:
		Squad();
		Squad(Squad const &squad);
		~Squad();

		Squad	&operator=(Squad const &squad);

		int getCount() const;
		ISpaceMarine *getUnit(int i) const;
		int	push(ISpaceMarine *mps);
};

#endif
