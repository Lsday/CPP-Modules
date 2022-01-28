/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:40:48 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 20:40:49 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactManager.hpp"
#include <iostream>


ContactManager::ContactManager()
{
	contactCount = 0;
	writePos = 0;

}

ContactManager::~ContactManager()
{
}

void ContactManager::AddContact()
{
	if (writePos == 8)
		writePos = 0;

	std::string str;

	std::cout << "First Name ? ";
	std::getline(std::cin, str);
	contacts[writePos].SetFirstName(str);

	std::cout << "Last Name ? ";
	std::getline(std::cin,str);
	contacts[writePos].SetLastName(str);

	std::cout << "Nick Name ? ";
	std::getline(std::cin,str);
	contacts[writePos].SetNickName(str);

	std::cout << "Phone Number ? ";
	std::getline(std::cin,str);
	contacts[writePos].SetPhoneNumber(str);

	std::cout << "Darkest Secret ? ";
	std::getline(std::cin,str);
	contacts[writePos].SetDarkestSecret(str);

	writePos++;

	contactCount++;
	if (contactCount >= 8)
		contactCount = 8;
	
	std::cout << "Contact successfully Added !\n";
}

