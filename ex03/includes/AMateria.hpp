#include <iostream>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria
{
protected:
  //[...]
  const std::string type;

public:
  AMateria();
  AMateria(std::string const &type);
  virtual ~AMateria();
  //[...]

  AMateria &operator=(const AMateria &rhs);

  std::string const &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif
