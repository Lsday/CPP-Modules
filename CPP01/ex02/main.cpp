/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:40:11 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 20:53:52 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string Adress: " << &string << std::endl;
	std::cout << "stringPTR Adress: " << stringPTR << std::endl;
	std::cout << "stringREF Adress: " << &stringREF << std::endl;

	std::cout << "Display with PTR: " << *stringPTR << std::endl;
	std::cout << "Display with REF: " << stringREF << std::endl;
	
	return 0;
}
