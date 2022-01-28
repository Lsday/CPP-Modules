/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:14:54 by oronda            #+#    #+#             */
/*   Updated: 2021/12/19 22:00:48 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
	 std::cout << "Animal Assignement operator called" << std::endl;
	 this->type = src.type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal making sound" << std::endl;
}

const std::string & AAnimal::getType(void) const
{
	std::cout << "GetType : ";
	return this->type;
}

std::ostream & operator <<(std::ostream & o, AAnimal & a)
{
	o << a.getType();
	return o;
}