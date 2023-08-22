#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &copy) //! may need amateria 
{
    this->_type = copy._type;
}

Ice &Ice::operator=(Ice const &other)
{
    this->_type = other._type ;
    return (*this);
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}


void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}