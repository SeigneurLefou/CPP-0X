#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

    std::cout << "FragTrap constructed without name" << std::endl;
	ClapTrap("nameless", 100, 100, 30);
}

FragTrap::FragTrap( std::string name ) {

    std::cout << "FragTrap constructed" << std::endl;
	ClapTrap(name, 100, 100, 30);
}

FragTrap::FragTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) {

    std::cout << "FragTrap constructed" << std::endl;
	ClapTrap(name, hp, en, dam);
}

FragTrap::FragTrap() {
    std::cout << "FragTrap constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
    std::cout << "FragTrap copied" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap assigned" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destroyed" << std::endl;
}

void	FragTrap::attack( const std::string& target ) {

	if ( _energy <= 0 ) {
		std::cout << "FragTrap " << _name << " has run out of energy." << std::endl;
	} else if ( _hit_points <= 0 ) {
		std::cout << "FragTrap " << _name << " has run out of hit points." << std::endl;
	} else {
		std::cout << "FragTrap " << _name << " attacks " << target ", causing " << _damage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesuys( void ) {

		std::cout << "FragTrap " << _name << " give a high five." << std::endl;
}
