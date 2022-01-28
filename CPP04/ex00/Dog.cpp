/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:14:54 by oronda            #+#    #+#             */
/*   Updated: 2021/12/18 23:54:23 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog Assignement operator called" << std::endl;
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}