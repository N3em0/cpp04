#include "Floor.hpp"
#include "AMateria.hpp"

Floor *Floor::_instance = NULL;

Floor::Floor() : _floor(), _oldest(0) {}

Floor::Floor(Floor const &src) : _floor(), _oldest(0) { (void)src; }

Floor::~Floor()
{
  for (size_t i = 0; i < 10; i++)
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
  (void)rhs;
  return (*this);
}

AMateria *Floor::getFloorMateria(size_t i) const
{
  if (i >= 0 && i < 10)
    return (this->_floor[i]);
  return (NULL);
}

bool Floor::dropMateria(AMateria *m)
{
  if (m == NULL)
    return (false);
  for (size_t i = 0; i < 10; i++)
  {
    if (this->_floor[i] == NULL)
    {
      this->_floor[i] = m;
      return (true);
    }
  }
  if (this->_oldest >= 10)
    this->_oldest = 0;
  delete this->_floor[this->_oldest];
  this->_floor[this->_oldest] = m;
  this->_oldest++;
  return (true);
}

void Floor::equipFloorMateria(AMateria *m)
{
  if (m == NULL)
    return;
  for (size_t i = 0; i < 10; i++)
  {
    if (this->_floor[i] == m)
    {
      this->_floor[i] = NULL;
      return;
    }
  }
  return;
}

Floor *Floor::getInstance()
{
  if (_instance == NULL)
    _instance = new Floor();
  return _instance;
}

void Floor::destroyInstance() { delete _instance; }
