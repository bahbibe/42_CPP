#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

float customStof(const std::string &str)
{
    const char *cstr = str.c_str();
    char *endPtr;
    double result = strtod(cstr, &endPtr);
    if (endPtr == cstr)
        throw std::invalid_argument("Impossible");
    if (*endPtr)
    {
        if (*endPtr == 'f')
        {
            ++endPtr;
            if (!*endPtr)
                return static_cast<float>(result);
        }
        throw std::invalid_argument("Impossible");
    }
    return static_cast<float>(result);
}

int main()
{
    std::string floatString = " 3.14 "; // Add 'f' postfix to indicate float

    try
    {
        float floatValue = customStof(floatString);
        std::cout << "Converted value: " << floatValue << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
