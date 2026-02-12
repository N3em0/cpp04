
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class AMateria;
class Materia;

class MateriaSource : public IMateriaSource
{
private :
  AMateria *_MateriaTemplates[4];
  int _oldest;
public :
  MateriaSource();
  MateriaSource(MateriaSource const &src);
  ~MateriaSource();

  MateriaSource &operator=(MateriaSource const &rhs);

  AMateria const *getMateriaTemplate(size_t i) const;
  virtual void learnMateria(AMateria *Materia);
  virtual AMateria *createMateria(std::string const &type);
};

#endif
