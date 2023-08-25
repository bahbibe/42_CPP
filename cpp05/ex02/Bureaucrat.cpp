#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    (this->_grade < 1)     ? throw Bureaucrat::GradeTooHighException()
    : (this->_grade > 150) ? throw Bureaucrat::GradeTooLowException()
                           : void();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->_grade = other._grade;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    (--this->_grade < 1) ? throw Bureaucrat::GradeTooHighException() : void();
}

void Bureaucrat::decrementGrade()
{
    (++this->_grade > 150) ? throw Bureaucrat::GradeTooLowException() : void();
}

void Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << BOLD << this->getName() << RESET GREEN " signed " RESET << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << BOLD << this->getName() << RESET RED " couldn’t sign " RESET
                  << BOLD << form.getName() << RESET " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << BOLD << this->getName() << RESET GREEN " executed " RESET << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << BOLD << this->getName() << RESET RED " couldn’t execute " RESET
                  << BOLD << form.getName() << RESET " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << BOLD << bureaucrat.getName() << RESET << ": bureaucrat grade "
        << GREEN << bureaucrat.getGrade() << RESET << std::endl;
    return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return RED " Grade Too High !!!" RESET;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return RED " Grade Too Low !!!" RESET;
}
