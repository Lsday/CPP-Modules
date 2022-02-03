/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:11 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 14:07:14 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base 
{
	public:
		virtual ~Base(){};  
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void); // It randomly instanciates A, B or C and returns the instance as a Base pointer
void identify(Base* p); // It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base& p); // It prints the actual type of the object pointed to by p: "A", "B" or "C"



#endif