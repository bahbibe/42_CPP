#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    const int _signGrade;
    const int _execGrade;
    bool _signed;

public:
    Form();
    ~Form();
    Form(const std::string name, int signGrade, int execGrade);
    Form(const Form &copy);
    Form &operator=(const Form &other);
    const std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool isSigned() const;
    void beSigned(const Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, const Form &form);