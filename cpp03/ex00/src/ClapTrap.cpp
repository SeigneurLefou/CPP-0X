#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("nameless"), hit_points(10), energy(10), damage(0)
{
    std::cout << "ClapTrap constructed without name" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy(10), damage(0)
{
    std::cout << "ClapTrap constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int en, unsigned int dam)
    : name(name), hit_points(hp), energy(en), damage(dam)
{
    std::cout << "ClapTrap constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copied" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTraps assigned" << std::endl;
    if (this != &other)
    {
        this->name = other.getName();
        this->hit_points = other.getHp();
        this->energy = other.getEnergy();
        this->damage = other.getDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTraps destroyed" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->name);
}

int ClapTrap::getHp(void) const
{
    return (this->hit_points);
}

int ClapTrap::getDamage(void) const
{
    return (this->damage);
}

int ClapTrap::getEnergy(void) const
{
    return (this->energy);
}

void ClapTrap::attack(const std::string &target)
{
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " has run out of energy." << std::endl;
    }
    else if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has run out of hit points." << std::endl;
    }
    else
    {
        --energy;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " damages." << std::endl;
    hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " has run out of energy." << std::endl;
    }
    else if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has run out of hit points." << std::endl;
    }
    else
    {
        --energy;
        hit_points += amount;
        std::cout << "ClapTrap " << name << " has been repaired of " << amount << " HP." << std::endl;
    }
}