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
    {
        if(this->_inventory[i])
        {
            delete this->_inventory[i];
            for(int j = i+1;j < 4 ; j++)
            {
                if(_inventory[i] == _inventory[j])
                    _inventory[j] = 0;
            }
        }
        
    }
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
    return *this;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}

AMateria *Character::save(int idx)
{
    return this->_inventory[idx];
}