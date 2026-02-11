#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat() : AAnimal(), _brain(new Brain)
{
  this->type = "Cat";
  std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &src)
    : AAnimal(src), _brain(src._brain ? new Brain(*src._brain) : NULL)
{
  // this->type = src.type;
  std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
  delete this->_brain;
  std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
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

std::string Cat::getType() const { return (this->type); }

Brain *Cat::getBrain() const { return (this->_brain); }

void Cat::makeSound() const
{
  std::cout << this->type << " does Meow." << std::endl;
}
