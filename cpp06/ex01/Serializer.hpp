#pragma once
#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1;37m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"

class Serializer
{
    private:

        Serializer();
        ~Serializer();
        Serializer(Serializer const& src);
        Serializer& operator=(Serializer const& rhs);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
