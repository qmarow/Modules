#include "FragTrap.hpp"

int     main(void)
{
    FragTrap *bot = new FragTrap("R2-D2");

    srand(time(NULL));
    bot->rangedAttack("Zombie");
    bot->meleeAttack("Zombie");
    bot->takeDamage(100);
    bot->takeDamage(5);
    bot->takeDamage(15);
    bot->beRepaired(85);
    bot->beRepaired(1000);
    bot->vaulthunter_dot_exe("Zombie");
    bot->vaulthunter_dot_exe("Zombie");
    bot->vaulthunter_dot_exe("Zombie");
    bot->vaulthunter_dot_exe("Zombie");
    bot->vaulthunter_dot_exe("Zombie");
    delete(bot);
}