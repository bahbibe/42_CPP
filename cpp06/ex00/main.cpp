#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    ScalarConverter::convert(std::string(argv[1]));
    return 0;
}
