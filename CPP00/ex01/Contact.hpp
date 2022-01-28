/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:56:26 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 15:32:05 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact 
{
	private:
		std::string _firstName, _lastName, _nickName, _phoneNumber, _darkestSecret;

	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret );
		~Contact();

		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();

		void SetFirstName(std::string str);
		void SetLastName(std::string str);
		void SetNickName(std::string str);
		void SetPhoneNumber(std::string str);
		void SetDarkestSecret(std::string str);

		
};

#endif



