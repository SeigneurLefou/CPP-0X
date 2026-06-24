#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( int raw );
		Fixed( float raw );
		Fixed( const Fixed &other );
		~Fixed( void );
		Fixed					&operator=( const Fixed &other );
		bool					operator>( const Fixed &other );
		bool					operator>=( const Fixed &other );
		bool					operator<( const Fixed &other );
		bool					operator<=( const Fixed &other );
		bool					operator==( const Fixed &other );
		bool					operator!=( const Fixed &other );
		float					operator+( const Fixed &other );
		float					operator-( const Fixed &other );
		float					operator*( const Fixed &other );
		float					operator/( const Fixed &other );
		Fixed					&operator++( void );
		Fixed					&operator--( void );
		Fixed					operator++( int );
		Fixed					operator--( int );
		int						getRawBits( void ) const;
		void					setRawBits( int const raw );
		int						toInt( void ) const;
		float					toFloat( void ) const;
		static Fixed			&min( Fixed &first, Fixed &second );
		static const Fixed		&min( const Fixed &first, const Fixed &second );
		static Fixed			&max( Fixed &first, Fixed &second );
		static const Fixed		&max( const Fixed &first, const Fixed &second );

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits_number;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed);

#endif // FIXED_HPP
