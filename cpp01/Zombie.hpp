#pragma once
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	void announce();
};


