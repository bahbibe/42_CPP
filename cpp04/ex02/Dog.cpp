#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog" DEFAULT << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog" DESCTRUCTOR << std::endl;
	delete this->_brain;
}

Dog::Dog(const std::string &type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "Dog" PARAMETER << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy._type)
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
		*this->_brain = *other._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << BOLD "Dog Woof" RESET << std::endl;
}