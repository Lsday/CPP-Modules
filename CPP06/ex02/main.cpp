/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:06 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 16:07:54 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <math.h>

Base * generate(void)
{
	srand(time(NULL));
	int r = rand() % 3 + 1;

	if (r == 1)
		return new A;
	if (r == 2)
		return new B;
	if (r == 3)
		return new C;
	else
		return NULL;
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "this is class A" << std::endl;
	if(dynamic_cast<B*>(p))
		std::cout << "this is class B" << std::endl;
	if(dynamic_cast<C*>(p))
		std::cout << "this is class C" << std::endl;
}

void identify(Base& p)
{	
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "this is class A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "this is class B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "this is class C" << std::endl;
			}
			catch(const std::exception& e)
			{
				
			}
		}
	}

	

	

	
		

	
}

int main(void)
{
	Base *base = generate();
	Base &baseref = *base;
	identify(base);
	identify(baseref);

	
}
