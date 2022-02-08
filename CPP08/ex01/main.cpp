/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:58:45 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 14:32:16 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span span(5);

		try
		{
			for (int i = 0; i < 7; i++)
			{
				span.addNumber(i);
			}
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout <<"------------" << std::endl;

	{
		Span span(5);
		span.addNumber(1);
		span.addNumber(7);
		span.addNumber(5);
		span.addNumber(-5);

		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	std::cout <<"------------" << std::endl;

	{
		try
		{
			Span span(1);
			span.addNumber(1);
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
	}
	std::cout <<"------------" << std::endl;

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	std::cout <<"------------" << std::endl;

	{
		try
		{
			std::vector<int> pouet;
			pouet.push_back(6);
			pouet.push_back(3);
			pouet.push_back(17);
			pouet.push_back(9);
			pouet.push_back(11);

			Span sp(5);
			sp.addNumber(pouet.begin(), pouet.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
	}


	
	return 0;
}
