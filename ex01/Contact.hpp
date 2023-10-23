#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact {
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	public:
		int getContactInfos(void);
		void printContact(void);
		void printContactEntry(int index);
};

#endif
