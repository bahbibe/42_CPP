#pragma once
#include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	~Dog();
	Dog(const std::string &type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	void makeSound() const;
};