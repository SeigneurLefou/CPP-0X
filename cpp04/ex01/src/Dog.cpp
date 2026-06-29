#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

	this->brain = new Brain;
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog( const Dog &other ) : Animal( other ) {

    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=( const Dog &other ) {

    std::cout << "Dog assigned" << std::endl;

	if (this == &other) {

		Animal::operator=(other);
		this->brain = other.brain;
	}

    return *this;
}

Dog::~Dog() {

	delete this->brain;
    std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound( void ) const {

	std::cout << "*Woof*" << std::endl;
}
