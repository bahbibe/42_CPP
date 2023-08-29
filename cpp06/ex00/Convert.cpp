#include "ScalarConverter.hpp"

std::string getDouble(std::string &input)
{
    std::stringstream ss(input);
    double d;
    if (input == "nan" || input == "nanf")
        return std::string("double: nan");
    if (input == "+inf" || input == "+inff")
        return std::string("double: +inf");
    if (input == "-inf" || input == "-inff")
        return std::string("double: -inf");
    ss >> d;
    if (ss.get() != EOF)
        return std::string("double: impossible");
    ss.clear();
    ss << std::fixed << std::setprecision(1) << d;
    return std::string("double: ") + ss.str();
}

std::string getFloat(std::string &input)
{
    std::stringstream ss(input);
    float f;
    if (input == "nan" || input == "nanf")
        return std::string("float: nanf");
    if (input == "+inf" || input == "+inff")
        return std::string("float: +inff");
    if (input == "-inf" || input == "-inff")
        return std::string("float: -inff");
    ss >> f;
    if (ss.get() == 'f' && ss.get() == EOF)
    {
        ss.clear();
        ss << std::fixed << std::setprecision(1) << f;
        return std::string("float: ") + ss.str() + "f";
    }
    return std::string("float: impossible");
}

std::string getInt(std::string &input)
{
    std::stringstream ss(input);
    int i;
    ss >> i;
    if (ss.get() != EOF)
        return std::string("int: impossible");
    ss.clear();
    ss << i;
    return std::string("int: ") + ss.str();
}

std::string getChar(std::string &input)
{
    if (input.length() == 1 && !isdigit(input[0]))
    {
        char c = input[0];
        if (isprint(c))
            return std::string("char: '") + c + "'";
        return std::string("char: Non displayable");
    }
    return std::string("char: impossible");
}

void ScalarConverter::convert(std::string &input)
{
    char c;
    int i;
    float f;
    double d;
    //? Check if input is a char
    if (input.length() == 1 && !isdigit(input[0]))
    {
        c = input[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
        if (isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    }
    //? Check if input is a int , float or double
    else
    {

        std::stringstream ss(input);
        ss >> f;
        char c;
        ss >> c;

        // else
        // {
        //     f = static_cast<float>(f);
        //     (f == HUGE_VALF)    ? std::cout << "float: inff" << std::endl
        //     : (f == -HUGE_VALF) ? std::cout << "float: -inff" << std::endl
        //                         : 0;
        //     std ::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        //     ss.clear();
        //     ss.str(input);
        //     ss >> f;
        //     d = static_cast<double>(f);
        //     i = static_cast<int>(f);
        //     std ::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        //     std ::cout << "int: " << i << std::endl;
        // }
    }
}
