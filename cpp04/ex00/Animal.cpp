#include "Animal.hpp"

Animal::Animal()
{
	std::cout << ANIMAL DEFAULT << std::endl;
}

Animal::~Animal()
{
	std::cout << ANIMAL DESCTRUCTOR << std::endl;
}

Animal::Animal(const std::string &type)
{
	std::cout << ANIMAL PARAMETER << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &copy)
{
	std::cout << ANIMAL COPY << std::endl;
	this->_type = copy._type;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << ANIMAL " Makes Sound" << std::endl;
}

std::string const &Animal::getType() const
{
	return (this->_type);
}