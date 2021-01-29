#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iostream>

class Zombie{
	private:
		std::string		name;
		std::string		type;
	public:
		void	announce();
		void	randomChump(std::string type);
		void	init(std::string name, std::string type);
};

#endif