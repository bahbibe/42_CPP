#include "Dog.hpp"
#include "Cat.hpp"
#include <stdlib.h>


int main()
{
	Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			animals[i] = new Dog("Dog", new Brain());
			animals[i]->makeSound();
		}
		else
		{
			animals[i] = new Cat("Cat", new Brain());
			animals[i]->makeSound();
		}
	}
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return (0);
}
