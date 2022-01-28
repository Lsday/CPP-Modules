/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:55:54 by oronda            #+#    #+#             */
/*   Updated: 2021/12/12 13:55:48 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const name) : _name (name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

Weapon& HumanB::getWeapon(void) const
{
	return *(this->_weapon);
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attaks with his " << getWeapon().getType() << std::endl;
}