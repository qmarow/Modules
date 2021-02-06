#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <array>

class NotFoundException: public std::exception{
	const char* what() const throw() {
		return ("Exception: element not found");
	}
};

template <typename T>
int easyfind(T &mas, int element)
{
	typename T::iterator i;

	i = std::find(mas.begin(), mas.end(), element); 
	if (i == mas.end())
		throw NotFoundException();
	return (*i);
}

#endif
