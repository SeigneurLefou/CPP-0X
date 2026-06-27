#include "Dog.hpp"

Dog::Dog() {

	Animal("Dog");
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other) {

    std::cout << "Dog copied" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {

    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog() {

    std::cout << "Dog destroyed" << std::endl;
}
