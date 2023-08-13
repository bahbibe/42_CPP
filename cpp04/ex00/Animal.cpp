#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal " << DEF << std::endl; }
Animal::~Animal() { std::cout << "Animal " << DEST << std::endl; }
Animal::Animal(const std::string &type) : type(type) { std::cout << "Animal "<< PARAM << std::endl; }
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal " << COPY << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound() const { std::cout << "Animal makes a sound" << std::endl; }
std::string Animal::getType() const { return (this->type); }