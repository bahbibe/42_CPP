#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main_subject()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

int my_main()
{
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  Character *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  // me->equip(tmp);
  // me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  AMateria *s = me->save(1);
  me->unequip(1);
  me->equip(s);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
  return (0);
}

int main()
{
  main_subject();
  // my_main();
}
