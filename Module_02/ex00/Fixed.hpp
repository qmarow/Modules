#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int	Fixedvalue = 8;
		int					value;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed	&operator=(const Fixed  &example);
		~Fixed();
};

#endif