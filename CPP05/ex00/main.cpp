/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:22:00 by oronda            #+#    #+#             */
/*   Updated: 2022/01/21 18:48:05 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{	
	try
	{
		Bureaucrat	bob = Bureaucrat("Bob", 1);
		std::cout << bob << std::endl;
		Bureaucrat bob2 = bob;
		std::cout << bob2 << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	p = Bureaucrat("Pierre", 1);
		std::cout << p << std::endl;
		p.demote();
		std::cout << p << std::endl;
		p.promote();
		std::cout << p << std::endl;
		p.promote();
		std::cout << p << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		polo = Bureaucrat("Paul", 150);
		std::cout << polo << std::endl;
		polo.promote();
		std::cout << polo << std::endl;
		polo.demote();
		std::cout << polo << std::endl;
		polo.demote();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		jacques = Bureaucrat("Jacques", 0);
		std::cout << jacques << std::endl;
		jacques.demote();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		johny = Bureaucrat("Johny", 151);
		std::cout << johny << std::endl;
		johny.promote();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
