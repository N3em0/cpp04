#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private :
  std::string _name;
  AMateria *_inventory[4];
public :
  Character();
  Character(Character const &src);
  Character(std::string const &name);
  ~Character();

  Character &operator=(Character const &rhs);

  AMateria const *getInvMateria(size_t i) const;
  virtual std::string const &getName() const;
  virtual void equip(AMateria *m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter &target);

  static AMateria *voidBank[100]; //static
};

#endif
