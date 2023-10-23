#include "Contact.hpp"

void printColumn(const std::string s) {
	int len;
	int i;
	len = s.length();
	if (len > 10) {
		for (i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".";
		return ;
	}
	for (i = 0; i < 10 - len; i++)
		std::cout << " ";
	std::cout << s;
}

void Contact::printContactEntry(int index) {
	std::cout << "|";
	std::cout << "         ";
	std::cout << index;
	std::cout << "|";
	printColumn(firstName);
	std::cout << "|";
	printColumn(lastName);
	std::cout << "|";
	printColumn(nickName);
	std::cout << "|";
	std::cout << std::endl;
}

void Contact::printContact(void) {
	std::cout << "Firstname: ";
	std::cout << firstName << std::endl;
	std::cout << "Lastname: ";
	std::cout << lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << nickName << std::endl;
	std::cout << "Phonenumber: ";
	std::cout << phoneNumber << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << darkestSecret << std::endl;
}

bool is_number(const std::string s) {
	int	i;

	for (i = 0 ; s[i]; i++) {
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}

int Contact::getContactInfos() {
	std::cout << "What is the " << "firstname ?: ";
	if (!std::getline(std::cin, firstName))
		return (1);
	std::cout << "What is the " << "lastname ?: ";
	if (!std::getline(std::cin, lastName))
		return (1);
	std::cout << "What is the " << "nickname ?: ";
	if (!std::getline(std::cin, nickName))
		return (1);
	std::cout << "What is the " << "phonenumber ?: ";
	while (true) {
		if (!std::getline(std::cin, phoneNumber))
			return (1);
		if (!is_number(phoneNumber))
			std::cout << "Enter only numbers with no blanks: ";
		else
			break ;
	}
	std::cout << "What is the " << "darkest secret ?: ";
	if (!std::getline(std::cin, darkestSecret))
		return (1);
	return (0);
}
