#include <iostream>

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal
{
public:
  AAnimal();
  AAnimal(AAnimal const &src);
  virtual ~AAnimal();

  AAnimal &operator=(AAnimal const &rhs);

  virtual void makeSound() const = 0;

  std::string getType(void) const;

protected:
  std::string type;
};

#endif
