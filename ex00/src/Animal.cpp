#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
  std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const &src) : type(src.type)
{
  std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string Animal::getType() const
{
  return (this->type);
}

void Animal::makeSound() const
{
  std::cout << this->type << " does generic Animal sound." << std::endl;
}
