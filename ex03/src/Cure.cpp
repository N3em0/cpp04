#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
  std::cout << "Cure default constructor called." << std::endl;
}

// Cure::Cure(std::string const &type) : type(type)
// {
//   std::cout << "Cure with type parameter called." << std::endl;
// }

Cure::Cure(Cure const &src) : AMateria(src)
{
  std::cout << "Cure copy constructor called." << std::endl;
}

Cure::~Cure() { std::cout << "Cure destructor called." << std::endl; }

Cure &Cure::operator=(const Cure &rhs)
{
  if (this != &rhs)
    this->type = rhs.type;
  return (*this);
}

AMateria *Cure::clone()
{
  AMateria *clone = new Cure();
  return clone;
}

void Cure::use(ICharacter &target)
{
  (void)target;
  std::cout << "* heals no one's wounds *" << std::endl;
  // to do
  return;
}
