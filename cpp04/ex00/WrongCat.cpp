#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << WRONG_CAT DEFAULT << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << WRONG_CAT DESCTRUCTOR << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    std::cout << WRONG_CAT PARAMETER << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy._type)
{
    std::cout << WRONG_CAT COPY << std::endl;
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
    std::cout << WRONG_CAT " Moooo" << std::endl;
}
