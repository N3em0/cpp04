#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _equipped(false), type("Default")
{
  // std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : _equipped(false), type(type)
{
  // std::cout << "AMateria with type parameter called." << std::endl;
}

AMateria::AMateria(AMateria const &src)
    : _equipped(src._equipped), type(src.type)
{
  // std::cout << "AMateria copy constructo called." << std::endl;
}

AMateria::~AMateria()
{
  // std::cout << "AMateria destructor called." << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
  if (this != &rhs)
  {
    this->_equipped = rhs._equipped;
    this->type = rhs.type;
  }
  return (*this);
}

std::string const &AMateria::getType() const { return (this->type); }

bool AMateria::getEquipped() const { return (this->_equipped); }

void AMateria::setEquipped(bool status)
{
  if (this->_equipped == status)
    return;
  this->_equipped = status;
  return;
}
