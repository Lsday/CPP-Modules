/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:32:05 by oronda            #+#    #+#             */
/*   Updated: 2021/12/18 14:53:53 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << name << " Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor of " << getName() << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	std::cout << "FragTrap Assignation operator" << std::endl;
	*this = src;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " say in weird english : HELLO GUYS, PLS SUBSCRIBE !!" << std::endl;
}
