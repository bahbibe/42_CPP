#include "Animal.hpp"

Animal::Animal()
{
	std::cout << BOLD "Animal" DEFAULT << std::endl;
}

Animal::~Animal()
{
	std::cout << BOLD "Animal" DESCTRUCTOR << std::endl;
}

Animal::Animal(const std::string &type)
{
	std::cout << BOLD "Animal" PARAMETER << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &copy)
{
	std::cout << BOLD "Animal" COPY << std::endl;
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
	std::cout << BOLD "Animal Makes Sound" RESET << std::endl;
}

std::string const &Animal::getType() const
{
	return (this->_type);
}
