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

void Contact::printContactEntry(int _index) {
	std::cout << "|";
	std::cout << "         ";
	std::cout << _index;
	std::cout << "|";
	printColumn(_firstName);
	std::cout << "|";
	printColumn(_lastName);
	std::cout << "|";
	printColumn(_nickName);
	std::cout << "|";
	std::cout << std::endl;
}

void Contact::printContact(void) {
	std::cout << "First name: ";
	std::cout << _firstName << std::endl;
	std::cout << "Last name: ";
	std::cout << _lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << _nickName << std::endl;
	std::cout << "Phone number: ";
	std::cout << _phoneNumber << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << _darkestSecret << std::endl;
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
	std::cout << "What is the " << "First name ?: ";
	while (1) {
		if (!std::getline(std::cin, _firstName))
			return (1);
		if (_firstName.compare(""))
			break ;
		else
			std::cout << "The field can't be empty: ";
	}
	std::cout << "What is the " << "Last name ?: ";
	while (1) {
		if (!std::getline(std::cin, _lastName))
			return (1);
		if (_lastName.compare(""))
			break ;
		else
			std::cout << "The field can't be empty: ";
	}
	std::cout << "What is the " << "Nick name ?: ";
	while (1) {
		if (!std::getline(std::cin, _nickName))
			return (1);
		if (_nickName.compare(""))
			break ;
		else
			std::cout << "The field can't be empty: ";
	}
	std::cout << "What is the " << "Phone number ?: ";
	while (true) {
		if (!std::getline(std::cin, _phoneNumber))
			return (1);
		if (!is_number(_phoneNumber)) {
			std::cout << "Enter only numbers with no blanks: ";
			continue;
		}
		if (_phoneNumber.compare(""))
			break;
		else
			std::cout << "The field can't be empty: ";
	}
	std::cout << "What is the " << "Darkest secret ?: ";
	while (1) {
		if (!std::getline(std::cin, _darkestSecret))
			return (1);
		if (_darkestSecret.compare(""))
			break ;
		else
			std::cout << "The field can't be empty: ";
	}
	return (0);
}
