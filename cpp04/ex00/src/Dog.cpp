#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other) {

    std::cout << "Dog copied" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {

    std::cout << "Dog assigned" << std::endl;

	if (this == &other) {

		Animal::operator=(other);
	}

    return *this;
}

Dog::~Dog() {

    std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound( void ) {

	std::cout << "*Woof*" << std::endl;
}
