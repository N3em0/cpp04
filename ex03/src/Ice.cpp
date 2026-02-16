#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
  // std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
  // std::cout << "Ice copy constructor called." << std::endl;
}

Ice::~Ice()
{
  // std::cout << "Ice destructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
  if (this != &rhs)
    AMateria::operator=(rhs);
  return (*this);
}

AMateria *Ice::clone() const
{
  AMateria *clone = new Ice();
  return (clone);
}

void Ice::use(ICharacter &target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
  return;
}
