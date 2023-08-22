#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Wrong Cat" DEFAULT << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat" DESCTRUCTOR << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    std::cout << "Wrong Cat" PARAMETER << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy._type)
{
    std::cout << "Wrong Cat" COPY << std::endl;
    this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat Moooo" << std::endl;
}
