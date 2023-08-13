#include "Dog.hpp"
#include "Cat.hpp"

int main2()
{
	const Animal *meta = new Animal();
	const Animal *meta2 = new Animal("Animal");
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete meta2;
	delete j;
	delete i;
	return 0;
}

int main()
{
	main2();
	std::cout << "______________________________" << std::endl;
	system("leaks Animal | grep total");
	return 0;
}
