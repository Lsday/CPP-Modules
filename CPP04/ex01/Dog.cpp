/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:14:54 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 00:07:59 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	
	this->type = src.type;
	Brain *newBrain = new Brain();
	*newBrain = *(src.brain);
	delete this->brain;
	this->brain = newBrain;
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog Assignement operator called" << std::endl;
	this->type = src.type;
	Brain *newBrain = new Brain();
	*newBrain = *(src.brain);
	delete this->brain;
	this->brain = newBrain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}