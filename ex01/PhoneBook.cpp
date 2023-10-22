#include "PhoneBook.hpp"

void PhoneBook::initPhoneBook () {
	index = 0;
}

void PhoneBook::addContact(void) {

	if (index != 7)
		index++;
}

void PhoneBook::print(void) {
	int i;
	i = 0;
	while (i <= index)
		contacts[i++].print();
}
