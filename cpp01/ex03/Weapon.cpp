#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(const std::string type)
{
    this->_type = type;
}
