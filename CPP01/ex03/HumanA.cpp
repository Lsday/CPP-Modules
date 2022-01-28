/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:55:51 by oronda            #+#    #+#             */
/*   Updated: 2021/12/12 13:55:58 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const name, Weapon &weapon) : _name (name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}


Weapon & HumanA::getWeapon( void ) const
{
	return this->_weapon;
}


void HumanA::attack(void)
{
	std::cout << this->_name << " attaks with his " << this->_weapon.getType() << std::endl;;
}
