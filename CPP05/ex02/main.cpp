/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:21:24 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 19:59:46 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
	srand(time(NULL));

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat bob("Bob", 25);
	std::cout << bob << std::endl;

	std::cout << std::endl;

	Form *shrub = new ShrubberyCreationForm("JardinDeVersaille");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(bob);

	std::cout << std::endl;

	Form *pres = new PresidentialPardonForm("Bob");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	std::cout << std::endl;

	Form *robot = new RobotomyRequestForm("Frankenstein");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(bob);
	bob.executeForm(*robot);
	bob.executeForm(*robot);

	std::cout << std::endl;

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
		PresidentialPardonForm pres = PresidentialPardonForm("Dylan");
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
		PresidentialPardonForm pres = PresidentialPardonForm("Bob");
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