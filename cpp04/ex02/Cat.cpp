#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat" DEFAULT << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat" DESCTRUCTOR << std::endl;
	delete this->_brain;
}

Cat::Cat(const std::string &type) : AAnimal(type), _brain(new Brain()) 
{
	std::cout << "Cat" PARAMETER << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy._type)
{
	std::cout << "Cat" COPY << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << BOLD "Cat Meow" RESET << std::endl;
}