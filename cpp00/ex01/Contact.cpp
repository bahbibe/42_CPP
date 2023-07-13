#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

void Contact::setFirstName()
{
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW << "Enter First Name :" << RESET;
		std::getline(std::cin, this->_firstName);
	} while (this->_firstName.empty());
};

void Contact::setLastName()
{
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW << "Enter Last Name :" << RESET;
		std::getline(std::cin, this->_lastName);
	} while (this->_lastName.empty());
};

void Contact::setNickname()
{
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW << "Enter Nickname :" << RESET;
		std::getline(std::cin, this->_nickname);
	} while (this->_nickname.empty());
};

void Contact::setDarkestSecret()
{
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW << "Enter Darkest Secret :" << RESET;
		std::getline(std::cin, this->_darkestSecret);
	} while (this->_darkestSecret.empty());
};

void Contact::setPhoneNumber()
{
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW  << "Enter Phone Number :" << RESET;
		std::getline(std::cin, this->_phoneNumber);
		for (size_t i = 0; i < this->_phoneNumber.length(); i++)
		{
			if (!isdigit(this->_phoneNumber[i]))
			{
				std::cout << RED << "Phone Number must be digits" << RESET <<  std::endl;
				this->_phoneNumber.clear();
				break;
			}
		}
	} while (this->_phoneNumber.empty());
};

void Contact::setIndex(int i)
{
	this->_index = i + 1;
};

std::string Contact::getFirstName()
{
	return this->_firstName;
};

std::string Contact::trim(std::string str)
{
	std::string output;
	if (str.length() > 10)
		output = str.substr(0, 9) + ".";
	else
		output = str;
	return output;
};

void Contact::displayContact()
{
	std::cout << std::setw(10) << this->_index << "|"
			  << std::setw(10) << trim(this->_firstName) << "|"
			  << std::setw(10) << trim(this->_lastName) << "|"
			  << std::setw(10) << trim(this->_nickname) << std::endl;
};

void Contact::displayDetails()
{
	std::cout << DETAILS << std::endl;
	std::cout << YELLOW << "First Name     : " << RESET << this->_firstName << std::endl;
	std::cout << YELLOW << "Last Name      : " << RESET << this->_lastName << std::endl;
	std::cout << YELLOW << "Nickname       : " << RESET << this->_nickname << std::endl;
	std::cout << YELLOW << "Phone Number   : " << RESET << this->_phoneNumber << std::endl;
	std::cout << YELLOW << "Darkest Secret : " << RESET << this->_darkestSecret << std::endl;
};