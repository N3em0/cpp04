#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal {
public:
  Animal();
  Animal(Animal const &src);
  virtual ~Animal();

  Animal &operator=(Animal const &rhs);

  virtual void makeSound() const;

  std::string getType(void) const;

protected:
    std::string type;
};

#endif
