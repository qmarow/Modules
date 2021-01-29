#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class	Pony{
	private:
		std::string		color;
		std::string		name;
		int				age;
	public:
		Pony ();
		~Pony();
};

#endif