#include "AMateria.hpp"
#include "ICharacter.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class Cure : public AMateria
{
public:
  Cure();
  Cure(Cure const &src);
  ~Cure();

  Cure &operator=(const Cure &rhs);

  virtual AMateria *clone(); // Trying with different return type than parent
  virtual void use(ICharacter &target);
};

#endif
