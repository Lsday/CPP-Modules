/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:21:24 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 18:50:13 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat bob("Bob", 1);
		Form f("B65",5,1);
		bob.signForm(f);
	}

	std::cout << std::endl;
	
	{
		try
		{
			Bureaucrat dylan("Dylan", 10);
			Form b66("B66", 5, 1);
			dylan.signForm(b66);
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout << std::endl;
	
	{
		try
		{
			Form b67("B182",0,1);
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		try
		{
			Form b67("B52",152,1);
		}
		catch (std::exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	return 0;
}