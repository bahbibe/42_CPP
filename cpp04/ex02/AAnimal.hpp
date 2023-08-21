#pragma once
#include "Macros.hpp"

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(const std::string &type);
	AAnimal(const AAnimal &copy);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &other);
	std::string const & getType() const;
	virtual void makeSound() const = 0;
};
