#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat" DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat" DESCTRUCTOR << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat" PARAMETER << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy._type)
{
	std::cout << "Cat" COPY << std::endl;
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
	std::cout << BOLD "Cat Meow" RESET << std::endl;
}