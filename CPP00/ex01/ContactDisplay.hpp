#ifndef CONTACT_DISPLAY_H
# define CONTACT_DISPLAY_H

#include "Contact.hpp"


class ContactDisplay
{
	private:
		void DisplayOne(Contact contact, int index) const;
		void DisplayField(std::string str) const;
		void DisplayIndex(Contact *contacts, int index) const;

	public:
		void DisplayAll(Contact *contacts, int count) const;
};

#endif