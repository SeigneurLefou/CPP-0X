#include "Animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal constructed" << std::endl;
	this->type = "Animal";
}

Animal::Animal( std::string type ) {
    std::cout << "Animal constructed" << std::endl;
	this->type = type;
}

Animal::Animal( const Animal &other ) {

    std::cout << "Animal copied" << std::endl;
    *this = other;
}

Animal &Animal::operator=( const Animal &other ) {
    std::cout << "Animal assigned" << std::endl;
    return *this;
}

Animal::~Animal( void ) {
    std::cout << "Animal destroyed" << std::endl;
}

std::string	Animal::getType( void ) {

	return ( this->type );
}

void	Animal::makeSound( void ) {

	if ( type == "Cat" ) {
		std::cout << "MEEOOOOOOOOOOOOOOW" << std::endl;
	} else if ( type == "Dog" ) {
		std::cout << "Woof" << std::endl;
	} else {
		std::cout << "*indistinct sound*" << std::endl;
	}
}
