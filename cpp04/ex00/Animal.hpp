#pragma once
#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1;37m"
#define ITALIC "\033[3m"
#define DEF RESET "Default Constructor called"
#define PARAM RESET "Parameterized Constructor called"
#define DEST RESET "Destructor called"
#define COPY RESET "Copy Constructor called"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const std::string &type);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &other);
	std::string getType() const;
	virtual void makeSound() const;
};
