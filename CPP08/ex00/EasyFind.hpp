/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:27 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 00:07:01 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <algorithm>



class NotFoundException : public  std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "\033[1;31mException : Number not found \033[0m";
		}
};

template <class T>
typename T::iterator easyfind(T &items, int value) 
{
	typename T::iterator result;
	if( (result = std::find(items.begin(),items.end(),value)) == items.end())
		throw NotFoundException();
	return result;
}



