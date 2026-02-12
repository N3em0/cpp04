#include "MateriaSource.hpp"
#include "AMateria.hpp"

//Check if possible to init array in list init
MateriaSource::MateriaSource() : _MateriaTemplates(), _oldest(0)
{
  // std::cout << "MateriaSource default constructor called." << std::endl;
}

//Check if possible to init array in list init
MateriaSource::MateriaSource(MateriaSource const &src) : _oldest(0)
{
  if (this != &src)
  {
    for (size_t i = 0; i < 4; i++)
    {
      if (this->_MateriaTemplates[i])
        delete this->_MateriaTemplates[i];
      if (src._MateriaTemplates[i])
        this->_MateriaTemplates[i] = src._MateriaTemplates[i]->clone();
      else
         this->_MateriaTemplates[i] = NULL;
    }
  }

  // std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
  for (size_t i = 0; i < 4; i++)
  {
    if (this->_MateriaTemplates[i])
      delete this->_MateriaTemplates[i];
  }
  // std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
  // if (&rhs)
  // {
    if (this != &rhs)
    {
      for (size_t i = 0; i < 4; i++)
      {
        if (this->_MateriaTemplates[i])
          delete this->_MateriaTemplates[i];
        if (rhs._MateriaTemplates[i])
          this->_MateriaTemplates[i] = rhs._MateriaTemplates[i]->clone();
        else
          this->_MateriaTemplates[i] = NULL;
      }
    }
  // }
  return (*this);
}

AMateria const *MateriaSource::getMateriaTemplate(size_t i) const
{
  if (i >= 0 && i < 4)
    return (this->_MateriaTemplates[i]);
  else
    return (NULL);
}

void MateriaSource::learnMateria(AMateria *Materia)
{
  if (Materia == NULL)
    return ;
  for (size_t i = 0; i < 4; i++)
  {
    if (this->_MateriaTemplates[i] == Materia)
    {
      std::cout << "Materia already learned" << std::endl;
      return ;
    }
    if (this->_MateriaTemplates[i] == NULL)
    {
      this->_MateriaTemplates[i] = Materia;
      return ;
    }
  }
  if (this->_oldest == 4)
    this->_oldest = 0;
  delete this->_MateriaTemplates[this->_oldest];
  this->_MateriaTemplates[this->_oldest] = Materia;
  this->_oldest++;
  return ;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
  if (type == "cure")
  {
    for (size_t i = 0; i < 4; i++)
    {
      if (type == this->_MateriaTemplates[i]->getType())
        return (this->_MateriaTemplates[i]->clone());
    }
  }
  else if (type == "ice")
  {
    for (size_t i = 0; i < 4; i++)
    {
      if (type == this->_MateriaTemplates[i]->getType())
        return (this->_MateriaTemplates[i]->clone());
    }
  }
  std::cout << "Wrong Materia type : " << type << std::endl;
  return (NULL);
}
