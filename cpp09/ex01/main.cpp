#include "RPN.hpp"

int main(int argc, char const *argv[])
{
    std::string input = std::string(argv[1]);
    try
    {
        if (argc != 2)
            throw std::invalid_argument("usage: ./rpn [input]");
        rpn(input);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
