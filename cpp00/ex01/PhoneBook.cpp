#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

PhoneBook::~PhoneBook(){};

void PhoneBook::menu()
{
	std::cout << std::endl;
	std::cout << CYAN << "=============== Enter a Commande ===============" << RESET << std::endl;
	std::cout << GREEN << "ADD    " << RESET ": Add a new contact" << std::endl;
	std::cout << YELLOW << "SEARCH " << RESET ": Search for a contact" << std::endl;
	std::cout << RED << "EXIT   " << RESET ": Quit my phonebook" << std::endl;
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
	std::cout << std::setw(10) << "Index "
			  << std::setw(10) << "First Name"
			  << std::setw(10) << "Last Name"
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
		std::cout << "Enter an index :";
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			i = index[0] - '0';
			if (this->_contacts[i].getFirstName().empty())
				std::cout << "Index not found" << std::endl;
			else
				this->_contacts[i].displayDetails();
		}
		else
			std::cout << "Invalid index" << std::endl;
	} while (index.length() != 1 || index[0] < '0' || index[0] > '7');
	// std::cout << "Enter an index :";
	// std::getline(std::cin, index);
	// if (std::cin.eof())
	// 	return;
	// if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	// {
	// 	int i = index[0] - '0';
	// 	if (this->_contacts[i].getFirstName().empty())
	// 		std::cout << "Index not found" << std::endl;
	// 	else
	// 		this->_contacts[i].displayContact();
	// }
	// else
	// 	std::cout << "Invalid index" << std::endl;
};