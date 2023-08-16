#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const std::string &type);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &other);
	void makeSound() const;
};

