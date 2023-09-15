#include "BitcoinExchange.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        if (argc == 2)
        {
            std::ifstream file(argv[1]);
            if (!file.is_open())
                throw std::ios_base::failure("failed to open input file");
            btc(file);
        }
        else
            throw std::invalid_argument("usage: ./btc [file]");
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
