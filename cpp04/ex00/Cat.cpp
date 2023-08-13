#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << YELLOW << "Cat " <<  DEF << std::endl; }
Cat::~Cat() { std::cout << YELLOW << "Cat " << DEST << std::endl; }
Cat::Cat(const std::string &type) : Animal(type) { std::cout << YELLOW << "Cat " << PARAM << std::endl; }
Cat::Cat(const Cat &copy) 
{ 
	std::cout << YELLOW << "Cat " << COPY << std::endl; 
	*this = copy;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }