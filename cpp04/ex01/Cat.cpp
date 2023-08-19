#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << CAT DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << CAT DESCTRUCTOR << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << CAT PARAMETER << std::endl;
	//! this->_type = type;
}

Cat::Cat(const Cat &copy) : Animal(copy._type)
{
	std::cout << CAT COPY << std::endl;
	this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << CAT " Meow" << std::endl;
}