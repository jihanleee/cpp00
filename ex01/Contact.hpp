#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact {
	public:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		void print(void);
};

#endif
