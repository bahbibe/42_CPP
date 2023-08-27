#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), _target("default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

char const *ShrubberyCreationForm::FileException::what() const throw()
{
    return RED "FileException: couldn’t open file" RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    (this->isSigned() == false) ? throw AForm::SignedException() : 0;
    (this->getSignGrade() < executor.getGrade() || this->getExecGrade() < executor.getGrade())
        ? throw AForm::GradeTooLowException()
        : 0;
    std::ofstream file((this->_target + "_shrubbery").c_str());
    if (!file.is_open())
        throw ShrubberyCreationForm::FileException();
    file << "       _-_" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << " /~~         ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\\\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\\\" << std::endl;
    file.close();
}