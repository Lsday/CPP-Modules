/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:21:24 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 13:23:55 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
	srand(time(NULL));
	Intern someIntern;

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat bob("BOB", 25);
	std::cout << bob << std::endl;

	Form *shrub = someIntern.makeForm("Shrubbery Creation", "Maison");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(bob);

	Form *pres = someIntern.makeForm("Presidential Pardon", "Bob");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = someIntern.makeForm("Robotomy Request", "Frankenstein");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(bob);
	bob.executeForm(*robot);
	bob.executeForm(*robot);

	std::cout << "---" << std::endl;

	try
	{
		Form *randomForm = someIntern.makeForm("Random Form", "nobody");
		std::cout << randomForm << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		bob.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("BOB");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(bob);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("BOB");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		bob.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}