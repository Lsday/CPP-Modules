/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:02:32 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 09:49:12 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", _signGrade , _execGrade), _target(target)
{
	
	std::cout << target <<" PresidentialPardonForm Parameter constructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _target(src._target)
{
	std::cout << "PresidentialPardonForm Copy constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	(void)src;
	return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{	
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
}