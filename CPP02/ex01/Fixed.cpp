/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:28:05 by oronda            #+#    #+#             */
/*   Updated: 2021/12/16 22:18:41 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int i) : _value(i << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float f) : _value(roundf(f * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;

	return _value;
}
void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits operator called" << std::endl;

	this->_value = raw;
}

int Fixed::toInt( void ) const
{

	return (this->_value >> _bits);
}

float Fixed::toFloat( void ) const
{

	return ((float)this->_value / (float)(1 << _bits));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

