#pragma once
#include "FragTrap.hpp"
#define DEFDIAMOND MAGENTA "ClapTrap Default Constructor called" RESET
#define PARAMDIAMOND MAGENTA "ClapTrap Parameterized Constructor called" RESET
#define DESTDIAMOND MAGENTA "ClapTrap Destructor called" RESET
#define COPYDIAMOND MAGENTA "ClapTrap Copy Constructor called" RESET

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap &operator=(const DiamondTrap &other);
	void whoAmI();
};
