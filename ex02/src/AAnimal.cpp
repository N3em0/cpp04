#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
  std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) : type(src.type)
{
  std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl; }

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
  if (this != &rhs)
  {
    this->type = rhs.type;
  }
  return (*this);
}

std::string AAnimal::getType() const { return (this->type); }

void AAnimal::makeSound() const
{
  std::cout << this->type << " does generic AAnimal sound." << std::endl;
}
