#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("b1", 150);
        std::cout << bureaucrat << std::endl;
        Form form("f1", 1, 1);
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // std::cout << std::endl;
}
