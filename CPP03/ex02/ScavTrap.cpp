/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:32:05 by oronda            #+#    #+#             */
/*   Updated: 2021/12/18 14:11:54 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << name << " Constructor" << std::endl;
}

// ScavTrap::ScavTrap(ClapTrap const & src) 
// {
// 	*this = src;
// 	std::cout << "ScavTrap copy constructor" << std::endl;
// }

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor of " << getName() << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "ScavTrap Assignation operator" << std::endl;
	*this = src;
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << _attackDamage  << " points of damage!" <<  std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered GUARD MODE" << std::endl;
}

// const std::string & ClapTrap::getName(void) const
// {
// 	return this->_name;
// }
// int ClapTrap::getHP(void) const
// {
// 	return this->_hitPoints;
// }
// int ClapTrap::getEP(void) const
// {
// 	return this->_energyPoints;
// }
// int ClapTrap::getAttackDamage(void) const
// {
// 	return this->_attackDamage;
// }