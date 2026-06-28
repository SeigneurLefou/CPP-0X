#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( std::string name, unsigned int hp, unsigned int en, unsigned int dam );
        FragTrap( const FragTrap &other );
        FragTrap &operator=( const FragTrap &other );
        virtual ~FragTrap();

        void attack( const std::string& target );
        void highFivesGuys( void );
};

#endif // FRAGTRAP_HPP