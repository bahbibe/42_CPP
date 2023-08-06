#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("Random"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << DEFSCAV << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << PARAMSCAV << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << DESTSCAV << std::endl;}