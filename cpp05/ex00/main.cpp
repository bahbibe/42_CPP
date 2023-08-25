#include "Bureaucrat.hpp"

int main()
{
    std::cout << BOLD << "Invalid Bureaucrat" << RESET << std::endl;
    try
    {
        Bureaucrat b3("b3",160);
        std::cout << b3;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        Bureaucrat b4("b4", 151);
        std::cout << b4;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << BOLD << "Too High Bureaucrat 🚬" << RESET << std::endl;
    try
    {
        Bureaucrat b1("b1", 1);
        std::cout << b1;
        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << BOLD << "Too Low Bureaucrat 🥲" << RESET << std::endl;
    try
    {
        Bureaucrat b2("b2", 150);
        std::cout << b2;
        b2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
