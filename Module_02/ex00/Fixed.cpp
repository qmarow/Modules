#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed  &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(const Fixed  &example)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = example.getRawBits();
	return (*this);
}

