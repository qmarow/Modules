#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    ClapTrap clap;

    srand(time(NULL));

    FragTrap *bot = new FragTrap("R2-D2");
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
    // delete(bot);
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
    // delete(zombie);
    std::cout << "-------------------\n";
    NinjaTrap *ninja = new NinjaTrap("Lee");
    ninja->rangedAttack("Monstr");
    ninja->meleeAttack("Monstr");
    ninja->ninjaShoebox(*bot);
    ninja->ninjaShoebox(*zombie);
    ninja->ninjaShoebox(*ninja);
    ninja->ninjaShoebox(clap);
    ninja->takeDamage(60);
    ninja->takeDamage(5);
    ninja->takeDamage(15);
    ninja->beRepaired(85);
    ninja->beRepaired(100);
    delete(ninja);
    delete(bot);
    delete(zombie);
    std::cout << "-------------------\n";
    // ClapTrap *super = new SuperTrap("SuperMan");
    SuperTrap *super = new SuperTrap("SuperMan");
    super->rangedAttack("Frag");
    super->meleeAttack("Frag");
    super->takeDamage(100);
    super->takeDamage(5);
    super->takeDamage(15);
    super->beRepaired(85);
    super->beRepaired(100);
    delete(super);
}