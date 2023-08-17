#pragma once

#include <iostream>
#include "Macros.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &other);
    ~Brain();
};