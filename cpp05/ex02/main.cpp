#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << MAGENTA "--------- ShrubberyCreationForm ---------" RESET << std::endl;
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 1);
        ShrubberyCreationForm form("home");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << CYAN "--------- RobotomyRequestForm ---------" RESET << std::endl;
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 1);
        RobotomyRequestForm form("home");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << RED "--------- PresidentialPardonForm ---------" RESET << std::endl;
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 1);
        PresidentialPardonForm form("home");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;

}
