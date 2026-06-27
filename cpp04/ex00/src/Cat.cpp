#include "Cat.hpp"

Cat::Cat( void ) {

    std::cout << "Cat constructed" << std::endl;
	Animal( "Cat" );
}

Cat::Cat(const Cat &other) {

    std::cout << "Cat copied" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {

    std::cout << "Cat assigned" << std::endl;
    return *this;
}

Cat::~Cat() {

    std::cout << "Cat destroyed" << std::endl;
}
