/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:48:45 by oronda            #+#    #+#             */
/*   Updated: 2021/12/22 13:00:59 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : _name("")
{
	std::cout << "Character default constructor" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Parameter constructor : " << name <<  std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor : " <<  std::endl;
	this->_name = src._name;
	for (size_t i = 0; i < 4; i++)
		if(src.inventory[i])
			delete src.inventory[i];
	for (size_t i = 0; i < 4; i++)
		if(src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
	
}

Character & Character::operator=(Character const & src)
{
	std::cout << "Character copy constructor : " <<  std::endl;
	this->_name = src._name;
	for (size_t i = 0; i < 4; i++)
		if(src.inventory[i])
			this->inventory[i] = src.inventory[i];
		else
			this->inventory[i] = NULL;

	return *this;
}

Character::~Character()
{
	std::cout << "Character " << this->_name  << " Destructor" <<  std::endl;
	for (size_t i = 0; i < 4; i++)
		if(inventory[i])
			delete inventory[i];
}

std::string const & Character::getName() const
{
	return this->_name;
}
void Character::equip(AMateria* m)
{
	if(!m)
		return;
	int i = 0;
	while(this->inventory[i])
		i++;
	if (i < 4)
	{
		std::cout << "Character : " << this->_name  << ", equip a new materia of type : " << m->getType() << std::endl;
		this->inventory[i] = m;
	}
	else
		std::cout << "Character : " << this->_name  << " inventory is full" <<  std::endl;	 

}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		std::cout << "Wrong Index" << std::endl;
	else
		this->inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx < 4))
		std::cout << "Wrong Index" << std::endl;
	else if (!this->inventory[idx])
		std::cout << "Materia not exist" << std::endl;
	else
		this->inventory[idx]->use(target);
}