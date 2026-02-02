
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Cat() : Animal(), type("Cat")
{
  std::cout << "Dog default constructor called." << std::endl;
}

Dog::Cat(Cat const &src) : Animal(src))
{
  *this = src;
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Cat()
{
  std::cout << "Dog destructor called" << std::endl;
}

Dog &Cat::operator=(Cat const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs->type;
  }
  return (*this);
}

void Dog::makeSound()
{
  std::cout << this->type << " does Bark." << std::endl;
}
