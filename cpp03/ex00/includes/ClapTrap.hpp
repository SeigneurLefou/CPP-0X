#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int hp, unsigned int en, unsigned int dam);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    virtual ~ClapTrap(void);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    int getHp(void) const;
    int getEnergy(void) const;
    int getDamage(void) const;

protected:
    std::string name;
    int hit_points;
    int energy;
    int damage;
};

#endif // CLAPTRAP_HPP