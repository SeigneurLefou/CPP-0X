#include "Point.hpp"

Point::Point( void ) {
	_x = Fixed(0);
	_y = Fixed(0);
}

Point::Point( Fixed &x, Fixed &y ) {
	_x = x;
	_y = y;
}

Point::Point(const Point &other) {

    std::cout << "Point copied" << std::endl;
    *this = other;
}

Point &Point::operator=(const Point &other) {

    std::cout << "Point assigned" << std::endl;
    return *this;
}

Point::~Point() {
    std::cout << "Point destroyed" << std::endl;
}
