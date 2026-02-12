
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
public:
  Cure();
  Cure(Cure const &src);
  ~Cure();

  Cure &operator=(const Cure &rhs);

  virtual AMateria *clone() const; // Trying with different return type than parent
  virtual void use(ICharacter &target);
};

#endif
