#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

PhoneBook::~PhoneBook(){};

void PhoneBook::menu()
{
	std::cout << std::endl;
	std::cout << PROMPT << std::endl;
	std::cout << ADD << std::endl;
	std::cout << SEARCH << std::endl;
	std::cout << EXIT << std::endl;
};

void PhoneBook::addContact()
{
	static int i = 0;
	this->_contacts[i % 8].setIndex(i % 8);
	this->_contacts[i % 8].setFirstName();
	this->_contacts[i % 8].setLastName();
	this->_contacts[i % 8].setNickname();
	this->_contacts[i % 8].setDarkestSecret();
	this->_contacts[i % 8].setPhoneNumber();
	i++;
};

void PhoneBook::searchContact()
{
	int i;
	std::string index;
	std::cout << BANNER << std::endl;
	std::cout << std::setw(10) << "Index " << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname"
			  << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getFirstName().empty())
			break;
		this->_contacts[i].displayContact();
	}
	do
	{
		if (std::cin.eof())
			break;
		std::cout << YELLOW << "Enter an index :";
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			i = index[0] - '0';
			if (this->_contacts[i - 1].getFirstName().empty())
			{
				std::cout << RED << "Index not found" << std::endl;
			}
			else
				this->_contacts[i - 1].displayDetails();
		}
		else
			std::cout << RED << "Invalid index" << std::endl;
	} while (index.length() != 1 || index[0] < '1' || index[0] > '8');
};