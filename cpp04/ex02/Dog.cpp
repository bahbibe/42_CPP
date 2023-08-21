#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << DOG DEFAULT << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << DOG DESCTRUCTOR << std::endl;
	delete this->_brain;
}

Dog::Dog(const std::string &type) : AAnimal(type), _brain(new Brain())
{
	std::cout << DOG PARAMETER << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy._type)
{
	std::cout << DOG COPY << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << DOG " Woof" << std::endl;
}