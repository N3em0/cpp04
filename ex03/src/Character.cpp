#include "Character.hpp"
#include "AMateria.hpp"

AMateria *Character::voidBank[100] = {};

Character::Character() : _name("Default"), _inventory()
{
  // std::cout << "Character default constructor called." << std::endl;
}

Character::Character(Character const &src) : _name(src._name)
{
  if (this != &src)
  {
    for (size_t i = 0; i < 4; i++)
    {
      if (this->_inventory[i])
        delete this->_inventory[i];
      if (src._inventory[i])
        this->_inventory[i] = src._inventory[i]->clone();
      else
         this->_inventory[i] = NULL;
    }
  }
  // std::cout << "Character copy constructor called." << std::endl;
}

Character::Character(std::string const &name) : _name(name), _inventory()
{
  // std::cout << "Character constructor with name parameter called." << std::endl;
}

Character::~Character()
{
  for (size_t i = 0; i < 4; i++)
  {
    if (this->_inventory[i])
    {
      delete this->_inventory[i];
      this->_inventory[i] = 0;
    }
  }
  for (size_t i = 0; i < 100; i++)
  {
    if (Character::voidBank[i] != NULL)
      delete Character::voidBank[i];
  }
  // std::cout << "Character destructor called." << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
  // if (&rhs)
  // {
    if (this != &rhs)
    {
      this->_name = rhs._name;
      for (size_t i = 0; i < 4; i++)
      {
        if (this->_inventory[i])
          delete this->_inventory[i];
        if (rhs._inventory[i])
          this->_inventory[i] = rhs._inventory[i]->clone();
        else
          this->_inventory[i] = NULL;
      }
    }
  // }
  return (*this);
}

AMateria const *Character::getInvMateria(size_t i) const
{
  if (i >= 0 && i < 4)
    return (this->_inventory[i]);
  else
    return (NULL);
}

std::string const &Character::getName() const
{
  return (this->_name);
}

void Character::equip(AMateria *m)
{
  if (m == NULL)
  {
    std::cout << "Wrong Materia type or empty Materia : " << &m->getType() << std::endl;
    return ;
  }
  for (size_t i = 0; i < 4; i++)
  {
    if (this->_inventory[i] == m)
    {
       std::cout << "Materia already equiped" << std::endl;
      return ;
    }
    if (this->_inventory[i] == NULL)
    {
      this->_inventory[i] = m;
      for (size_t i = 0; i < 100; i++)
      {
        if (m == Character::voidBank[i])
          Character::voidBank[i] = NULL;
      }
      return ;
    }
  }
  delete m;
  std::cout << "Inventory is full" << std::endl;
  return ;
}

void Character::unequip(int idx)
{
  if (this->_inventory[idx] != NULL)
  {
    for (size_t i = 0; i < 100; i++)
    {
      if (Character::voidBank[i] == NULL)
      {
        Character::voidBank[i] = this->_inventory[idx];
        this->_inventory[idx] = NULL;
      }
    }
    std::cout << "voidBank is full" << std::endl;
    return ;
  }
}

void Character::use(int idx, ICharacter &target)
{
  if (this->_inventory[idx] != NULL)
  {
    this->_inventory[idx]->use(target);
    return ;
  }
  std::cout << "Trying to use an empty slot" << std::endl;
}
