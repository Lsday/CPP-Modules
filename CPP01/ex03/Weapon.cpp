/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:55:58 by oronda            #+#    #+#             */
/*   Updated: 2021/12/12 13:54:37 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str) : _type(str)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	this->_type = type;
}
