#include "PhoneBook.hpp"
#include <string>
#include <iostream>
void printColumn(const std::string s);
bool is_number(const std::string s);

PhoneBook::PhoneBook(void) {
	_index = 0;
}

int PhoneBook::addContact(void) {
	std::cout << "Wow, you want to ADD!\n";
	if (_contacts[_index].getContactInfos()) {
		std::cerr<< "\nSomething went wrong!\n";
		return (1);
	}
	std::cout << "Successfully added!\n";
	if (_index != 7)
		_index++;
	return (0);
}

void PhoneBook::printContactList(void) {
	int i;

	std::cout << std::endl;
	std::cout << " ";
	printColumn("index");
	std::cout << " ";
	printColumn("first name");
	std::cout << " ";
	printColumn("last name");
	std::cout << " ";
	printColumn("nick name");
	std::cout << " ";
	std::cout << std::endl;
	for (i = 0; i < 8; i++)
		_contacts[i].printContactEntry(i + 1);
}

int PhoneBook::printChosenContact(void) {
	std::string	userInput;

	while (true) {
		std::cout << "Enter a number between 1 and 8 :";
		if (!std::getline(std::cin, userInput))
		{
			std::cerr << "\nSomething went wrong!\n";
			return (1);
		}
		if (!(!is_number(userInput) || userInput.length() > 1 || \
			userInput[0] < '1' || userInput[0] > '8')) {
			_contacts[userInput[0] - '1'].printContact();
			return (0);
		}
	}
}
