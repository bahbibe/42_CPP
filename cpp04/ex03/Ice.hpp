#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    std::string _type;
public:
    Ice();
    ~Ice();
    Ice(Ice const& ice);
    Ice& operator=(Ice const& ice);
    AMateria* clone() const;
};

