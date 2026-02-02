#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal {
public:
  Animal();
  Animal(Animal const &src);
  ~Animal();

  Animal &operator=(Animal const &rhs);

  virtual void makeSound();

protected:
    std::string type;
};

#endif
