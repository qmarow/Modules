#include "Enemy.hpp"

Enemy::Enemy(Enemy & copy)
{
    *this = copy;
}

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}

Enemy   &Enemy::operator=(Enemy & copy)
{
    this->hp = copy.hp;
    this->type = copy.type;
    return (*this);
}

std::string Enemy::getType() const
{
    return (this->type);
}

int         Enemy::getHP() const
{
    return (this->hp);
}

void        Enemy::takeDamage(int damage)
{
    if (this->hp >= 0)
        this->hp = (this->hp - damage <= 0) ? 0 : (this->hp - damage);
}

Enemy::~Enemy()
{

}

