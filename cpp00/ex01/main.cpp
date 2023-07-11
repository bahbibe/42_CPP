#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	book;
	std::string command ;
	while (1)
	{
		book.menu();
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
		{
			book.searchContact();
			// book.display();
			//
		}
	}
	
	
	return 0;
}
