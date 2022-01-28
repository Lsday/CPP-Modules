/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:38:55 by oronda            #+#    #+#             */
/*   Updated: 2021/12/19 09:28:28 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
}
Cat::Cat(Cat const & src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
}
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat Assignement operator called" << std::endl;
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Meow" << std::endl;
}
