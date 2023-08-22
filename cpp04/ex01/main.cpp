#include "Dog.hpp"
#include "Cat.hpp"

std::string to_string(int i)
{
	std::string s;
	if (i == 0)
		return ("0");
	while (i > 0)
	{
		s = (char)(i % 10 + '0') + s;
		i /= 10;
	}
	return (s);
}

int main()
{
	std::string ideas[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea" + to_string(i);
	Brain *brain = new Brain(ideas);
	Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			animals[i] = new Dog("Dog", brain);
			animals[i]->makeSound();
		}
		else
			animals[i]->makeSound();
	}
	delete brain;
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return (0);
}
