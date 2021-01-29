#include "Human.hpp"

std::string		Human::identify() const
{
    return (this->brain.identify());
}

Brain		&Human::getBrain()
{
	Brain &link = this->brain;
	return (link);
}