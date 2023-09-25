#include "RPN.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        if (argc == 1)
            throw std::runtime_error("Usage: ./RPN [expression]");
        std::string input = "";
        for (int i = 1; i < argc; i++)
            input += argv[i];
        rpn(input);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
