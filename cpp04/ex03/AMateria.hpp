#pragma once
#include "Macros.hpp"
#include "ICharacter.hpp"
class AMateria
{
protected:
     std::string _type;
public : 
    AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &copy);
    virtual ~AMateria();
    AMateria &operator=(AMateria const &other);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};