#include "Animal.hpp"

Animal::Animal()
{
	std::cout << ANIMAL DEFAULT << std::endl;
}
Animal::~Animal()
{
	std::cout << ANIMAL DESCTRUCTOR << std::endl;
}
Animal::Animal(const std::string &type) : type(type)
{
	std::cout << ANIMAL PARAMETER << std::endl;
}
Animal::Animal(const Animal &copy)
{
	std::cout << ANIMAL COPY << std::endl;
	*this = copy;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}
void Animal::makeSound() const
{
	std::cout << ANIMAL " makeSound" << std::endl;
}
std::string Animal::getType() const
{
	return (this->type);
}