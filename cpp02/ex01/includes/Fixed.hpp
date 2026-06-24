#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( int raw );
		Fixed( float raw );
		Fixed( const Fixed &other );
		Fixed &operator=( const Fixed &other );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void );
		float	toFloat( void );

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits_number;
};

#endif // FIXED_HPP
