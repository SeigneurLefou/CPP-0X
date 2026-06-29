#include "Cat.hpp"

Cat::Cat( void ) : AAnimal( "Cat" ) {

	this->brain = new Brain;
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat( const Cat &other ) : AAnimal( other ) {

    std::cout << "Cat copied" << std::endl;

    *this = other;
}

Cat &Cat::operator=( const Cat &other ) {

    std::cout << "Cat assigned" << std::endl;

	if (this == &other) {

		AAnimal::operator=(other);
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
