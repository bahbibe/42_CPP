#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << DOG DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << DOG DESCTRUCTOR << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << DOG PARAMETER << std::endl;
	//! this->_type = type;
}

Dog::Dog(const Dog &copy) : Animal(copy._type)
{
	std::cout << DOG COPY << std::endl;
	this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << DOG " Woof" << std::endl;
}