#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
};

PhoneBook::~PhoneBook(){
};

void PhoneBook::menu(){
	std::cout << std::endl;
	std::cout << CYAN <<"=============== Enter a Commande ===============" << RESET << std::endl;
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
	i++;
};

void PhoneBook::searchContact()
{
	// int 		i;
	std::string input;
	std::cout << std::setw(10) << "Index" << std::setw(10) << "First Name" << std::setw(10) << "Last Name" << std::setw(10) << "Nickname";
	std::
// 	do
// 	{
// 		std::cout << "Enter Index :";
// 		std::getline(std::cin, input);
// 		i = std::stoi(input);
// 	} while ();
// };
};