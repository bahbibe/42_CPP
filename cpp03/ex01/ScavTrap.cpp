#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Random";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << DEFSCAV << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << PARAMSCAV << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << DESTSCAV << std::endl;}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints && this->_energyPoints--)
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "low energy/hit points !!!" << std::endl;
}