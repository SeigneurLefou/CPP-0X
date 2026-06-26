#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

    std::cout << "ScavTrap constructed without name" << std::endl;
	_name = "nameless";
	_hit_points = 10;
	_energy = 10;
	_damage = 0;
}

ScavTrap::ScavTrap( std::string name ) {

    std::cout << "ScavTrap constructed" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy = 10;
	_damage = 0;
}

ScavTrap::ScavTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam ) {

    std::cout << "ScavTrap constructed" << std::endl;
	_name = name;
	_hit_points = hp;
	_energy = en;
	_damage = dam;
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
