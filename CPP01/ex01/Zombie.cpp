/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:59:46 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 21:02:22 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("default")
{
}

Zombie::Zombie(std::string name)
{
	SetName(name);
	announce();
}

Zombie::~Zombie()
{
	std::cout << GetName() + " destroyed" + '\n';
}

void Zombie::announce(void)
{
	std::cout << GetName() + " BraiiiiiiinnnzzzZ..." + '\n';
	return;
}

void Zombie::SetName(std::string str)
{
	this->_name = str;
}

std::string Zombie::GetName( void )
{
	return this->_name;
}



