#pragma once 

#include "Macros.hpp"

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &other);
	std::string getType() const;
	void makeSound() const;
};
