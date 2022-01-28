/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:03:00 by oronda            #+#    #+#             */
/*   Updated: 2021/12/22 12:27:21 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("")
{
	std::cout << "AMateria constructor" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria parameter constructor of : " << type << std::endl;
}
AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	std::cout << "AMateria Copy constructor" << std::endl;
}
AMateria::~AMateria()
{
	std::cout << "AMateria " << this->_type  <<" destructor" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	std::cout << "AMateria assignement operator" << std::endl;
	*this = src;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria Use on : " << target.getName() << std::endl;
}