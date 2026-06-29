#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {

    std::cout << "AAnimal constructed" << std::endl;

	this->type = "AAnimal";
}

AAnimal::AAnimal( std::string type ) {

    std::cout << "AAnimal constructed" << std::endl;

	this->type = type;
}

AAnimal::AAnimal( const AAnimal &other ) {

    std::cout << "AAnimal copied" << std::endl;

    *this = other;
}

AAnimal &AAnimal::operator=( const AAnimal &other ) {

    std::cout << "AAnimal assigned" << std::endl;

	if (this == &other) {

	    this->type = other.getType();
	}

    return *this;
}

AAnimal::~AAnimal( void ) {

    std::cout << "AAnimal destroyed" << std::endl;
}

std::string	AAnimal::getType( void ) const {

	return ( this->type );
}
