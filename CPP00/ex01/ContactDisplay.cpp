/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactDisplay.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:40:43 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 20:57:54 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactDisplay.hpp"
#include <iostream>
#include <iomanip>

void ContactDisplay::DisplayIndex(Contact *contacts, int index) const
{
	std::cout <<  "FirstName      : " << contacts[index].GetFirstName() << std::endl;
	std::cout <<  "LastName       : " << contacts[index].GetLastName() << std::endl;
	std::cout <<  "NickName       : " << contacts[index].GetNickName() << std::endl;
	std::cout <<  "Phone Number   : " << contacts[index].GetPhoneNumber() << std::endl;
	std::cout <<  "Darkest Secret : " << contacts[index].GetDarkestSecret() << std::endl;
}

void ContactDisplay::DisplayField(std::string str) const
{
	std::string result = str;
	if (result.length() >= 10)
	{
		result = result.substr(0,10);
		result[9] = '.';
	}
	std::cout << std::setw(10) << result; 
	std::cout << "|";
	
}

void ContactDisplay::DisplayOne(Contact contact, int index) const
{
	std::cout << std::setw(10) << index << "|";
	DisplayField(contact.GetFirstName());
	DisplayField(contact.GetLastName());
	DisplayField(contact.GetNickName());
	std::cout << std::endl;
}

void ContactDisplay::DisplayAll(Contact *contacts, int contactCount) const
{
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name"; 
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;

	for (size_t i = 0; i < contactCount; i++)
	{
		DisplayOne(contacts[i], i);
	}

	std::string str;
	std::cout << "Enter an index : ";
	int index;
	std::cin >> str;
	if (*(str.c_str()) >= '0' && *(str.c_str()) <= '7')
	{
		if (std::atoi(str.c_str()) > contactCount - 1)
			std::cerr << "Contact Doesn't exist" << std::endl;
		else
			DisplayIndex(contacts, std::atoi(str.c_str()));
	}
	else
		std::cerr << "Invalid index" << std::endl;
	
	
	
}

