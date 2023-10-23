#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook(void);
		int addContact(void);
		void printContactList(void);
		int printChosenContact(void);
};

#endif
