/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:14:54 by oronda            #+#    #+#             */
/*   Updated: 2021/12/18 23:51:58 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal Assignement operator called" << std::endl;
	this->type = src.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal making sound" << std::endl;
}

const std::string & Animal::getType(void) const
{
	return this->type;
}

std::ostream & operator<<(std::ostream & o, Animal & a)
{
	o << a.getType();
	return o;
}