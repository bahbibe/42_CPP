#include "Data.hpp"

Data::Data()
{
}

Data::Data(std::string s1, int n, std::string s2) : s1(s1), n(n), s2(s2)
{
}

Data::~Data()
{
}

Data::Data(Data const& copy)
{
    *this = copy;
}

Data& Data::operator=(Data const& other)
{
    if (this != &other)
    {
        this->s1 = other.s1;
        this->n = other.n;
        this->s2 = other.s2;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, Data const& data)
{
    os << "Data: { s1: " << data.s1 << ", n: " << data.n << ", s2: " << data.s2 << " }";
    return os;
}