#include "AForm.hpp"

AForm::AForm()
    : _name("default"), _signGrade(150), _execGrade(150), _signed(false)
{
}

AForm::~AForm()
{
}

AForm::AForm(const std::string name, int signGrade, int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
    (this->_signGrade < 1)     ? throw AForm::GradeTooHighException()
    : (this->_signGrade > 150) ? throw AForm::GradeTooLowException()
                               : void();
    (this->_execGrade < 1)     ? throw AForm::GradeTooHighException()
    : (this->_execGrade > 150) ? throw AForm::GradeTooLowException()
                               : void();
}

AForm::AForm(const AForm &copy)
    : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade), _signed(copy._signed)
{
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        this->_signed = other._signed;
    return *this;
}

const std::string AForm::getName() const
{
    return this->_name;
}

int AForm::getSignGrade() const
{
    return this->_signGrade;
}

int AForm::getExecGrade() const
{
    return this->_execGrade;
}

bool AForm::isSigned() const
{
    return this->_signed;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    (bureaucrat.getGrade() > this->_signGrade) ? throw AForm::GradeTooLowException()
                                               : this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form " BOLD << form.getName() << RESET " is "
        << (form.isSigned() ? GREEN "signed" : RED "not signed") << RESET << std::endl;
    out << "Sign grade: " << form.getSignGrade() << std::endl;
    out << "Exec grade: " << form.getExecGrade() << std::endl;
    return out;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return RED " Grade Too High !!!" RESET;
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return RED " Grade Too Low !!!" RESET;
}

const char *AForm::SignedException::what() const throw()
{
    return RED " Form is not signed !!!" RESET;
}