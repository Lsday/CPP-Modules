/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:26:47 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 13:57:50 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdint.h>
#include <iostream>
#include <string>


struct Data
{
	std::string s;
	int i;
};

std::ostream& operator<<(std::ostream  &os, Data src)
{
	os << src.s << " | " << src.i ;
	return os;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main(void)
{
	Data d = {"pouet", 42 };

	std::cout << "Data adress : " << &d << std::endl;
	std::cout << "before serialize : " << d << std::endl;

	uintptr_t ptr = serialize(&d);
	Data *result = deserialize(ptr);
	
	std::cout << "after deserialize : " << *result << std::endl;
	std::cout << "Data adress : " << result << std::endl;

	return 0;
}

