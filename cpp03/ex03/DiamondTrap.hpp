#pragma once
#include "FragTrap.hpp"
#define DEFDIAMOND RED "DiamondTrap Default Constructor called" RESET
#define PARAMDIAMOND RED "DiamondTrap Parameterized Constructor called" RESET
#define DESTDIAMOND RED "DiamondTrap Destructor called" RESET
#define COPYDIAMOND RED "DiamondTrap Copy Constructor called" RESET

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
	void attack(const std::string &target);
	void whoAmI();
};
