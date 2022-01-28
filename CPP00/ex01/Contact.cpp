/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:01:52 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 15:34:33 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pnb, std::string dkst) :
 _firstName(fn), _lastName(ln), _nickName(nn), _phoneNumber(pnb), _darkestSecret(dkst)
{
}

Contact::~Contact()
{
}

std::string Contact::GetFirstName() {return this->_firstName;}
std::string Contact::GetLastName() {return this->_lastName;}
std::string Contact::GetNickName() {return this->_nickName;}
std::string Contact::GetPhoneNumber() {return this->_phoneNumber;}
std::string Contact::GetDarkestSecret() {return this->_darkestSecret;}

void Contact::SetFirstName(std::string str) {this->_firstName = str;}
void Contact::SetLastName(std::string str) {this->_lastName = str;}
void Contact::SetNickName(std::string str) {this->_nickName = str;}
void Contact::SetPhoneNumber(std::string str) {this->_phoneNumber = str;}
void Contact::SetDarkestSecret(std::string str) {this->_darkestSecret = str;}