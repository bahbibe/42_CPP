#pragma once
#include <iostream>
#include "ClapTrap.hpp"
#define DEFSCAV YELLOW "ScavTrap Default Constructor called" RESET
#define PARAMSCAV YELLOW "ScavTrap Parameterized Constructor called" RESET
#define DESTSCAV YELLOW "ScavTrap Destructor called" RESET
#define COPYSCAV YELLOW "ScavTrap Copy Constructor called" RESET

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap& other);
	void attack(const std::string &target);
	void guardGate();
};
