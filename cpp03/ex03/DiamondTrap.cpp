#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "Random";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_energyPoints = 50;
	std::cout << DEFDIAMOND << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_energyPoints = 50;
	std::cout << PARAMDIAMOND << std::endl;
}
DiamondTrap::~DiamondTrap() { std::cout << DESTDIAMOND << std::endl; }

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << COPYDIAMOND << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << BOLD ITALIC << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap energy points: " << this->_energyPoints << std::endl;
	std::cout << "DiamondTrap attack damage: " << this->_attackDamage << std::endl;
	std::cout << "DiamondTrap hit points: " << this->_hitPoints << RESET <<  std::endl;

}