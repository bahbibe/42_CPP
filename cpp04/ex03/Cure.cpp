#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &copy)
{
    this->_type = copy._type;
}

Cure &Cure::operator=(Cure const &other)
{
    this->_type = other._type ;
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" <<  std::endl;
}