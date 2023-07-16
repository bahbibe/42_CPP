#include "Zombie.hpp"

int main()
{
	//!this is a zombie allocation on the stack

	Zombie randomChump("Rick grimes");

	//!this is a zombie allocation on the heap
	Zombie zombie;
	Zombie *createdZombie = zombie.newZombie("Bob");
	createdZombie->announce();
	delete createdZombie;
	return 0;
}
