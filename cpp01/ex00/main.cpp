#include "Zombie.hpp"

int main()
{
	randomChump("Rick Grimes");
	Zombie* z = newZombie("Carl Grimes");
	z->announce();

	delete z;
	return 0;
}
