#ifndef CONTACT_MANAGER_H
# define CONTACT_MANAGER_H

#include "Contact.hpp"

class ContactManager
{
	private :
		int writePos;
	public:
		Contact contacts[8];
		int contactCount;
	
		ContactManager();
		~ContactManager();
		void AddContact(void);
};

#endif


