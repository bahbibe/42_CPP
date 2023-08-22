#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character::Character(Character const &character)
{
    for (int i = 0; i < 4; i++)
    {
        if (character._inventory[i])
            this->_inventory[i] = character._inventory[i]->clone();
        else
            this->_inventory[i] = 0;
    }
}

Character &Character::operator=(Character const &character)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = character._inventory[i]->clone();
    }
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}
