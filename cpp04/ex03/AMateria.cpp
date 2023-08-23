#include "AMateria.hpp"

AMateria::~AMateria()
{
}

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &copy)
{
    (void) copy;
}


AMateria &AMateria::operator=(AMateria const &other)
{
    (void) other;
    return *this;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void) target;
}
