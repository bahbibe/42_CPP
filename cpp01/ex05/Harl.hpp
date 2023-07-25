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
#define DEBUG "This is a" YELLOW " DEBUG" RESET " message"
#define INFO "This is an" CYAN " INFO" RESET " message"
#define WARNING "This is a" MAGENTA " WARNING" RESET " message"
#define ERROR "This is an" RED " ERROR" RESET " message"

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
