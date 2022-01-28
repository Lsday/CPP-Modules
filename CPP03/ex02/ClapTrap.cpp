/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:38:40 by oronda            #+#    #+#             */
/*   Updated: 2021/12/17 23:48:42 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _attackDamage(0), _energyPoints(10)
{
	std::cout << "ClapTrap default Parameter constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _attackDamage(0), _energyPoints(10)
{
	std::cout << "ClapTrap " << name << " Name Parameter constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "ClapTrap Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor of "<< getName() << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "ClapTrap Assignation operator" << std::endl;
	*this = src;
	return *this;
}

std::ostream & operator<<(std::ostream &o, const ClapTrap &c)
{
	o << "ClapTrap Name: " << c.getName() << "Hp: " << c.getHP() << "Dmg: " << c.getAttackDamage() << "Ep: " << c.getEP();
	return o;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << _attackDamage  << " points of damage!" <<  std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << this->_name << " take " << amount << " points of damage!" <<  std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << this->_name << " is repairing " << amount << " health" <<  std::endl;
}

const std::string & ClapTrap::getName(void) const
{
	return this->_name;
}
int ClapTrap::getHP(void) const
{
	return this->_hitPoints;
}
int ClapTrap::getEP(void) const
{
	return this->_energyPoints;
}
int ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}