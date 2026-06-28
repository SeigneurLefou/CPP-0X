#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    ClapTrap meme("Mewen");
    ScavTrap titi("Titouan");
    FragTrap yoyo("Yohan");

    std::cout << meme.getName() << " | HP: " << meme.getHp() << " | EN: " << meme.getEnergy() << " | DMG: " << meme.getDamage() << std::endl;
    std::cout << titi.getName() << " | HP: " << titi.getHp() << " | EN: " << titi.getEnergy() << " | DMG: " << titi.getDamage() << std::endl;
    std::cout << yoyo.getName() << " | HP: " << yoyo.getHp() << " | EN: " << yoyo.getEnergy() << " | DMG: " << yoyo.getDamage() << std::endl;

    meme.attack("Rémy");
    titi.attack("Yannis");
    yoyo.attack("Axel");

    titi.guardGate();
    yoyo.highFivesGuys();

    meme.takeDamage(5);
    meme.beRepaired(3);
    std::cout << meme.getName() << " a maintenant " << meme.getHp() << " HP et " << meme.getEnergy() << " EN." << std::endl;

    ScavTrap titiCopy(titi);
    std::cout << "Copie nom: " << titiCopy.getName() << " | HP: " << titiCopy.getHp() << std::endl;

    FragTrap yoyoAssigned;
    yoyoAssigned = yoyo;
    std::cout << "Assignation nom: " << yoyoAssigned.getName() << " | DMG: " << yoyoAssigned.getDamage() << std::endl;

    return 0;
}