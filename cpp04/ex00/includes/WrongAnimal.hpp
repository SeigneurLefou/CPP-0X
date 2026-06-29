/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:55:49 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/29 14:39:58 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &other );
		WrongAnimal &operator=( const WrongAnimal &other );
		virtual	~WrongAnimal( void );
		void		makeSound( void ) const;
		std::string	getType( void ) const;

	protected:
		std::string	type;
};

#endif // WRONGANIMAL_HPP
