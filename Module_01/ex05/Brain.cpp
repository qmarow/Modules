#include "Brain.hpp"

std::string		Brain::identify() const
{
	std::stringstream line;

	line << this;
	return (line.str());
}