#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("Default")
{
  // std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
  // std::cout << "AMateria with type parameter called." << std::endl;
}

AMateria::AMateria(AMateria const &src) : type(src.type)
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
    this->type = rhs.type;
  return (*this);
}

std::string const &AMateria::getType() const { return (this->type); }
