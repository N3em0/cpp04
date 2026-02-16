#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
  MateriaSource *src = new MateriaSource();
  AMateria *spell = new Ice();
  AMateria *spell2 = new Ice();
  AMateria *spell3;

  *spell2 = *spell;
  spell3 = spell2;

  IMateriaSource *src2 = new MateriaSource(*src);
  src2->learnMateria(spell);
  src2->learnMateria(spell2);
  src2->learnMateria(spell3);
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("eci");
  me->equip(tmp);
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  tmp = src2->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *me);
  me->use(1, *bob);
  me->use(2, *bob);
  me->use(3, *me);
  tmp = src->createMateria("ice");
  me->equip(tmp);
  // me->unequip(3);
  me->use(3, *me);
  me->unequip(3);
  me->equip(tmp);
  me->use(0, *me);
  Character::deleteVoidBank();
  delete bob;
  delete me;
  delete src;
  delete src2;
  return 0;
}

// int main()
// {
//   IMateriaSource* src = new MateriaSource();
//   AMateria* spell = new Ice();
//   src->learnMateria(new Ice());
//   MateriaSource* srcCast = dynamic_cast<MateriaSource*>(src);
//   for (size_t i = 0; i < 4; i++)
//   {
//     std::cout << i << " : " << srcCast->getMateriaTemplate(i) << std::endl;
//   }
//   src->learnMateria(new Cure());
//   src->learnMateria(spell);
//   src->learnMateria(NULL);
//   src->learnMateria(new Cure());
//   srcCast = dynamic_cast<MateriaSource*>(src);
//   for (size_t i = 0; i < 4; i++)
//   {
//     std::cout << i << " : " << srcCast->getMateriaTemplate(i) << std::endl;
//   }
//   src->learnMateria(new Cure());
//   src->learnMateria(new Ice());
//   srcCast = dynamic_cast<MateriaSource*>(src);
//   for (size_t i = 0; i < 4; i++)
//   {
//     std::cout << i << " : " << srcCast->getMateriaTemplate(i) << std::endl;
//   }
//   // ICharacter* me = new Character("me");
//   AMateria* tmp;
//   tmp = src->createMateria("ice");
//   std::cout << tmp << std::endl;
//   delete tmp;
//   // me->equip(tmp);
//   tmp = src->createMateria("cure");
//   std::cout << tmp << std::endl;
//   delete tmp;
//   tmp = src->createMateria("cee");
//   std::cout << tmp << std::endl;
//   delete tmp;
//   // me->equip(tmp);
//   // ICharacter* bob = new Character("bob");
//   // me->use(0, *bob);
//   // me->use(1, *bob);
//   // delete bob;
//   // delete me;
//   delete src;
//   return 0;
// }
