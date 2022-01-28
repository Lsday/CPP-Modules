/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:49:45 by oronda            #+#    #+#             */
/*   Updated: 2021/12/10 09:37:49 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <string>
#include "ContactManager.hpp"
#include "ContactDisplay.hpp"



int main(int argc, char *argv[])
{

	ContactManager cManager;
	ContactDisplay display;
	
	while (1)
	{
		std::string str;
		std:getline(std::cin,str);
		
		if(!str.compare("EXIT"))
			exit(0);
		if(!str.compare("ADD"))
			cManager.AddContact();
		if(!str.compare("SEARCH"))
			display.DisplayAll(cManager.contacts, cManager.contactCount);
	}
	return 0;
}
