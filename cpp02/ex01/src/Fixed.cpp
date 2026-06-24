#include "Fixed.hpp"

const int Fixed::_fractional_bits_number = 8;

Fixed::Fixed( void ) {
	_fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int raw) {
	_fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( float raw ) {
	_fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=( const Fixed &other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
		this->_fixed_point_value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point_value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_point_value = raw;
}

int		toInt( void ) {

}

float	toFloat( void ) {

}
