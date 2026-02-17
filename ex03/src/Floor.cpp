#include "Floor.hpp"
#include "AMateria.hpp"

Floor::Floor() : _floor() {}

Floor::Floor(Floor const &src) : _floor()
{
  if (this != &src)
  {
    for (size_t i = 0; i < 100; i++)
    {
      if (this->_floor[i])
        delete this->_floor[i];
      if (src._floor[i])
        this->_floor[i] = src._floor[i]->clone();
      else
        this->_floor[i] = NULL;
    }
  }
}

Floor::~Floor()
{
  for (size_t i = 0; i < 100; i++)
  {
    if (this->_floor[i])
    {
      delete this->_floor[i];
      this->_floor[i] = NULL;
    }
  }
}

Floor &Floor::operator=(Floor const &rhs)
{
  if (this != &rhs)
  {
    for (size_t i = 0; i < 100; i++)
    {
      if (this->_floor[i])
        delete this->_floor[i];
      if (rhs._floor[i])
        this->_floor[i] = rhs._floor[i]->clone();
      else
        this->_floor[i] = NULL;
    }
  }
  return (*this);
}

AMateria const *Floor::getFloorMateria(size_t i) const
{
  if (i >= 0 && i < 100)
    return (this->_floor[i]);
  return (NULL);
}

bool Floor::dropMateria(AMateria *m)
{
  if (m == NULL)
    return (false);
  for (size_t i = 0; i < 100; i++)
  {
    if (this->_floor[i] == NULL)
    {
      this->_floor[i] = m;
      return (true);
    }
  }
  std::cout << "Can't unequip Materia. Floor is full" << std::endl;
  return (false);
}

void Floor::equipFloorMateria(AMateria *m)
{
  if (m == NULL)
    return;
  for (size_t i = 0; i < 100; i++)
  {
    if (this->_floor[i] == m)
    {
      this->_floor[i] = NULL;
      return;
    }
  }
  return;
}
