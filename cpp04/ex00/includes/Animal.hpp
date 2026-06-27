#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal &other );
		Animal &operator=( const Animal &other );
		~Animal( void );
		void		makeSound( void );
		std::string	getType( void );

	protected:
		std::string	type;
};

#endif // ANIMAL_HPP
