#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain" DEFAULT << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain" DESCTRUCTOR << std::endl;
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "Brain" PARAMETER << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[i];
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain" COPY << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return (*this);
}
