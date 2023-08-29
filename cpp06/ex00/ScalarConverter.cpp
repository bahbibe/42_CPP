#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    return;
}

ScalarConverter::~ScalarConverter()
{
    return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    (void)copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
    (void)other;
    return (*this);
}

void ScalarConverter::convert(std::string input)
{
    std::stringstream ss(input);
    double d;
    if (input.length() == 1 && !isdigit(input[0]))
        std::cout << "char: '" << input[0] << "'" << std::endl
                  << "int: " << static_cast<int>(input[0]) << std::endl
                  << "float: " << std::fixed << std::setprecision(1)
                  << static_cast<float>(input[0]) << "f" << std::endl
                  << "double: " << static_cast<double>(input[0]) << std::endl;
    else if (input == "nan" || input == "nanf")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: nanf" << std::endl
                  << "double: nan" << std::endl;
    else if (input == "+inf" || input == "+inff")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: +inff" << std::endl
                  << "double: +inf" << std::endl;
    else if (input == "-inf" || input == "-inff")
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: -inff" << std::endl
                  << "double: -inf" << std::endl;
    else
    {
        ss >> d;
        if (ss.get() == 'f' && ss.get() != EOF)
            std::cout << "char: impossible" << std::endl
                      << "int: impossible" << std::endl
                      << "float: impossible" << std::endl
                      << "double: impossible" << std::endl;
        else
        {
            if (d >= 32 && d <= 126)
                std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            if (d >= INT_MIN && d <= INT_MAX)
                std::cout << "int: " << static_cast<int>(d) << std::endl;
            else
                std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << std::fixed << std::setprecision(1)
                      << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(d) << std::endl;
        }
    }
}
