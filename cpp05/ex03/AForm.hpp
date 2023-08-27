#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    const int _signGrade;
    const int _execGrade;
    bool _signed;

public:
    AForm();
    virtual ~AForm();
    AForm(const std::string name, int signGrade, int execGrade);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &other);
    const std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool isSigned() const;
    void beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const = 0;
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
    class SignedException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, const AForm &form);