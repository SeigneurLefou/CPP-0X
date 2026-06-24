#include "Fixed.hpp"

const int Fixed::_fractional_bits_number = 8;

// Constructor
Fixed::Fixed( void ) {

	this->_fixed_point_value = 0;
}

Fixed::Fixed( int raw) {

	this->_fixed_point_value = raw << this->_fractional_bits_number;
}

Fixed::Fixed( float raw ) {

	this->_fixed_point_value = raw * (1 << this->_fractional_bits_number);
}

Fixed::Fixed( const Fixed &other ) {

    *this = other;
}

// Overload operator
Fixed	&Fixed::operator=( const Fixed &other ) {

    if (this != &other) {
		this->_fixed_point_value = other.getRawBits();
    }

    return *this;
}

bool	Fixed::operator>( const Fixed &other ) {

    return (this->_fixed_point_value > other._fixed_point_value);
}

bool	Fixed::operator>=( const Fixed &other ) {

    return (this->_fixed_point_value >= other._fixed_point_value);
}

bool	Fixed::operator<( const Fixed &other ) {

    return (this->_fixed_point_value < other._fixed_point_value);
}

bool	Fixed::operator<=( const Fixed &other ) {

    return (this->_fixed_point_value <= other._fixed_point_value);
}

bool	Fixed::operator==( const Fixed &other ) {

    return (this->_fixed_point_value == other._fixed_point_value);
}

bool	Fixed::operator!=( const Fixed &other ) {

    return (this->_fixed_point_value != other._fixed_point_value);
}

float	Fixed::operator+( const Fixed &other ) {

    // return ((float)(this->_fixed_point_value + other._fixed_point_value) / (float)(1 << this->_fractional_bits_number));
    return (this->toFloat() + other.toFloat());
}

float	Fixed::operator-( const Fixed &other ) {

    // return ((float)(this->_fixed_point_value - other._fixed_point_value) / (float)(1 << this->_fractional_bits_number));
    return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*( const Fixed &other ) {

    // return ((float)(this->_fixed_point_value * other._fixed_point_value) / (float)(1 << this->_fractional_bits_number));
    return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/( const Fixed &other ) {

    // return ((float)(this->_fixed_point_value / other._fixed_point_value) / (float)(1 << this->_fractional_bits_number));
    return (this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_fixed_point_value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fixed_point_value;
	return (tmp);
}

// Destructor
Fixed::~Fixed( void ) {

}

// Public methode
int		Fixed::getRawBits( void ) const {

	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixed_point_value = raw;
}

int		Fixed::toInt( void ) const {

	return (this->_fixed_point_value >> this->_fractional_bits_number);
}

float	Fixed::toFloat( void ) const {

	return ((float) this->_fixed_point_value / (float)(1 << this->_fractional_bits_number));
}

Fixed	&Fixed::min( Fixed &first, Fixed &second ) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min( const Fixed &first, const Fixed &second ) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max( Fixed &first, Fixed &second ) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max( const Fixed &first, const Fixed &second ) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed) {

	output << fixed.toFloat();
	return (output);
}
