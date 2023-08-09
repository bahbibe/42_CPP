#pragma once
#include <iostream>
#include "ScavTrap.hpp"
#define DEFFRAG CYAN "FragTrap Default Constructor called" RESET
#define PARAMFRAG CYAN "FragTrap Parameterized Constructor called" RESET
#define DESTFRAG CYAN "FragTrap Destructor called" RESET
#define COPYFRAG CYAN "FragTrap Copy Constructor called" RESET

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap& other);
	void highFivesGuys( void );
};

