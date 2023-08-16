#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main1()
{

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
	return 0;
}

int main2()
{
	const WrongAnimal *meta = new WrongAnimal();
	const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();
	// std::cout << meta->getType() << " " << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
}

int main()
{
	// std::cout << BLACK_BOLD  << "Animal Default constructor" << std::endl;
	main1();
	std::cout << "------------------------------" << std::endl;
	main2();
	return 0;
}
