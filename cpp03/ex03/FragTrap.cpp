#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Random";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << DEFFRAG << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << PARAMFRAG << std::endl;
}

FragTrap::~FragTrap() { std::cout << DESTFRAG << std::endl; }

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey there! Can I get a high five? 🖐️" << std::endl;
}