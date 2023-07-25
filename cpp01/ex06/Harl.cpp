#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{

    std::cout << DEBUG << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << INFO << std::endl << std::endl;;
}

void Harl::warning(void)
{
    std::cout << WARNING << std::endl << std::endl;;
}

void Harl::error(void)
{
    std::cout << ERROR << std::endl << std::endl;;
}

void Harl::complain(std::string level)
{
    int i = -1;
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (++i < 4 && level != levels[i]);
    switch (i)
    {
    case 0:
        (this->*ptr[0])();
    case 1:
        (this->*ptr[1])();
    case 2:
        (this->*ptr[2])();
    case 3:
        (this->*ptr[3])();
        break;
    default:
        std::cout << DEFLT <<  std::endl;
        break;
    }
}
