#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public AAnimal
{
private:
  Brain *_brain;

public:
  Dog();
  Dog(Dog const &src);
  ~Dog();

  Dog &operator=(Dog const &rhs);

  std::string getType(void) const;
  Brain *getBrain(void) const;

  void makeSound() const;
};

#endif
