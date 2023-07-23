#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_weapon = 0 ;
    this->_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (!this->_weapon)
        std::cout << this->_name << " attacks with their no weapon" << std::endl;
    else 
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon ;
}