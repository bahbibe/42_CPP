#pragma once
#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define DEFSCAV GREEN "ScavTrap Default Constructor called" RESET
#define PARAMSCAV GREEN "ScavTrap Parameterized Constructor called" RESET
#define DESTSCAV GREEN "ScavTrap Destructor called" RESET
class ScavTrap
{
private:
	/* data */
public:
	ScavTrap(/* args */);
	~ScavTrap();
};


