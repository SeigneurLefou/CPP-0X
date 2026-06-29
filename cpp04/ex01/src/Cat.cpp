#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

	this->brain = new Brain;
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other ) {

    std::cout << "Cat copied" << std::endl;

    *this = other;
}

Cat &Cat::operator=( const Cat &other ) {

    std::cout << "Cat assigned" << std::endl;

	if (this == &other) {

		Animal::operator=(other);
		this->brain = other.brain;
	}

    return *this;
}

Cat::~Cat() {

    std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound( void ) const {

	std::cout << "*Nyaaa~*" << std::endl;
}
