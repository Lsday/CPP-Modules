/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:58:45 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 22:23:40 by oronda           ###   ########.fr       */
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
	{
		Span span(5);
		span.addNumber(1);
		span.addNumber(5);
		span.addNumber(7);

		int shortest_span = span.shortestSpan();
		int longest_span = span.longestSpan();
	}

	
	return 0;
}
