#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    (this->isSigned() == false) ? throw AForm::SignedException() : 0;
    (this->getSignGrade() < executor.getGrade() || this->getExecGrade() < executor.getGrade())
        ? throw AForm::GradeTooLowException()
        : 0;
    std::cout << BOLD << this->_target << RESET YELLOW " has been pardoned by Zafod Beeblebrox." RESET << std::endl;
}