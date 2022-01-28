/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:23 by oronda            #+#    #+#             */
/*   Updated: 2021/12/13 19:12:30 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen() : 
levels{"debug", "info", "warning", "error"}, 
funcPtr{&Karen::debug,  &Karen::info, &Karen::warning, &Karen::error}
{
}

Karen::~Karen()
{
}

void Karen::complain (std::string level)
{
	for (size_t i = 0; i < 4; i++)
		if (!level.compare(levels[i]))
			(this->*funcPtr[i])();
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don'"
		"t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've bee"
		"n coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	
}