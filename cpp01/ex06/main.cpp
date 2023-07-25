#include "Harl.hpp" 

int main(int ac, char **av)
{
    if (ac != 2 && std::cout << USAGE << std::endl)
        return (EXIT_FAILURE);
    std::string level = av[1];
    Harl h;
    h.complain(level);
    return (EXIT_SUCCESS);
}