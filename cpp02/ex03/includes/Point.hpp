#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
	public:
		Point();
		Point(Fixed &x, Fixed &y);
		Point(const Point &other);
		Point &operator=(const Point &other);
		~Point();

	private:
		Fixed	_x;
		Fixed	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif // POINT_HPP
