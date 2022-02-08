/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:53:02 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 13:21:08 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span()
{
	std::cout << "Span Default Constructor" << std::endl;
}

Span::Span(Span const &src)
{
	std::cout << "Span Copy Constructor" << std::endl;
	this->_items = src._items;
}

Span::Span(unsigned int N)
{
	std::cout << "Span Parameter Constructor" << std::endl;
	_items.reserve(N);
}

Span::~Span()
{
	std::cout << "Span Destructor" << std::endl;
}

Span& Span::operator=(Span const &src)
{
	std::cout << "Span assignement operator" << std::endl;
	this->_items = src._items;
	return *this;
}

void Span::addNumber(int nb)
{
	if (_items.size() >= _items.capacity())
		throw SpanFullException();
	_items.push_back(nb);
}

int Span::shortestSpan()
{
	if (_items.size() < 2)
		throw NotEnoughElementsException();
	
	int gap = 0, temp_gap = 0;
	//std::sort(_items.begin(), _items.end());
	for (int i = 0; i < _items.size() - 1; i++)
	{
		temp_gap = abs(_items[i + 1] - _items[i]);
		if (i == 0)
			gap = temp_gap;
		else if (temp_gap < gap)
			gap = temp_gap;	
	}
	return gap;
}

int Span::longestSpan()
{
	if (_items.size() < 2)
		throw NotEnoughElementsException();
		
	int gap = 0, temp_gap = 0;
	//std::sort(_items.begin(), _items.end());
	for (int i = 0; i < _items.size() - 1; i++)
	{
		temp_gap = abs( _items[i + 1] - _items[i]);
		if (temp_gap > gap)
			gap = temp_gap;
	}
	return gap;
}
