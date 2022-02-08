/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:25:14 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 16:53:23 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
		MutantStack() : std::stack<T>() {};
	 	MutantStack(const MutantStack& src) : std::stack<T>(src){};
		virtual ~MutantStack(){};	

		MutantStack&	operator=(const MutantStack & src)
		{
			std::stack<T>::operator=(src);
			return (*this);
		}

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}

		reverse_iterator	rbegin(void)
		{
			return (this->c.rbegin());
		}

		reverse_iterator	rend(void)
		{
			return (this->c.rend());
		}
		
};


#endif