#include "Harl.hpp" 

int main(int ac, char **av)
{
    if (ac != 2 && std::cout << USAGE << std::endl)
        return (1);
    std::string level = av[1];
    Harl h;
    h.complain(level);
    return (0);
}