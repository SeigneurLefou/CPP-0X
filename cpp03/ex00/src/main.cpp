#include "ClapTrap.hpp"

int main()
{

    ClapTrap meme("Mewen");

    std::cout << meme.getName() << " | HP: " << meme.getHp() << " | EN: " << meme.getEnergy() << " | DMG: " << meme.getDamage() << std::endl;

    meme.attack("Rémy");

    meme.takeDamage(5);
    meme.beRepaired(3);
    std::cout << meme.getName() << " a maintenant " << meme.getHp() << " HP et " << meme.getEnergy() << " EN." << std::endl;

    return 0;
}