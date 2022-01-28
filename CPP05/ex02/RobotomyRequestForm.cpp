/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:11:45 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 19:11:45 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "stdlib.h"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request", _signGrade , _execGrade), _target(target)
{
	std::cout << target <<" RobotomyRequestForm Parameter constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm Copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(void)src;
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{	
	Form::execute(executor);
	std::cout << "* VRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization is a failure" << std::endl;
}