#include "Contact.hpp"

void Contact::print(void) {
	std::cout << firstName << std::endl;
}
void Contact::getContactInfos(void) {
	std::cout << "firstname: ";
	std::cin >> firstName;
	std::cout << "lastname: ";
	std::cin >> lastName;
	std::cout << "nickname: ";
	std::cin >> nickName;
	std::cout << "phonenumber: ";
	std::cin >> phoneNumber;
	std::cout << "darkestsecret: ";
	std::cin >> darkestSecret;
}
