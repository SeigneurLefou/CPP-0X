#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( "nameless", 100, 50, 20 ) {
    std::cout << "ScavTrap constructed without name" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) : ClapTrap( name, hp, en, dam ) {
    std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other) {
    std::cout << "ScavTrap copied" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other ) {
    std::cout << "ScavTrap assigned" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destroyed" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
    if ( energy <= 0 ) {
        std::cout << "ScavTrap " << name << " has run out of energy." << std::endl;
    } else if ( hit_points <= 0 ) {
        std::cout << "ScavTrap " << name << " has run out of hit points." << std::endl;
    } else {
        --energy;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << name << " is in Gate keeper mode." << std::endl;
}