#include "Contact.hpp"

Contact::Contact(){
};

Contact::~Contact(){
};

void Contact::setFirstName(){
	do
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter First Name :";
		std::getline(std::cin, this->_firstName);
	} while (this->_firstName.empty());
};

void Contact::setLastName(){
	do
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter Last Name :";
		std::getline(std::cin, this->_lastName);
	} while (this->_lastName.empty());
};

void Contact::setNickname(){
	do
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter Nickname :";
		std::getline(std::cin, this->_nickname);
	} while (this->_nickname.empty());
};

void Contact::setDarkestSecret(){
	do
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter Darkest Secret :";
		std::getline(std::cin, this->_darkestSecret);
	} while (this->_darkestSecret.empty());
};

void Contact::setIndex(int i){
	this->_index = i + 1;
};


