#include "WrongCat.hpp"
#include "WrongAAnimal.hpp"

WrongCat::WrongCat() : WrongAAnimal(), _brain(new Brain)
{
  this->type = "WrongCat";
  this->_brain->sharedptr = 1;
  std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAAnimal(src)
{
  this->_brain = src._brain;
  if (this->_brain)
    this->_brain->sharedptr++;
  this->type = src.type;
  std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
  if (this->_brain)
  {
    this->_brain->sharedptr--;
    if (this->_brain->sharedptr <= 0)
      delete this->_brain;
  }
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
  if (this != &rhs)
  {
    if (this->_brain)
    {
      this->_brain->sharedptr--;
      if (this->_brain->sharedptr <= 0)
        delete this->_brain;
    }
    this->_brain = rhs._brain;
    if (this->_brain)
      this->_brain->sharedptr++;
    this->type = rhs.type;
  }
  return (*this);
}

std::string WrongCat::getType() const { return (this->type); }

Brain *WrongCat::getBrain() const { return (this->_brain); }

void WrongCat::makeSound() const
{
  std::cout << this->type << " does Meow." << std::endl;
}
