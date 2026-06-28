#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other) {

    std::cout << "Cat copied" << std::endl;

	if (this == &other) {

		Animal::operator=(other);
	}

    *this = other;
}

Cat &Cat::operator=(const Cat &other) {

    std::cout << "Cat assigned" << std::endl;

    return *this;
}

Cat::~Cat() {

    std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound( void ) {

	std::cout << "*Meeeeooooow*" << std::endl;
}
