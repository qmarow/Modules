#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	this->value = (num << this->fixedValue);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	this->value = round(num * (1 << this->fixedValue));
	std::cout << "Float constructor called" << std::endl;
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
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed	&Fixed::operator=(Fixed const &example)
{
	std::cout << "Assignation operator called\n";
	this->value = example.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &example)
{
	out << example.toFloat();
	return (out);
}

int		Fixed::toInt(void) const
{
	return ((this->value / (1 << this->fixedValue)));
}

float	Fixed::toFloat(void) const
{
	return (((float)this->value / (1 << this->fixedValue)));
}
