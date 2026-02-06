#include <iostream>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAAnimal
{
public:
  WrongAAnimal();
  WrongAAnimal(WrongAAnimal const &src);
  virtual ~WrongAAnimal();

  WrongAAnimal &operator=(WrongAAnimal const &rhs);

  virtual void makeSound() const;

  std::string getType(void) const;

protected:
  std::string type;
};

#endif
