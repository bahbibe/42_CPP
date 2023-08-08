#include "ClapTrap.hpp"

int main( void )
{


	ClapTrap b;
	ClapTrap a("bob");
	a.attack("you");
	b.attack("you");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	a.takeDamage(10);
	a.takeDamage(10); 
	
	return 0;
}
