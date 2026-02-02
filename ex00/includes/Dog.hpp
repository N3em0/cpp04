
#include "Animal.hpp" 

#ifndef DOG_HPP
#define DOG_HPP


class Dog : public Animal {
public:
  Dog();
  Dog(Dog const &src);
  ~Dog();

  Dog &operator=(Dog const &rhs);
};

#endif
