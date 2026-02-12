#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
private:
public:
  Ice();
  Ice(Ice const &src);
  ~Ice();

  Ice &operator=(const Ice &rhs);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};

#endif
