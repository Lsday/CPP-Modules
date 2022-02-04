/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:47:17 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 19:09:37 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>



template<typename T>
void print(T &t)
{
	std::cout << t << std::endl;
}

template<typename T>
void increment(T &t)
{
	t++;
}

template<typename T>
void Iter(T *array, int count, void(*fcptr)(T&))
{
	for (int i = 0; i < count; i++)
		fcptr(array[i]);
}
