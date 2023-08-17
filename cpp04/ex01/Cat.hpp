#pragma once 
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const std::string &type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &other);
	void makeSound() const;
};