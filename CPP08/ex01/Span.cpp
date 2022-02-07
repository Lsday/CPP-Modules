/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:53:02 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 22:30:04 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span Default Constructor" << std::endl;
}

Span::Span(Span const &src)
{
	std::cout << "Span Copy Constructor" << std::endl;
}

Span::Span(unsigned int N) : _maxSize(N)
{
	std::cout << "Span Parameter Constructor" << std::endl;
}

Span::~Span()
{
	std::cout << "Span Destructor" << std::endl;
}

Span& Span::operator=(Span const &src)
{
	std::cout << "Span assignement operator" << std::endl;
	return *this;
}

void Span::addNumber(int nb)
{
	if (_maxSize >=_items.size())
		throw SpanFullException();
	_items.push_back(nb);
	
}

int Span::shortestSpan()
{
	int shortestGap = 0;

	for (int i = 0; i < _items.size(); i++)
	{
		shortestGap = _items[i + 1] - ite
	}
	
	
	 
}

int Span::longestSpan()
{

}

// std::ostream &operator<<(std::ostream &os, Span const &src)
// {
// }