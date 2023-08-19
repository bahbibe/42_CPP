#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << WRONG DEFAULT << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << WRONG DESCTRUCTOR << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    std::cout << WRONG PARAMETER << std::endl;
    this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << WRONG COPY << std::endl;
    this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << WRONG " Makes Sound" << std::endl;
}
