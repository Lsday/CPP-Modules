#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{	
	Fixed two(2);
	return ((a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY()))/two);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed A = area(a,b,c);
	Fixed A1 = area(p,b,c);
	Fixed A2 = area(a,p,c);
	Fixed A3 = area(a,b,p);

	return A == A1 + A2 + A3; 
	
}


