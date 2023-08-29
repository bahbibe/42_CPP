#pragma once
#include <iostream>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cstdio>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &copy);
    ScalarConverter &operator=(ScalarConverter const &other);
    ~ScalarConverter();
public:
    static void convert(std::string input);
};