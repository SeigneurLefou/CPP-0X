#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam );
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

private:

};

#endif // SCAVTRAP_HPP
