#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal" DEFAULT << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal" DESCTRUCTOR << std::endl;
}

AAnimal::AAnimal(const std::string &type)
{
	std::cout << "AAnimal" PARAMETER << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal" COPY << std::endl;
	this->_type = copy._type;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << BOLD "AAnimal" RESET << std::endl;
}

std::string const &AAnimal::getType() const
{
	return (this->_type);
}