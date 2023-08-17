#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const std::string &type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	void makeSound() const;
};