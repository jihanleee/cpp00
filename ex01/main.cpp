#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"



int main()
{
	PhoneBook	phone;
	Contact		haha;
	std::string	string;
	int			i;

	haha.print();
	phone.initPhoneBook();
	for (i = 0; i < 10; i++) {
		phone.addContact();
	}
	phone.print();
}
