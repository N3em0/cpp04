#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource
{
public :
  MateriaSource();
  MateriaSource(MateriaSource const &src);
  ~MateriaSource();

  MateriaSource &operator=(Materiasource const &rhs);

  AMateria MateriaTemplates[4];

  virtual void learnMateria(AMateria *Materia);
  virtual AMateria *createMateria(std::string const &type);
}
