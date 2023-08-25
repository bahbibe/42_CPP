#include "Form.hpp"

Form::Form() : _name("default"), _signGrade(150), _execGrade(150), _signed(false)
{
}

Form::~Form()
{
}

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
    (this->_signGrade < 1)     ? throw Form::GradeTooHighException()
    : (this->_signGrade > 150) ? throw Form::GradeTooLowException()
                               : void();
    (this->_execGrade < 1)     ? throw Form::GradeTooHighException()
    : (this->_execGrade > 150) ? throw Form::GradeTooLowException()
                               : void();
}

Form::Form(const Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade), _signed(copy._signed)
{
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
        this->_signed = other._signed;
    return *this;
}

const std::string Form::getName() const
{
    return this->_name;
}

int Form::getSignGrade() const
{
    return this->_signGrade;
}

int Form::getExecGrade() const
{
    return this->_execGrade;
}

bool Form::isSigned() const
{
    return this->_signed;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    (bureaucrat.getGrade() > this->_signGrade) ? throw Form::GradeTooLowException()
                                               : this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form " BOLD << form.getName() << RESET " is "
        << (form.isSigned() ? GREEN "signed" : RED "not signed") << RESET << std::endl;
    out << "Sign grade: " << form.getSignGrade() << std::endl;
    out << "Exec grade: " << form.getExecGrade() << std::endl;
    return out;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return RED " Grade Too High !!!" RESET;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return RED " Grade Too Low !!!" RESET;
}