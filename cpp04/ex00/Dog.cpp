#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { std::cout << RED << "Dog " << DEF << std::endl; }
Dog::Dog(const std::string &type) : Animal(type) { std::cout << RED << "Dog " << PARAM << std::endl; }
Dog::~Dog() { std::cout << RED << "Dog " << DEST << std::endl; }
Dog::Dog(const Dog &copy) 
{ 
	std::cout << RED <<"Dog " << COPY << std::endl; 
	*this = copy;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}
void Dog::makeSound() const { std::cout << "Woof" << std::endl; }