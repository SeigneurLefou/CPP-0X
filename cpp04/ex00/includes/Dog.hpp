#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog {

public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();
	void	makeSound( void );
	void	getType( void );
};

#endif // DOG_HPP
