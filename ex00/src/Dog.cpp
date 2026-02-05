#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
  this->type = "Dog";
  std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
  *this = src;
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string Dog::getType() const
{
  return (this->type);
}

void Dog::makeSound() const
{
  std::cout << this->type << " does Bark." << std::endl;
}
