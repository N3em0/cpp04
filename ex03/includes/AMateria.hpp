#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
private:
  bool _equipped;

protected:
  std::string type;

public:
  AMateria();
  AMateria(std::string const &type);
  AMateria(AMateria const &src);
  virtual ~AMateria();

  AMateria &operator=(AMateria const &rhs);

  bool getEquipped() const;
  void setEquipped(bool status);
  std::string const &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target) = 0;
};

#endif
