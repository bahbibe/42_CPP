#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat" DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat" DESCTRUCTOR << std::endl;
	delete this->_brain;
}

Cat::Cat(const std::string &type, Brain *brain) : Animal(type) , _brain(brain)
{
	std::cout << "Cat" PARAMETER << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy._type), _brain(new Brain(*copy._brain))
{
	std::cout << "Cat" COPY << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << BOLD "Cat Meow" RESET << std::endl;
}
