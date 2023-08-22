#pragma once 
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
    Cure();
    ~Cure();
    Cure(Cure const& cure);
    Cure& operator=(Cure const& cure);
    AMateria* clone() const;
    void use(ICharacter &target);

};


