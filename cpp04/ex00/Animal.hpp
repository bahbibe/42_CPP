#pragma once
#include "Macros.hpp"

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	virtual ~Animal();
	Animal(const std::string &type);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &other);
	std::string getType() const;
	virtual void makeSound() const;
};
