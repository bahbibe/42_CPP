#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog" DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog" DESCTRUCTOR << std::endl;
	delete this->_brain;
}

Dog::Dog(const std::string &type, Brain *brain) : Animal(type)
{
	std::cout << "Dog" PARAMETER << std::endl;
	this->_type = type;
	this->_brain = new Brain(*brain);
}

Dog::Dog(const Dog &copy) : Animal(copy._type)
{
	std::cout << "Dog" COPY << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << BOLD "Dog Woof" RESET << std::endl;
}
