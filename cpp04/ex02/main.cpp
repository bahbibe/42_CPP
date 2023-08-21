#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//! AAnimal animals;
	//! AAnimal *animal = new AAnimal();
	//! delete animal;
	//! const AAnimal *meta = new AAnimal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	// delete meta;
	delete j;
	delete i;
	return (0);
}
