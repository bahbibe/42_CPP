#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << DOG DEFAULT << std::endl;
}
Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << DOG PARAMETER << std::endl;
}
Dog::~Dog()
{
	std::cout << DOG DESCTRUCTOR << std::endl;
}
Dog::Dog(const Dog &copy)
{
	std::cout << DOG COPY << std::endl;
	*this = copy;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << DOG " Woof" << std::endl;
}