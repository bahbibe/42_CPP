#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << DEBUG << std::endl;
}

void Harl::info(void)
{
    std::cout << INFO << std::endl;
}

void Harl::warning(void)
{
    std::cout << WARNING << std::endl;
}

void Harl::error(void)
{
    std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level)
{
    int i = -1;
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (++i < 4 && level != levels[i]);
    (i < 4) ? (this->*ptr[i])() : (void)0;
}
