#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
    (void) copy;
}

Intern &Intern::operator=(const Intern &other)
{
    (void) other;
    return *this;
}

AForm *Intern::makeForm(const std::string formName, const std::string target)
{
    std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm *forms[3] = {new RobotomyRequestForm(target),
                       new PresidentialPardonForm(target),
                       new ShrubberyCreationForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << GREEN "Intern creates " RESET << formName << std::endl;
            for (int j = 0; j < 3; j++)
                if (j != i)
                    delete forms[j];
            return forms[i];
        }
    }
    for (int i = 0; i < 3; i++)
        delete forms[i];
    std::cout << RED "Intern can't create " RESET << formName << std::endl;
    return NULL;
}
