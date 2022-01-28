/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:48:12 by oronda            #+#    #+#             */
/*   Updated: 2021/12/19 20:58:56 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (size_t i = 0; i < 2; i++)
		this->_ideas[i] = src._ideas[i];
}
Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const & src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	
	return *this;
}

std::string * Brain::GetIdeas()
{
	return this->_ideas;
}