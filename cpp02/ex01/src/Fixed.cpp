#include "Fixed.hpp"

const int Fixed::_fractional_bits_number = 8;

Fixed::Fixed( void ) {

    std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::Fixed( int raw) {

    std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = raw << this->_fractional_bits_number;
}

Fixed::Fixed( float raw ) {

    std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = raw * (1 << this->_fractional_bits_number);
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

	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_fixed_point_value = raw;
}

int		Fixed::toInt( void ) const {

	return (this->_fixed_point_value >> this->_fractional_bits_number);
}

float	Fixed::toFloat( void ) const {

	return ((float) this->_fixed_point_value / (float)(1 << this->_fractional_bits_number));
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed) {

	output << fixed.toFloat();
	return (output);
}
