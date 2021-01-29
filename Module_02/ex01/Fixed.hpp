#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int	fixedValue = 8;
		int					value;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int num);
		Fixed(const float num);
		int				toInt(void) const;
		float			toFloat(void) const;
		int 			getRawBits(void) const;
		void 			setRawBits(int const raw);
		Fixed			&operator=(Fixed const &example);
		~Fixed();
};

std::ostream	&operator<<(std::ostream &out, Fixed const &example);

#endif