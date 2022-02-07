/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:49:45 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 22:28:32 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span 
{
	private:
		Span();
		std::multiset<int> _items;
		unsigned int _maxSize;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		virtual ~Span();
		Span& operator=(Span const &src);

		void addNumber(int nb);
		void shortestSpan();
		void longestSpan();

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Exception : Span is full";
				}
		};
	
};

//std::ostream &operator<<(std::ostream &os, Span const &src);

#endif