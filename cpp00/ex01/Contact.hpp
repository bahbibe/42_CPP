#pragma once

#include <iostream>
#include <iomanip>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BANNER CYAN   "=================== MY AWESOME PHONEBOOK ===================" RESET
#define DETAILS CYAN  "=================== CONTACT DETEALS ===================" RESET
#define PROMPT CYAN   "=================== PLEASE ENTER A COMMAND ===================" RESET
#define INVALID RED   "Invalid command" RESET
#define ADD GREEN     "ADD" RESET "    : Add a new contact"
#define SEARCH YELLOW "SEARCH" RESET " : Search for a contact"
#define EXIT RED      "EXIT" RESET "   : Quit my phonebook"

class Contact
{
private:
	int _index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	Contact();
	~Contact();
	std::string trim(std::string str);
	std::string getFirstName();
	void setIndex(int index);
	void setFirstName();
	void setLastName();
	void setNickname();
	void setPhoneNumber();
	void setDarkestSecret();
	void displayContact();
	void displayDetails();
};