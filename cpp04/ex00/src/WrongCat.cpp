/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:41:23 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/29 14:42:45 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {

    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal( other ) {

    std::cout << "WrongCat copied" << std::endl;

    *this = other;
}

WrongCat &WrongCat::operator=( const WrongCat &other ) {

    std::cout << "WrongCat assigned" << std::endl;

	if (this == &other) {

		WrongAnimal::operator=(other);
	}

    return *this;
}

WrongCat::~WrongCat() {

    std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound( void ) const {

	std::cout << "*Wooooeeeeem*" << std::endl;
}
