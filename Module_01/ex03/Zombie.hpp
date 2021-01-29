#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string		name;
        std::string     type;
	public:
		void	announce();
		void    init(std::string name, std::string type);
		void	randomChump(std::string type);
};

#endif