#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4];

public:
    Character();
    ~Character();
    Character(std::string const &name);
    Character(Character const &copy);
    Character &operator=(Character const &other);
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    std::string const &getName() const;
    AMateria *save(int idx);
};
