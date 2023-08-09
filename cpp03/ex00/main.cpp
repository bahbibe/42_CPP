#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("Clap");
	ClapTrap clap2(clap);
	ClapTrap clap3("Clap3");
	clap3 = clap2;
	clap.attack("Enemy");
	clap.takeDamage(10);
	clap.beRepaired(10);
	return 0;
}
