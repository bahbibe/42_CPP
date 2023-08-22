#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog" DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog" DESCTRUCTOR << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog" PARAMETER << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy._type)
{
	std::cout << "Dog" COPY << std::endl;
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
	std::cout << BOLD "Dog Woof" RESET << std::endl;
}
