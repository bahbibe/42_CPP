#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materia[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &copy);
    MateriaSource &operator=(MateriaSource const &op);
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

