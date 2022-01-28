#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		~Point();	
		Point& operator=(Point const & rhs);
		Fixed const &getX(void) const;
		Fixed const &getY(void) const;

	private:
	const	Fixed  _x;
	const	Fixed  _y;
};

std::ostream & operator<<(std::ostream &o, Point const &p);


#endif