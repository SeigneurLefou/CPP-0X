#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( int raw );
		Fixed( float raw );
		Fixed( const Fixed &other );
		~Fixed( void );
		Fixed			&operator=( const Fixed &other );
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits_number;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed);

#endif // FIXED_HPP
