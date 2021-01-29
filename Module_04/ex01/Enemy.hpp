#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {
	protected:
			int					hp;
			std::string			type;
	public:
			Enemy(Enemy & copy);
			Enemy(int hp, std::string const & type);
			Enemy	&operator=(Enemy & copy);
			virtual ~Enemy();
			std::string virtual getType() const;
			int getHP() const;
			virtual void takeDamage(int damage);
};

#endif
