#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:
	Dog();
	~Dog();
	Dog(const std::string &type, Brain *brain);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	void makeSound() const;
};