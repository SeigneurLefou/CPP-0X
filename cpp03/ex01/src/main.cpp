#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap meme("Mewen");
    ScavTrap titi("Titouan");

    std::cout << meme.getName() << " | HP: " << meme.getHp() << " | EN: " << meme.getEnergy() << " | DMG: " << meme.getDamage() << std::endl;
    std::cout << titi.getName() << " | HP: " << titi.getHp() << " | EN: " << titi.getEnergy() << " | DMG: " << titi.getDamage() << std::endl;

    meme.attack("Rémy");
    titi.attack("Yannis");

    titi.guardGate();

    meme.takeDamage(5);
    meme.beRepaired(3);
    std::cout << meme.getName() << " a maintenant " << meme.getHp() << " HP et " << meme.getEnergy() << " EN." << std::endl;

    ScavTrap titiCopy(titi);
    std::cout << "Copie nom: " << titiCopy.getName() << " | HP: " << titiCopy.getHp() << std::endl;

    return 0;
}