#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];

public:
	PhoneBook();
	~PhoneBook();
	void menu();
	// void display();
	void addContact();
	void searchContact();
};
