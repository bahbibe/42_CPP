#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie is created" << std::endl;
};

Zombie::~Zombie()
{
	std::cout << "Zombie Has been destroyed" << std::endl;
};

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName(std::string name)
{
	this->_name = name;
};
