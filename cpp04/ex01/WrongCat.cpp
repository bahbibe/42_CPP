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

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << WRONG_CAT COPY << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << WRONG_CAT " Meow" << std::endl;
}


