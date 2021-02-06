#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ostream>

template <typename T>
class Array {
	private:
			T		*array;
			size_t  len;
	public:
			Array();
			Array(size_t n);
			size_t	size(void) const;

			Array	&operator=(const Array<T> &);
			T		&operator[](int);

			class GoingBeyondException: public std::exception{
				virtual const char *what() const throw();
			};
			~Array();
};

#include "Array.tpp"

#endif
