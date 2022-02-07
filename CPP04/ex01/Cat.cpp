/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:38:55 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 21:41:50 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}
Cat::Cat(Cat const & src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	
	this->type = src.type;
	Brain *newBrain = new Brain();
	*newBrain = *(src.brain);
	delete this->brain;
	this->brain = newBrain;
	
}
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat Assignement operator called" << std::endl;
	
	this->type = src.type;
	Brain *newBrain = new Brain();
	*newBrain = *(src.brain);
	delete this->brain;
	this->brain = newBrain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Meow" << std::endl;
}

Brain * Cat::GetBrain() const
{
	return this->brain;
}
