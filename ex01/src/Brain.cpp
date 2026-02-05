#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain() : sharedptr(0)
{
  for (size_t i = 0; i < 100; i++)
  {
    this->ideas[i] = "I wanna eat ..";  
  }
  std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const &src)
{
  if (this != &src)
  {
    for (size_t i = 0; i < 100; i++)
      this->ideas[i] = src.ideas[i];
  }
  std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain()
{
  std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
  if (this != &rhs)
  {
    for (size_t i = 0; i < 100; i++)
      this->ideas[i] = rhs.ideas[i];
  }
  return (*this);
}
