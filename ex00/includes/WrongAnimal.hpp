#include <iostream>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(WrongAnimal const &src);
  virtual ~WrongAnimal();

  WrongAnimal &operator=(WrongAnimal const &rhs);

  void makeSound() const;

  std::string getType(void) const;

protected:
    std::string type;
};

#endif
