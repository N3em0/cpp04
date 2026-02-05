#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
  this->type = "WrongCat";
  std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
  *this = src;
  std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string WrongCat::getType() const
{
  return (this->type);
}

void WrongCat::makeSound() const
{
  std::cout << this->type << " does Meow." << std::endl;
}
