#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam );
        ScavTrap( const ScavTrap &other );
        ScavTrap &operator=( const ScavTrap &other );
        virtual ~ScavTrap();

        void attack( const std::string& target );
        void guardGate( void );
};

#endif // SCAVTRAP_HPP