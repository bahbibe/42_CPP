#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N && N > 0; i++)
	{
		horde[i].setName(name);
	}
	return horde;
};