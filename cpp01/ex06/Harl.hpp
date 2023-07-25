#pragma once
#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define DEBUG YELLOW "[ DEBUG ]\n" RESET "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO CYAN "[ INFO ]\n" RESET "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING MAGENTA "[ WARNING ]\n" RESET " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR RED "[ ERROR ]\n" RESET "This is unacceptable! I want to speak to the manager now."
#define DEFLT "[ Probably complaining about insignificant problem ]"
#define USAGE "Usage:" GREEN "./harlFilter " YELLOW "[LEVEL]" RESET


class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl();
    ~Harl();
    void complain(std::string level);
};
