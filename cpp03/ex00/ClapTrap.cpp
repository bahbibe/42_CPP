#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << DEFCONST << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << PARAMCONST << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << DESTRUCT << std::endl;}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints && this->_energyPoints--)
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	else 
		std::cout << YELLOW << "low energy/hit points !!!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints)
	{
		std::cout << "ClapTrap "<< this->_name << " took " << amount << " damage " << std::endl;
		this->_hitPoints -= amount ;
	}
	else
		std::cout << YELLOW << "ClapTrap " << this->_name << " is already dead !!!" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints--)
	{
		std::cout << "ClapTrap " << this->_name << " restored " << amount << " hit points" << std::endl;
		this->_hitPoints += amount ;
	}
	else 
		std::cout << YELLOW << "low energy" << RESET << std::endl;
}