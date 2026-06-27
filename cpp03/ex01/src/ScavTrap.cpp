#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("nameless", 100, 50, 20) {

    std::cout << "ScavTrap constructed without name" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

    std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) : ClapTrap(name, hp, en, dam){

    std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "ScavTrap copied" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap assigned" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destroyed" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {

	if ( _energy <= 0 ) {
		std::cout << "ScavTrap " << _name << " has run out of energy." << std::endl;
	} else if ( _hit_points <= 0 ) {
		std::cout << "ScavTrap " << _name << " has run out of hit points." << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " attacks " << target ", causing " << _damage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate( void ) {

		std::cout << "ScavTrap " << _name << " is in Gate keeper mode." << std::endl;
}
