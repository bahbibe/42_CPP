#include "BitcoinExchange.hpp"


int main(int argc, char const *argv[])
{
    try
    {
        if (argc != 2)
            throw std::invalid_argument("Error: could not open file");
        std::ifstream file(argv[1]);
        if (!file.is_open())
            throw std::invalid_argument("Error: could not open file");
        btc(file);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
