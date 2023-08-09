#include "ScavTrap.hpp"
int main( void )
{
	ScavTrap scav("Scav");
	ScavTrap scav2(scav);
	ScavTrap scav3("Scav3");
	scav3 = scav2;
	scav.attack("Enemy");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();
	return 0;
}
