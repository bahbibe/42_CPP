#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = 0;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._materia[i])
            this->_materia[i] = copy._materia[i]->clone();
        else
            this->_materia[i] = 0;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete this->_materia[i];
        this->_materia[i] = other._materia[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i]->getType() == type)
            return this->_materia[i];

    }
    return 0;
}