#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    (this->isSigned() == false) ? throw AForm::SignedException() : 0;
    (this->getSignGrade() < executor.getGrade() || this->getExecGrade() < executor.getGrade())
        ? throw AForm::GradeTooLowException()
        : 0;
    std::cout << "Drilling noises ..." << std::endl;
    std::srand((std::time(0)));
    (std::rand() % 2) ? std::cout << BOLD << this->_target << RESET GREEN " has been robotomized successfully." RESET << std::endl
                      : std::cout << BOLD << this->_target << RESET RED " robotomization failed." RESET << std::endl;
}
