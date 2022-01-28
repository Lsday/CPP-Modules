/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:22:46 by oronda            #+#    #+#             */
/*   Updated: 2021/12/22 12:52:17 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() 
{
	std::cout << "MateriaSource Constructor" << std::endl;
	for (size_t i = 0; i < MAX_MATERIA_NB; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	for (size_t i = 0; i < MAX_MATERIA_NB; i++)
		if (this->_materias[i])
			this->_materias[i] = src._materias[i];
		
}
MateriaSource::~MateriaSource() 
{
	std::cout << "MateriaSource Destructor" << std::endl;
	for (size_t i = 0; i < MAX_MATERIA_NB; i++)
		if (this->_materias[i])
			delete _materias[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src)
{
	std::cout << "MateriaSource assignation operator" << std::endl;
	for (size_t i = 0; i < MAX_MATERIA_NB; i++)
		if (this->_materias[i])
			this->_materias[i] = src._materias[i];
	return *this;
}


void MateriaSource::learnMateria(AMateria* src)
{
	std::cout << "MateriaSource Learn called" << std::endl;
	int i = 0;
	while(this->_materias[i])
		i++;
	if (i >= MAX_MATERIA_NB - 1)
		return;
	std::cout << "MateriaSource Learned a New Materia : " << src->getType() << std::endl;
	this->_materias[i] = src;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < MAX_MATERIA_NB; i++)
		if(this->_materias[i])
			if (type == _materias[i]->getType())
				return _materias[i]->clone();
	
	std::cout << "Materia of type \""<< type << "\" not learned" << std::endl;	
	return nullptr;
}