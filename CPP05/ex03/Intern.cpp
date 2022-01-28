/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:42:39 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 13:29:13 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern()
{
	std::cout << "Intern Default constructor " << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern copy constructor " << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor " << std::endl;
}

Intern & Intern::operator=(Intern const &src)
{
	std::cout << "Intern assignement operator " << std::endl;
	(void)src;
	return *this;
}


Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	Form* result = NULL;
	typedef Form* (*createFormFunc)(std::string const & target);
	typedef struct s_FormTypes
	{ 
		std::string form_name;
		createFormFunc createFormFunc;
	} t_FormTypes;

	t_FormTypes	forms[] = 
	{
		{"Presidential Pardon", createPresidentialPardonForm},
		{"Robotomy Request", createRobotomyRequestForm},
		{"Shrubbery Creation", createShrubberyCreationForm}
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i].form_name == formName)
		{
			result = forms[i].createFormFunc(target);
			std::cout << "Intern creates " << result->getName() << std::endl;
			return (result);
		}
	}
	throw Intern::FormDontExistException();
}

Form* Intern::createPresidentialPardonForm(std::string const & target)
{ 
	return (new PresidentialPardonForm(target));
}

Form* Intern::createRobotomyRequestForm(std::string const & target)
{
	 return (new RobotomyRequestForm(target));
}

Form* Intern::createShrubberyCreationForm(std::string const & target)
{ 
	return (new ShrubberyCreationForm(target));
}
	
