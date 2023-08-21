#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << ANIMAL DEFAULT << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << ANIMAL DESCTRUCTOR << std::endl;
}

AAnimal::AAnimal(const std::string &type)
{
	std::cout << ANIMAL PARAMETER << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << ANIMAL COPY << std::endl;
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
	std::cout << ANIMAL " Makes Sound" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}