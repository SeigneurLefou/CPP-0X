#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal &other );
		AAnimal &operator=( const AAnimal &other );
		virtual	~AAnimal( void );
		virtual void		makeSound( void ) const = 0;
		std::string	getType( void ) const;

	protected:
		std::string	type;
};

#endif // ANIMAL_HPP
