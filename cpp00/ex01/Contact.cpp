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

void Contact::setPhoneNumber(){
	do
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter Phone Number :";
		std::getline(std::cin, this->_phoneNumber);
	} while (this->_phoneNumber.empty());
};

void Contact::setIndex(int i){
	this->_index = i + 1;
};

std::string Contact::getFirstName(){
	return this->_firstName;
};

std::string trim (std::string str){
	std::string output;
	if (str.length() > 10)
		output = str.substr(0, 9) + ".";
	else
		output = str;
	return output;
};

void Contact::displayContact(){
	std::cout << std::setw(10) << this->_index << "|"
			  << std::setw(10) << trim(this->_firstName) << "|"
			  << std::setw(10) << trim(this->_lastName) << "|"
			  << std::setw(10) << trim(this->_nickname) << "|"
			  << std::endl;
};

void Contact::displayDetails(){
	std::cout << "First Name : " << this->_firstName << std::endl;
	std::cout << "Last Name : " << this->_lastName << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
};