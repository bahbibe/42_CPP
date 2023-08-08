#include "ScavTrap.hpp"
int main( void )
{
	ScavTrap b;
	ScavTrap a("bob");
	a.attack("you");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	a.takeDamage(10);
	a.takeDamage(10);
	a.guardGate();
	return 0;
}
