#pragma once 
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
	Brain* _brain;
public:
	Cat();
	~Cat();
	Cat(const std::string &type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &other);
	void makeSound() const;
};