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
}
Cat::Cat(const Cat &copy)
{
	std::cout << CAT COPY << std::endl;
	*this = copy;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << CAT " Meow" << std::endl;
}