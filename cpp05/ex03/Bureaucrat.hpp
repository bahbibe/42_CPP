#pragma once
#include <iostream>
#include "AForm.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1;37m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"
#define DEFAULT GREEN " default constructor" RESET
#define DESCTRUCTOR RED " desctructor" RESET
#define COPY CYAN " copy constructor" RESET
#define PARAMETER YELLOW " parameter constructor" RESET

class AForm;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &other);
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form) const ;
    void executeForm(AForm const & form) const ;

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);