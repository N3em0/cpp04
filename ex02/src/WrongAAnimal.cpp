#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() : type("WrongAAnimal")
{
  std::cout << "WrongAAnimal default constructor called." << std::endl;
}

WrongAAnimal::WrongAAnimal(WrongAAnimal const &src) : type(src.type)
{
  std::cout << "WrongAAnimal copy constructor called." << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
  std::cout << "WrongAAnimal destructor called" << std::endl;
}

WrongAAnimal &WrongAAnimal::operator=(WrongAAnimal const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string WrongAAnimal::getType() const { return (this->type); }

void WrongAAnimal::makeSound() const
{
  std::cout << this->type << " does generic WrongAAnimal sound." << std::endl;
}
