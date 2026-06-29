/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:41:19 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/29 14:43:15 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

    std::cout << "WrongAnimal constructed" << std::endl;

	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( std::string type ) {

    std::cout << "WrongAnimal constructed" << std::endl;

	this->type = type;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) {

    std::cout << "WrongAnimal copied" << std::endl;

    *this = other;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other ) {

    std::cout << "WrongAnimal assigned" << std::endl;

	if (this == &other) {

	    this->type = other.getType();
	}

    return *this;
}

WrongAnimal::~WrongAnimal( void ) {

    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return ( this->type );
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "*dnuos lamina*" << std::endl;
}
