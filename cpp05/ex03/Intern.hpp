#pragma once 
#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
public:
    Intern();
    ~Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &other);
    AForm *makeForm(const std::string formName, const std::string target);
};

