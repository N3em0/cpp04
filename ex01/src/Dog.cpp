#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain)
{
  this->type = "Dog";
  std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src), _brain(src._brain ? new Brain(src._brain) : NULL)
{
  this->type = src.type;
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
  delete this->_brain;
  std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
  if (this != &rhs)
  {
    delete this->_brain;
    if (rhs._brain)
      this->_brain = new Brain(*rhs._brain);
    else
      this->_brain = NULL;
    this->type = rhs.type;
  }
  return (*this);
}

std::string Dog::getType() const
{
  return (this->type);
}

Brain *Dog::getBrain() const
{
  return (this->_brain);
}

void Dog::makeSound() const
{
  std::cout << this->type << " does Bark." << std::endl;
}
