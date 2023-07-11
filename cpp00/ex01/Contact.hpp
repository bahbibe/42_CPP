#pragma once

#include <iostream>
#include <iomanip>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

class Contact
{
private:
	int 		_index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	Contact();
	~Contact();
	void setIndex(int index);
	void setFirstName();
	void setLastName();
	void setNickname();
	void setPhoneNumber();
	void setDarkestSecret();
};