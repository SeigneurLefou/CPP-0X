#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( "nameless", 100, 100, 30 ) {
    std::cout << "FragTrap constructed without name" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 100, 100, 30 ) {
    std::cout << "FragTrap constructed" << std::endl;
}

FragTrap::FragTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) : ClapTrap( name, hp, en, dam ) {
    std::cout << "FragTrap constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap assigned" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::attack( const std::string& target ) {
    if ( energy <= 0 ) {
        std::cout << "FragTrap " << name << " has run out of energy." << std::endl;
    } else if ( hit_points <= 0 ) {
        std::cout << "FragTrap " << name << " has run out of hit points." << std::endl;
    } else {
        --energy;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << name << " gives a high five." << std::endl;
}