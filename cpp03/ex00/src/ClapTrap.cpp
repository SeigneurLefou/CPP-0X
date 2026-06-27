#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

    std::cout << "ClapTrap constructed without name" << std::endl;
	_name = "nameless";
	_hit_points = 10;
	_energy = 10;
	_damage = 0;
}

ClapTrap::ClapTrap( std::string name ) {

    std::cout << "ClapTrap constructed" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy = 10;
	_damage = 0;
}

ClapTrap::ClapTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) {

    std::cout << "ClapTrap constructed" << std::endl;
	_name = name;
	_hit_points = hp;
	_energy = en;
	_damage = dam;
}

ClapTrap::ClapTrap(const ClapTrap &other) {

    std::cout << "ClapTrap copied" << std::endl;
	
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {

    std::cout << "ClapTraps assigned" << std::endl;
	if (this == &other) {
	    other._name = this->_name;
	    other._hit_points = this->_hit_points;
	    other._energy = this->_energy;
	    other._damage = this->_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {

    std::cout << "ClapTraps destroyed" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {

	if ( _energy <= 0 ) {
		std::cout << "ClapTrap " << _name << " has run out of energy." << std::endl;
	} else if ( _hit_points <= 0 ) {
		std::cout << "ClapTrap " << _name << " has run out of hit points." << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " attacks " << target ", causing " << _damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

		std::cout << "ClapTrap " << _name << " take " << amount << " damages." << std::endl;
		_hit_points -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if ( _energy <= 0 ) {
		std::cout << "ClapTrap " << _name << " has run out of energy." << std::endl;
	} else if ( _hit_points <= 0 ) {
		std::cout << "ClapTrap " << _name << " has run out of hit points." << std::endl;
	} else {
		--_energy;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " has been repaired of " << amount << " HP." << std::endl;
	}
}
