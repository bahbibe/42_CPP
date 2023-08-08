#pragma once
#include <iostream>
#include "ClapTrap.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define DEFSCAV YELLOW "ScavTrap Default Constructor called" RESET
#define PARAMSCAV YELLOW "ScavTrap Parameterized Constructor called" RESET
#define DESTSCAV YELLOW "ScavTrap Destructor called" RESET

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap& other);
	void guardGate();
};
