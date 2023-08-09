#include "FragTrap.hpp"
int main( void )
{
	FragTrap frag("Frag");
	FragTrap frag2(frag);
	FragTrap frag3("Frag3");
	frag3 = frag2;
	frag.attack("Enemy");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();
	return 0;
}
