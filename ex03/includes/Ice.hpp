#include "AMateria.hpp"
#include "ICharacter.hpp"

#ifndef ICE_HPP
#define ICE_HPP

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
