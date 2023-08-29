#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <sstream>
#include <cstdio>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &copy);
    ScalarConverter &operator=(ScalarConverter const &other);
    ~ScalarConverter();
public:
    static void convert(std::string &input);
};