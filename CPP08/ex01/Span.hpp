/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:49:45 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 13:14:53 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span 
{
	private:
		Span();
		std::vector<int> _items;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		virtual ~Span();
		Span& operator=(Span const &src);

		void addNumber(int nb);

		template<typename T>
		void addNumber(T begin, T end)
		{
			int range = std::distance(begin,end);
			if (static_cast<int>(_items.size()) + range >  static_cast<int>(_items.capacity()))
				throw SpanAddException();
			std::copy(begin,end,std::back_inserter(_items));
		}
		 
		int shortestSpan();
		int longestSpan();

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "\033[1;31mException : Span is Full \033[0m";
				}
		};

		class NotEnoughElementsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "\033[1;31mException : Can't span, not enough elements \033[0m";
				}
		};
		class SpanAddException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "\033[1;31mException : Tried to add too many ints to span \033[0m";
				}
		};
	
};


#endif