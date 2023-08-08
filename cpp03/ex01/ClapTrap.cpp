#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << DEFCLAP << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << PARAMCLAP << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << DESTCLAP << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints && this->_energyPoints--)
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	else 
		std::cout << "low energy/hit points !!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints)
	{
		std::cout << "ClapTrap "<< this->_name << " took " << amount << " damage " << std::endl;
		this->_hitPoints -= amount ;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead !!!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints--)
	{
		std::cout << "ClapTrap " << this->_name << " restored " << amount << " hit points" << std::endl;
		this->_hitPoints += amount ;
	}
	else 
		std::cout << "low energy" << std::endl;
}