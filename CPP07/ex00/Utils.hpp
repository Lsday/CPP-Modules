/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:23:05 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 18:01:21 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T> 
void swap(T &a, T &b)
{
	T temp = a;
	a =  b;
	b = temp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	else if (b < a)
		return b;
	return 0;
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
	return 0;
}
