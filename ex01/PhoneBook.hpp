#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	public:
		Contact contacts[8];
		int		index;

		void initPhoneBook (void);
		void addContact(void);
		void print(void);
};

#endif
