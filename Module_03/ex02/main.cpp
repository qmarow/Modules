#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    FragTrap *bot = new FragTrap("R2-D2");

    srand(time(NULL));
    bot->rangedAttack("Zombie");
    bot->meleeAttack("Zombie");
    bot->vaulthunter_dot_exe("Zombie");
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
    bot->vaulthunter_dot_exe("Zombie");
    delete(bot);
    std::cout << "-------------------\n";
    ScavTrap *zombie = new ScavTrap("Zomb");
    zombie->rangedAttack("Bot");
    zombie->meleeAttack("Bot");
    zombie->challengeNewcomer();
    zombie->takeDamage(100);
    zombie->takeDamage(5);
    zombie->takeDamage(15);
    zombie->beRepaired(85);
    zombie->beRepaired(1000);
    zombie->challengeNewcomer();
    zombie->challengeNewcomer();
    zombie->challengeNewcomer();
    delete(zombie);
}