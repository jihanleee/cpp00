#include "PhoneBook.hpp"

void PhoneBook::initPhoneBook () {
	index = 0;
}

void PhoneBook::addContact(void) {
	std::cin >> contacts[index].firstName;
	std::cin >> contacts[index].lastName;
	std::cin >> contacts[index].nickName;
	std::cin >> contacts[index].phoneNumber;
	std::cin >> contacts[index].darkestSecret;
	if (index != 7)
		index++;
}

void PhoneBook::print(void) {
	int i;
	i = 0;
	while (i <= index)
		contacts[i++].print();
}
