#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Floor.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
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
  Floor::getInstance()->destroyInstance();
  return 0;
}

// int main()
// {
//   MateriaSource *src = new MateriaSource();
//   AMateria *spell = new Ice();
//   AMateria *spell2 = new Ice();
//   AMateria *spell3;
//
//   *spell2 = *spell;
//   spell3 = spell2;
//
//   IMateriaSource *src2 = new MateriaSource(*src);
//   src2->learnMateria(spell);
//   src2->learnMateria(spell2);
//   src2->learnMateria(spell3);
//   src->learnMateria(new Cure());
//   ICharacter *me = new Character("me");
//   AMateria *tmp;
//   tmp = src->createMateria("eci");
//   me->equip(tmp);
//   tmp = src->createMateria("ice");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   tmp = src2->createMateria("ice");
//   me->equip(tmp);
//   ICharacter *bob = new Character("bob");
//   me->use(0, *me);
//   me->use(1, *bob);
//   me->unequip(1);
//   me->equip(tmp);
//   me->use(2, *me);
//   Floor *floor = Floor::getInstance();
//   me->equip(floor->getFloorMateria(0));
//   delete bob;
//   delete me;
//   delete src;
//   delete src2;
// Floor::getInstance()->destroyInstance();
//   return 0;
// }

// int main()
// {
//   MateriaSource *src = new MateriaSource();
//   AMateria *spell = new Ice();
//   AMateria *spell2 = new Ice();
//   AMateria *spell3;
//
//   *spell2 = *spell;
//   spell3 = spell2;
//
//   IMateriaSource *src2 = new MateriaSource(*src);
//   src2->learnMateria(spell);
//   src2->learnMateria(spell2);
//   src2->learnMateria(spell3);
//   src->learnMateria(new Cure());
//   ICharacter *me = new Character("me");
//   AMateria *tmp;
//   tmp = src->createMateria("eci");
//   me->equip(tmp);
//   tmp = src->createMateria("ice");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   tmp = src2->createMateria("ice");
//   me->equip(tmp);
//   ICharacter *bob = new Character("bob");
//   me->use(0, *me);
//   me->use(1, *bob);
//   me->use(2, *bob);
//   me->use(3, *me);
//   me->unequip(1);
//   me->equip(tmp);
//   me->use(1, *me);
//   me->unequip(3);
//   me->equip(tmp);
//   me->use(3, *me);
//   delete bob;
//   delete me;
//   delete src;
//   delete src2;
//   Floor::getInstance()->destroyInstance();
//   return 0;
// }
// int main()
// {
//   IMateriaSource *src = new MateriaSource();
//   src->learnMateria(new Ice());
//   src->learnMateria(new Cure());
//   ICharacter *me = new Character("me");
//   ICharacter *bob = new Character("bob");
//   AMateria *tmp;
//   for (size_t i = 0; i < 15; i++)
//   {
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     // me->unequip(0);
//     bob->equip(tmp);
//     bob->use(i, *me);
//   }
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   me->unequip(0);
//   bob->equip(Floor::getInstance()->getFloorMateria(0));
//   tmp = src->createMateria("cure");
//   bob->equip(tmp);
//   bob->unequip(1);
//   bob->use(0, *me);
//   me->use(0, *bob);
//   me->use(1, *bob);
//   me->use(2, *bob);
//   delete bob;
//   delete me;
//   delete src;
//   Floor::getInstance()->destroyInstance();
//   return 0;
// }
