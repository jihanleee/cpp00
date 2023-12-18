#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	printInitialMessage(void) {
	std::cout << "Welcome to Contact manager!\n\n";
	std::cout << "ADD: adds a contact to the phonebook!\n";
	std::cout << "SEARCH: searches the contacts stored in the phonebook!\n";
	std::cout << "EXIT: exits the program!\n";
	std::cout << "\nEnter what you want to execute! : ";
}

int main() {
	PhoneBook	phoneBook;
	std::string	userInput;

	printInitialMessage();
	while (true) {
		if (!std::getline(std::cin, userInput))
			return (1);
		if (userInput.compare("ADD") == 0) {
			if (phoneBook.addContact() == 1)
				return (1);
		}
		else if (userInput.compare("SEARCH") == 0) {
			std::cout << "Wow, you want to SEARCH!\n";
			phoneBook.printContactList();
			if (phoneBook.printChosenContact() == 1)
				return (1);
		}
		else if (userInput.compare("EXIT") == 0) {
			std::cout << "Wow, you want to EXIT! Bye! \U0001F63F \n" ;
			return (0);
		}
		else
			std::cout << userInput << "? what do you mean??";
		std::cout << "\nEnter what you want to execute. : ";
	}
}
