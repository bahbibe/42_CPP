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
#define DEFCLAP GREEN "ClapTrap Default Constructor called" RESET
#define PARAMCLAP GREEN "ClapTrap Parameterized Constructor called" RESET
#define DESTCLAP GREEN "ClapTrap Destructor called" RESET
class ClapTrap
{
protected:
	std::string _name ;
	int _hitPoints ;
	int _energyPoints ;
	int _attackDamage ;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
