#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
  this->type = "Cat";
  std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
  *this = src;
  std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string Cat::getType() const
{
  return (this->type);
}

void Cat::makeSound() const
{
  std::cout << this->type << " does Meow." << std::endl;
}
