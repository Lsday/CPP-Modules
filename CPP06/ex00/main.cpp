/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:33:57 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 16:53:52 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc != 2)
		std::cout << "Wrong number of args" << std::endl;
	
	std::cout << "int : " << static_cast<int>(argv[1][0]) << std::endl;

	std::cout << "float : " << argv[1] <<"f" << std::endl;

	//std::cout << "double : " << (double)argv[1] << std::endl;
	
	return 0;
}

