#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
  std::cout << "Ice default constructor called." << std::endl;
}

// Ice::Ice(std::string const &type) : type(type)
// {
//   std::cout << "Ice with type parameter called." << std::endl;
// }

Ice::Ice(Ice const &src) : AMateria(src)
{
  std::cout << "Ice copy constructor called." << std::endl;
}

Ice::~Ice() { std::cout << "Ice destructor called." << std::endl; }

Ice &Ice::operator=(const Ice &rhs)
{
  if (this != &rhs)
    this->type = rhs.type;
  return (*this);
}

AMateria *Ice::clone()
{
  AMateria *clone = new Ice();
  return clone;
}

void Ice::use(ICharacter &target)
{
  (void)target;
  std::cout << "* shoots an ice bolt at no one ftm *" << std::endl;
  // to do
  return;
}
