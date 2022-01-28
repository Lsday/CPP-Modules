/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:43:30 by oronda            #+#    #+#             */
/*   Updated: 2021/12/16 23:23:49 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed()){}
Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)){}

Point::Point(Point const & src) : _x(src._x), _y(src._y)
{
	
}

Point::~Point(){}

Point& Point::operator=(const Point& rhs)
{	
	return *this;
}
Fixed const &Point::getX(void) const
{
	return this->_x;
}
Fixed const &Point::getY(void) const
{
	return this->_y;	
}

std::ostream & operator<<(std::ostream &o, Point const &p)
{
	o << "X : " << p.getX() <<" | Y : " <<   p.getY();
	return o;
}


